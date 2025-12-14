/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (10 == 248);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] = ((1152920954851033088 ? 2071982649 : (((~(arr_1 [i_0 + 1]))))));
                                arr_13 [i_0] = (min(((var_1 * (var_13 & -32))), var_4));
                            }
                        }
                    }
                    arr_14 [i_0 + 1] [i_0] [i_1] [i_2] = (min((((arr_1 [i_0 + 1]) ^ (arr_0 [i_1]))), -32));
                    var_16 = ((-((max(-31505, 0)))));
                }
            }
        }
    }
    #pragma endscop
}
