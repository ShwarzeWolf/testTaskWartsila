#pragma once

double multiplyCoefficient = 1.8;
double addingCoefficient = 32.0;

double convertingFunction (double temperature) {
	return temperature * multiplyCoefficient + addingCoefficient;
};

template<class C>
C convertoFahrenheit (const C & temperatureInCelcium) {

	C temperatureInFahrenheit = temperatureInCelcium;

	for (auto i = temperatureInFahrenheit.begin (); i != temperatureInFahrenheit.end (); ++i)
		*i = convertingFunction (*i);

	return temperatureInFahrenheit;
}
