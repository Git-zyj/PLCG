/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_15 ^= ((-((~(arr_6 [i_1 + 4])))));
                arr_8 [i_0] [i_1] = ((!((min((arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 1]), -2147483645)))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] = 1073725440;
                                arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = -1394996405;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max((!var_8), var_9));
    var_17 += var_7;
    var_18 *= (min((var_4 ^ var_3), var_2));
    #pragma endscop
}
