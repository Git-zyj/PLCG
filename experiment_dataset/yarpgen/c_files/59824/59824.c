/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (min((17365448653929670984 == -8834218527200307820), (arr_1 [i_0] [i_1])));
                var_20 = (min(var_20, ((min((((arr_1 [i_0] [i_1]) / -1890181731)), (min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_21 = (arr_5 [i_1] [i_3 + 1]);
                            arr_8 [i_1] = 70368744177663;
                        }
                    }
                }
            }
        }
    }
    var_22 = (((((((var_18 ? var_0 : var_1)) + 17365448653929670984))) ? (((((var_5 ? var_9 : var_13))) ? ((8606812677936462095 ? 0 : var_11)) : (var_7 && -17))) : (min((var_7 == 17365448653929670984), ((2606340010 ? 8388607 : var_10))))));
    #pragma endscop
}
