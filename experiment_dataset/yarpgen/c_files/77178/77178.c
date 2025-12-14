/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (max((max(((8743398668551397147 ? 16777215 : 281184974)), var_12)), (arr_2 [i_1])));
                var_16 |= ((+(max((3688226406 + var_11), -var_10))));
                var_17 -= ((-(((arr_1 [18]) ? (arr_1 [2]) : (arr_1 [16])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] = (arr_5 [i_0]);
                                var_18 = 4013782348;
                            }
                        }
                    }
                }
                var_19 = (min(var_19, -4));
            }
        }
    }
    var_20 = ((var_5 ? var_13 : var_0));
    #pragma endscop
}
