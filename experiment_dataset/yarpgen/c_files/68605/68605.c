/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = ((!((min((arr_3 [i_0] [i_0] [i_0]), var_6)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = (((max((!var_0), ((var_10 ? -5155989304524022487 : (arr_2 [7]))))) * (((arr_13 [i_4 - 4] [i_2] [i_2] [i_0] [i_2] [i_0]) | -324341044))));
                                arr_15 [i_2] = var_4;
                                var_14 += (((arr_8 [i_0] [i_0] [i_0]) ? ((((max(var_2, var_4))) ? ((((arr_2 [i_1]) ? var_7 : var_4))) : (var_6 ^ var_8))) : (min((arr_6 [i_4 - 3] [i_4 + 1] [i_4 - 3] [i_4 - 1]), (arr_7 [11] [i_1] [11] [i_3])))));
                            }
                        }
                    }
                    var_15 &= (min((max(324341044, 0)), (arr_14 [i_0] [i_0] [i_0] [i_0])));
                    var_16 = var_10;
                }
            }
        }
    }
    var_17 = var_11;
    #pragma endscop
}
