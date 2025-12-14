/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_11 = (((((1 / 47380) + (var_1 * 1))) * -0));
            var_12 = (max(var_12, 1));
            var_13 = (((1 <= var_0) <= 35815));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_14 = 18446744073709551612;
            var_15 = ((-((~(288221580058689536 & var_10)))));
        }
        var_16 |= ((((~1) / (96 | var_2))));
    }
    var_17 = ((!((!(255 >= 18578)))));
    #pragma endscop
}
