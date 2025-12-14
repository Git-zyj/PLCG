/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 ^= 755585812;
                                var_20 = (min(var_20, (max((!var_12), (min((((arr_6 [0] [i_1] [i_3]) ? 16 : var_16)), 11))))));
                            }
                        }
                    }
                }
                arr_14 [7] [i_1] = 0;
                var_21 = (1 && ((((arr_2 [i_1] [i_1]) ? 18446744073709551599 : (arr_3 [i_0])))));
                var_22 = (arr_7 [i_0 - 2] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_23 = (min(((var_11 ? (~1) : (min(7812596857009124700, 1)))), ((max((!var_14), (!18446744073709551593))))));
    #pragma endscop
}
