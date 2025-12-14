/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -3488306634213732053;
    var_20 = (max(var_20, (((1411374518016249767 < ((min(var_18, ((1 ? 47535 : 1))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [12] [1] = ((var_2 ? 7101934168908892762 : (((max(1, -88))))));
                    var_21 -= 0;

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_22 = ((~((max(3, 65533)))));
                        var_23 = var_18;
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_24 = (((max(7816524978316234518, 7816524978316234491)) + 84));
                        var_25 = var_6;
                    }
                    var_26 -= 0;
                }
            }
        }
    }
    #pragma endscop
}
