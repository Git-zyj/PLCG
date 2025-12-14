/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        arr_3 [i_0] [i_0 - 1] = (max(((-1 ? 256155088286813275 : 4)), 1865832115));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = 115;
        arr_8 [i_1] [i_1] = var_0;
        arr_9 [i_1] = var_3;
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    arr_18 [i_2] [0] = var_0;
                    arr_19 [6] [i_3] [6] = (min(((min(1, ((252 ? 0 : 1865832099))))), (max(var_3, ((288230376151711743 ? (arr_4 [11] [i_4 - 2]) : var_6))))));
                }
            }
        }
        var_10 += (max(((((arr_6 [i_2]) & ((max(var_0, var_5)))))), ((((-84 ? var_4 : var_8)) & (arr_13 [i_2])))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_11 *= 24481;

        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_12 = (min(var_12, var_6));
            arr_24 [i_6] = ((var_0 ? var_7 : (arr_23 [i_6] [12])));
            var_13 = (min(var_13, (((!(arr_23 [0] [i_6 + 1]))))));
            arr_25 [i_5] [i_6 - 1] [i_6] = var_1;
        }
        arr_26 [i_5 - 1] = (var_9 <= var_3);
        arr_27 [i_5] = var_1;
    }
    var_14 -= (max(136, (((min(84, -256155088286813275)) + var_2))));
    var_15 = var_9;
    var_16 = ((((((var_3 * var_5) ? (var_3 ^ var_3) : ((1938134140428700799 ? 639574888 : 115))))) ? (-91 || var_5) : ((18158513697557839880 ? 288230376151711743 : 131))));

    /* vectorizable */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        var_17 |= var_1;
        arr_30 [i_7] [i_7] = var_5;
        var_18 *= (((arr_28 [6]) >= (var_8 * var_4)));
    }
    #pragma endscop
}
