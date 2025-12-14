/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((((~-1780336428) ? 13 : (1587 > 65531)))) || var_3)))));
    var_11 = 0;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (((-40 ? -792630526 : -8)))));
                    var_13 = (18446744073709551600 * 3);

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_14 = (((var_1 * var_5) / var_0));
                        var_15 = ((65535 ? 36716 : var_0));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_16 = 65524;
                        var_17 = ((64437 ? ((65512 ? (-2147483647 - 1) : -8)) : var_4));
                        var_18 = ((-(!127)));
                    }
                }
            }
        }
    }
    var_19 = ((~((-((var_6 ? 64437 : 15))))));

    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        var_20 = ((((49883 * 1101) >> ((19952 ? 7 : 2857)))) << ((((((((-2147483647 - 1) ? 63 : var_2))) ? 37028 : (((49883 == (-2147483647 - 1)))))) - 37024)));
        arr_24 [3] [12] = 65535;
        var_21 = (max(var_21, -1959432943));
        var_22 ^= ((max(var_1, -2147483626)));
    }
    #pragma endscop
}
