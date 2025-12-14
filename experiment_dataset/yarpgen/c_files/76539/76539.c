/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = 9071576201599881179;
        arr_5 [i_0] [i_0] = ((((max((max(-1581235718, 650378884431337658)), var_5))) ? ((((min(24897, 8191))) ? (-127 - 1) : (arr_3 [i_0 - 1]))) : var_10));
        var_12 *= (max((((arr_1 [i_0 - 1]) ^ var_11)), (arr_3 [i_0 - 1])));
    }
    var_13 &= (max(var_7, (max(((var_4 ? var_10 : var_6)), ((min(15, 0)))))));

    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_10 [i_1] = min(((1 ? (((arr_0 [i_1] [i_1]) ? var_2 : (arr_1 [i_1]))) : ((4 ? var_3 : 38)))), (((min(11039484179109131719, (arr_6 [i_1]))))));
        var_14 ^= (((((79 / (max(7839601896606525949, var_0))))) ? ((33202 ? ((min((arr_9 [i_1] [i_1]), -24897))) : 1)) : (((arr_3 [i_1]) * (max((arr_1 [i_1]), -1936845101))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_14 [i_2] = ((((-45 ? var_4 : (arr_13 [i_2] [i_2]))) & ((32313 ? (arr_12 [i_2]) : -1))));

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            var_15 = ((var_11 ^ (arr_1 [i_3 + 1])));
            var_16 -= (((arr_3 [i_3 + 1]) ? -8872505565927428911 : var_9));
            arr_18 [i_2] [i_3] = ((~(arr_2 [i_3 + 1])));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_29 [i_6] [i_4] [2] [i_4] [i_2] = (arr_0 [i_3 - 2] [i_3 - 1]);
                            arr_30 [i_2] [i_3] [7] [i_5] [i_6] [i_4] = var_2;
                            var_17 += (arr_19 [2] [i_3 + 1]);
                            arr_31 [i_4] [i_3 + 1] [i_4 - 1] [i_4] [i_5] [i_6] = 64;
                            arr_32 [3] [i_3 - 1] [i_4] [i_2] [17] [i_4 - 3] [i_4 + 1] = (arr_26 [i_2] [i_3 + 1] [i_4] [i_4 - 2] [i_4] [i_4 + 3]);
                        }
                        arr_33 [i_2] [i_5] [i_4] [i_3] [i_4] = (arr_22 [i_2] [i_4 + 3] [11] [i_3 - 2]);
                        var_18 += -1727004560;
                        var_19 ^= 2387937104746086361;
                        arr_34 [i_5] [i_5] [i_4] [i_3] [i_2] = (arr_19 [i_3 - 1] [i_3 + 1]);
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_20 ^= (~-1956705280);
            var_21 = (max(var_21, (~2021265521)));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_22 += arr_36 [1] [i_8] [1];
            arr_41 [i_8] [i_8] [i_2] = (-(-127 - 1));
        }
        arr_42 [i_2] [i_2] = (arr_16 [7] [i_2] [i_2]);
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        arr_47 [16] [i_9] = ((((min((min(-74912370, -7)), ((max(32767, 79)))))) < (var_4 - var_5)));
        var_23 = (max((min(0, (arr_45 [i_9] [i_9]))), ((((arr_45 [i_9] [i_9]) || (arr_45 [i_9] [i_9]))))));
        var_24 = (min(var_24, ((max(7623, ((1 ? 1 : -5712171158786887653)))))));
        var_25 = var_5;
        arr_48 [i_9] = (max(((4064 ? (arr_0 [i_9] [1]) : (min((arr_0 [i_9] [i_9]), -24877)))), (((-7 ? (arr_45 [i_9] [i_9]) : (min(var_4, -6172272435434679202)))))));
    }
    #pragma endscop
}
