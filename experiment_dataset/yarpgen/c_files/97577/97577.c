/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((!-var_6) >> (!var_5)));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] = (((((arr_7 [i_2 + 2] [i_1] [i_2]) ^ 235)) >= (arr_7 [i_2 + 1] [i_1] [i_2])));
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] = (((((239 ? 42891 : 131071)) ^ (!32975))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_11 = (((var_8 ^ var_7) && var_0));
    #pragma endscop
}
