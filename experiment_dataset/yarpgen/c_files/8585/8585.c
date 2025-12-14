/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((8537240949812477397 ^ 1) ? ((1 ? -109 : -488443630)) : (-1020602535 | 1)))) ? (~var_2) : (((~-4) ^ ((min(var_9, var_3)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = 4161536;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = max(830708600, 8064);
                    var_14 = (min(var_14, (~7)));
                    var_15 -= ((((((-1342593456 + 2147483647) << (16311 - 16311)))) ? ((var_9 ? 5231571160640073717 : 52960)) : 16));
                    arr_9 [i_0] [i_0] [i_2] = -var_7;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_16 = -1;
        var_17 = (((!-528479352) ? (((1 ? 1467410292 : var_9))) : (((((16515072 ? 229 : 160))) * (12715 / var_6)))));
        var_18 = (max(var_18, 1));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_19 = ((((((~18) == ((var_0 ? var_3 : (-2147483647 - 1)))))) * var_3));
        var_20 = (min(var_10, (--1)));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_21 |= var_0;
        var_22 &= ((-(min(18, (((53 >> (96 - 67))))))));
        var_23 = ((+-836469249) - ((96 ? ((8797090575854528902 ? 3 : 0)) : ((-31908 ? var_9 : -3154)))));
    }
    var_24 = (((((-107559466 ? 1 : 1))) ? 0 : -1));
    var_25 |= -31;
    var_26 |= ((~(~-20)));
    #pragma endscop
}
