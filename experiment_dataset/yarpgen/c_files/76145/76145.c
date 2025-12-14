/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [7] [7] [i_0] = (arr_8 [i_0] [i_1] [3] [4]);
                            var_20 = (((max((((arr_0 [i_0]) << (117440512 - 117440509))), (arr_6 [i_0] [i_0]))) < 21));
                            var_21 = (min((7168 > 52528), ((~((max(13007, 65535)))))));
                            var_22 = (max(var_22, 2559177857));
                            arr_11 [8] [8] &= ((((max((min(127, 27)), (arr_5 [i_0] [2] [4] [i_0])))) && ((max(((var_2 ? var_9 : (arr_3 [4]))), 56)))));
                        }
                    }
                }
                var_23 = (((((~(arr_9 [i_0] [i_1] [i_1])))) ? (((arr_9 [i_0] [i_0] [i_0]) ? (arr_9 [9] [i_1] [i_1]) : (arr_9 [i_1] [i_0] [i_0]))) : ((~(arr_9 [i_1] [i_1] [i_0])))));
            }
        }
    }
    var_24 = ((((max(655627148, ((min(var_3, var_16)))))) ? var_11 : var_17));
    var_25 = ((~(~var_3)));
    var_26 = var_4;
    #pragma endscop
}
