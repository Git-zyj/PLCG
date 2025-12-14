/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max((-2147483640 < var_4), var_1));
    var_15 *= 1887894405593754560;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        var_17 += (1 ? (((arr_1 [4]) - (arr_1 [1]))) : ((-((((arr_0 [i_0]) >= 255))))));
        var_18 *= ((((((!61387) ? ((max((arr_1 [8]), (arr_1 [12])))) : ((min((arr_1 [6]), 65535)))))) ? ((((max(120, (arr_1 [12])))))) : (min(0, 4972042325544740033))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_19 *= max(((-1444852990 ? 16558849668115797065 : 1)), ((((arr_2 [i_1]) ? ((((arr_4 [0]) <= (arr_1 [i_1])))) : -4))));
        var_20 ^= (min(((((max(63, 9)) < (41 | 3780341420880070013)))), ((((min(197, 2747129538526730943))) ? (arr_1 [i_1]) : (min(2443576669516466368, 22))))));
        var_21 = (min(var_21, ((((((((arr_3 [i_1]) == -924236282)))) ^ var_12)))));
        arr_6 [i_1] &= ((0 ? 8653328172193098239 : (110 <= 1459343148)));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_22 ^= (min((((1810107371183250479 ? (arr_9 [i_2]) : ((-764488775 ? 107 : var_12))))), (min(15412518286036299812, (arr_1 [0])))));
        var_23 -= ((1978219485 <= (8653328172193098239 & 1)));
        var_24 = (max(var_24, ((((((18446744073709551615 - (arr_1 [18])))) ? ((+((-1893557326 ? (arr_8 [i_2] [i_2]) : 63)))) : (((max((arr_1 [4]), (min(var_12, (arr_1 [10]))))))))))));
        var_25 *= 8922979386406136678;
    }
    #pragma endscop
}
