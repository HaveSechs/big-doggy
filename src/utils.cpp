#include <bits/stdc++.h>

double trade_value(unsigned long value, unsigned long rap, unsigned short trend, unsigned short demand, bool proj = false, bool rare = false) {
    if (!proj && !rare) {
        return value * (1.0 + (static_cast<double>(demand) + static_cast<double>(trend)) / 100.0);
    }
}