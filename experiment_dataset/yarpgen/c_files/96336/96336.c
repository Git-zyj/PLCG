/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((var_6 << var_10) & 2147483647))) || (!var_7)));
        arr_4 [i_0] [i_0] = ((-(min(var_10, var_7))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_17 = ((((min(var_9, var_0))) || (((var_13 % var_16) == (var_8 - var_11)))));
                        var_18 &= ((!((var_10 < (var_13 - var_12)))));
                        var_19 = -var_15;

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            arr_15 [i_0] [i_4] [i_4] [7] [8] = (~var_6);
                            var_20 = (max(var_20, var_3));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_18 [i_5] [i_3] [i_1] [i_1] [i_0] = var_5;
                            arr_19 [i_0] [i_5] [0] [i_3] [i_5] = (max(((!(-2147483647 - 1))), var_4));
                        }
                        arr_20 [i_2] [i_1] [i_0 + 1] = (-12007 | var_10);
                    }
                    arr_21 [i_2] [i_2] = (var_6 + var_13);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_24 [i_6] = ((var_5 - (var_0 < var_3)));
        arr_25 [i_6] [i_6] = (((max(var_8, (var_14 ^ var_0))) + (((((((max(var_11, var_1)))) != (~var_15)))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_28 [2] &= (-1289843264 / 1289843245);
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                {
                    arr_34 [i_7] [i_7] [i_8] [i_7] = (((var_0 && var_7) * ((var_6 & (var_7 ^ var_13)))));
                    arr_35 [6] [i_7] [i_9] = (((var_11 - (var_3 - var_15))) + (var_5 - var_10));
                }
            }
        }
        arr_36 [i_7] [i_7] = (-1289843245 * 6198891853560736017);
        arr_37 [i_7] = ((((max(var_8, var_1))) && ((!(var_12 || var_3)))));
    }
    var_21 = var_2;
    var_22 = (var_3 & var_1);
    var_23 = ((((max(2147483647, 1)) ^ (var_7 ^ var_10))));
    #pragma endscop
}
