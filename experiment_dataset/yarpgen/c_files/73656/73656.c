/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 += (arr_4 [i_1]);
                var_18 = ((((((2199101564 << (4134517655 - 4134517633))) != (((arr_5 [i_0] [i_0]) - (arr_1 [i_1]))))) ? -1 : ((2095865730 + (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_19 -= ((-(+-0)));
                            var_20 = (min(var_20, (((((-(arr_9 [i_0] [i_0] [i_2] [i_3]))) != (arr_9 [i_1] [i_2] [i_1] [i_0]))))));
                            arr_10 [i_0] [i_1] [15] [i_0] = (((((var_8 ? 160449640 : 57) == (((arr_5 [i_1] [i_0]) ? var_12 : 2199101564))))));
                            var_21 ^= ((((((arr_8 [i_0] [i_1] [i_2]) ? (arr_8 [i_2] [i_1] [i_0]) : (arr_8 [i_1] [i_2] [i_3])))) & (min(224, var_5))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (24757 == 29503);
    var_23 = (max((-2842703597470034744 <= var_1), ((((min(65535, var_11))) ? var_6 : -12))));
    #pragma endscop
}
