/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 800744120;
    var_14 ^= var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 1] [i_1] [i_2] = ((!((min(132, 1)))));
                    var_15 = (min(var_9, (((1007050951980116210 ? 3776147412 : 127)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_1] [i_1] [i_3] [i_3] = var_3;
                                var_16 = ((!(((~(((-9223372036854775807 - 1) ? 16 : 237)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
