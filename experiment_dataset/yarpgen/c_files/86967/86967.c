/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((min(((4294967294 ? 4294967291 : 4014251559479285401)), var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_11 *= ((((min(var_6, 65512))) <= 9));
                                var_12 = ((!((max((14 || 1), 65535)))));
                                var_13 = (max((var_1 / var_1), ((max(var_2, (arr_10 [i_1 - 2]))))));
                            }
                        }
                    }
                    arr_14 [i_0] [0] &= ((-(min(((max(var_2, 65500))), var_6))));
                }
            }
        }
    }
    #pragma endscop
}
