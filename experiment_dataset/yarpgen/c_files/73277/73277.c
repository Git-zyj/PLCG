/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -995197423;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (max(12671452961549898543, 1090780786));
                var_12 = (((((61684 > (arr_4 [i_0] [i_1])))) == (((!((max(var_3, var_4))))))));
                var_13 = var_3;
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                {
                    var_14 = ((((((var_2 ^ (arr_2 [i_2] [i_2] [i_4]))) ? (min(var_4, var_1)) : 1209432367))));
                    var_15 = ((var_5 ? ((((max(var_4, var_5))) ? ((max(var_3, 41774))) : ((var_0 ? var_1 : (arr_8 [i_2] [i_4]))))) : ((((arr_5 [i_2]) << (var_4 + 6557760971478030208))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_16 = ((var_0 ? ((((~0) | ((~(arr_16 [i_2])))))) : (~var_1)));
                                var_17 = (min((((((arr_18 [i_2] [i_2] [i_2] [i_2] [i_5] [i_5] [i_2]) ? var_7 : var_9)))), 176));
                                var_18 = ((((~(arr_10 [i_2] [i_4] [i_3] [i_2]))) ^ (((arr_8 [i_2] [i_2]) ? (arr_10 [i_2] [i_2] [i_4 - 2] [i_2]) : (arr_10 [i_2] [i_3 + 3] [i_4 + 2] [i_2])))));
                                arr_19 [i_2] [i_2] [i_4 - 2] [i_5] [i_6 - 1] [i_2] [i_2] = (min(((max((arr_10 [i_2] [i_2] [i_4 - 2] [i_2]), var_3))), ((841656929 ? 9223372036854775783 : (arr_18 [i_2] [i_5] [6] [i_3 - 1] [i_3] [i_2] [i_2])))));
                            }
                        }
                    }
                    arr_20 [i_2] [i_3] [i_2] = (((((max(var_5, 2024367651))) ? ((min(1, 0))) : ((max(1, 1))))));
                    var_19 = -3416922709709582340;
                }
            }
        }
        arr_21 [i_2] [i_2] = 1;
        arr_22 [i_2] = (((((var_9 ? 1 : 0)))) ? (!61906) : ((min((arr_0 [i_2]), (arr_0 [i_2])))));
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7 + 1] = (max((min(var_1, -var_9)), ((161783734 * (arr_25 [i_7 + 1])))));
        arr_27 [i_7] = ((((~var_5) ? (225 != var_4) : var_4)));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 23;i_8 += 1) /* same iter space */
    {
        var_20 = (!1);
        var_21 = 51310;
        var_22 = 0;
    }
    var_23 += var_2;
    #pragma endscop
}
