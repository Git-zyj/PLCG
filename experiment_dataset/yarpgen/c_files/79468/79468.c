/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 += (127 < 116);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 = ((~(min(-0, (((arr_4 [i_2]) - 65526))))));
                            arr_10 [i_0 - 1] [i_1] [i_2 + 1] [i_2] [i_0] = ((((min((~var_5), (arr_2 [i_2 + 1] [i_2 + 1])))) ? ((min(((3 ? var_1 : -981898230)), var_16))) : 9920167259677180397));
                            arr_11 [i_0] [i_1] [i_2] [i_0] = (((arr_7 [i_2] [i_1] [i_2]) + (3695629485 - var_12)));
                        }
                    }
                }
            }
        }
    }
    var_20 -= 981898216;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                arr_19 [i_4] [i_4] &= (((((max(var_17, (arr_13 [i_5])))) ? var_14 : ((max((arr_14 [i_5]), (arr_5 [i_5] [i_5] [i_4] [i_5])))))));
                arr_20 [i_4] [i_4] [i_5] = (var_15 ? ((min((arr_16 [i_4]), (arr_6 [i_4] [i_4] [i_5] [i_5])))) : 27);
                arr_21 [i_5] [i_4] [i_4] |= (arr_6 [i_4] [i_5] [i_5] [i_4]);
                var_21 = var_10;
            }
        }
    }
    #pragma endscop
}
