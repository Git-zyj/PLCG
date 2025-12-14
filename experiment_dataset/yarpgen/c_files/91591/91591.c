/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -11;
    var_12 = ((~(((254 ? 80 : 270)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((~((-var_5 ? var_1 : (~30))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 -= (min(((-31 ? 0 : -23)), ((((((var_8 ? (arr_8 [i_0]) : (arr_0 [i_0])))) >= (arr_9 [i_0] [i_0] [1] [1]))))));
                            var_15 *= (((((arr_11 [i_0] [i_0] [6] [i_0]) - (arr_2 [i_0]))) >= (((0 == (arr_6 [i_0]))))));
                            arr_13 [i_0] [i_0] [i_1] = ((-11 ? ((max((arr_5 [i_0] [i_0] [i_3]), (arr_5 [i_3] [i_1] [i_2])))) : (((((var_5 ? var_1 : var_10))) ? ((~(arr_7 [i_1]))) : 30175))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
