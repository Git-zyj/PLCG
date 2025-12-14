/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_8;
        var_14 = (max(((min((arr_0 [i_0 - 1]), ((max(1, 0)))))), ((var_1 ? 4611686018427355136 : (arr_1 [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = ((var_13 ? ((33 ^ (((arr_4 [i_1]) ? var_11 : 4611686018427355117)))) : -229256540));
        arr_6 [i_1] [1] = (min((arr_4 [i_1]), ((var_0 ? (max(var_3, (arr_4 [i_1]))) : (var_6 | var_12)))));
        arr_7 [i_1] = var_7;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_16 [i_2] [i_2] [i_4] [i_4] [i_5] [i_5 - 2] = ((((((var_5 || (((-705578880 ? -4303014672126700440 : -1))))))) % (max((-32767 - 1), ((max(0, -32755)))))));
                        arr_17 [i_2] [i_4] [i_5] = var_13;
                        arr_18 [i_2] [i_5] [i_4] [i_5] = (arr_13 [i_2] [i_2] [i_2] [i_3 + 2]);
                    }
                }
            }
        }
        arr_19 [i_2] = (arr_10 [i_2]);
    }
    var_15 = (-705578880 ? -5 : 16);
    var_16 = (min((~16), var_0));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 11;i_8 += 1)
            {
                {
                    var_17 = var_0;
                    arr_26 [i_6] [i_6] [4] [i_8] = ((min((max(var_4, (arr_12 [i_6] [i_6] [i_6]))), (arr_24 [i_6] [i_8 - 1]))));
                }
            }
        }
    }
    #pragma endscop
}
