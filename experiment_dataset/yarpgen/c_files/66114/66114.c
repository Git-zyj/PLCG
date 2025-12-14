/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((min(var_3, var_11))), (min((24169 >> 0), ((max(var_14, var_12)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (max(((max(((var_12 ? 1 : 27743)), -1))), ((-((var_4 % (arr_5 [i_2] [i_2] [i_2] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] = ((-(arr_1 [i_3 - 2])));
                                arr_12 [i_0 + 3] [i_2] [i_2] [7] [i_3 - 2] = (((((!1685201724) & var_7)) == (((-(!1))))));
                            }
                        }
                    }
                    var_21 = (((1 - var_11) - (--1)));
                }
            }
        }
    }
    #pragma endscop
}
