/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (max(var_14, (arr_2 [i_0])));
        var_15 *= (~-22974);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 = 1;
                        var_17 = (min(var_17, (((((22952 >> (((arr_1 [21] [i_1]) - 29181)))) & -22942)))));
                        arr_11 [i_1] = (((((min(1, (arr_7 [i_0] [i_1 + 1] [i_2] [i_1 + 1]))) ^ (max((arr_7 [i_2 - 1] [i_2 - 1] [15] [13]), 143285360)))) >= (arr_1 [i_0] [i_1 + 1])));
                    }
                }
            }
        }
        arr_12 [i_0] |= ((8353 ? ((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_1 : (arr_4 [i_0])))) ? (~-16601) : (2743487167 != var_11))) : 65535));
    }
    var_18 = (min((((var_5 & 3481929399434854810) ? var_12 : (((max(var_1, var_6)))))), (var_6 % var_0)));

    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        var_19 = (min(var_19, (((-(max((-9223372036854775807 - 1), (arr_14 [i_4 + 3]))))))));
        var_20 = ((+((+(((arr_14 [i_4 - 2]) - (arr_4 [i_4 - 2])))))));
    }
    var_21 -= (((((var_13 ? var_10 : var_0) + var_4))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            {
                var_22 = (max(var_22, (((var_2 ? var_10 : (((7 ? var_9 : -1762092766))))))));
                var_23 -= (min((435924608 / 65536), -var_5));
            }
        }
    }
    #pragma endscop
}
