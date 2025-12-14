/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = (max(var_13, ((((max(511, var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_14 = 30138;
                        arr_12 [i_0] = (((((0 ? var_0 : 247))) ? (arr_8 [i_3]) : (((arr_7 [i_3] [i_1] [i_0]) ? 10026883503152415317 : var_7))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4] = ((((var_4 & (arr_5 [i_1] [i_0 - 2]))) & ((((arr_1 [i_2]) ? var_7 : var_11)))));
                        arr_18 [i_2] [i_2] [i_2] [i_2] = ((var_1 > (arr_2 [i_2] [i_2])));
                        var_15 -= var_3;
                        arr_19 [i_0] [i_0] [i_0] [i_0] = (var_4 & -18408);
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_16 = (max(var_16, (arr_1 [i_1])));
                        arr_24 [i_5] = 14186982785031900027;
                    }
                    var_17 = (min(var_17, (((-(arr_9 [i_2 + 1] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
