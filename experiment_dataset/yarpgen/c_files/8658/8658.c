/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_14 = 2123149599;
                                var_15 = ((((-(max((arr_1 [5]), (arr_9 [i_0] [i_0] [i_0] [i_0]))))) & ((((min(var_2, 71)) & (~var_2))))));
                            }
                            arr_16 [i_0] [i_0] [i_0 - 2] [9] [8] [i_0] = ((((((((var_10 ? -1 : 1886778153))) || (((~(arr_10 [i_0] [i_1] [i_2] [i_1] [i_0] [9]))))))) ^ ((((((arr_11 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0]) | 65535)) != -var_10)))));
                        }
                    }
                }
                arr_17 [i_0] [i_1] = (((arr_7 [i_0 - 2] [i_0 - 2] [8] [i_0 + 1]) + (((((arr_15 [i_0] [i_0 - 2] [i_0 - 2] [i_1] [1] [i_1] [i_1]) ? var_1 : 8794))))));
                arr_18 [6] [i_1] [6] |= (min(65530, 2123149588));
            }
        }
    }
    var_16 = (min(var_16, ((max(((((((var_5 >> (var_10 - 60079)))) ? 2123149605 : (!15492592610480552285)))), (min(2123149616, 2703621607)))))));
    #pragma endscop
}
