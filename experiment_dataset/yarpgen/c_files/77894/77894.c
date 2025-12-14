/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((((arr_7 [i_1 + 2] [i_2 + 1] [i_3 - 2]) ^ (((~var_11) ? (((~(arr_7 [i_0] [i_0] [i_2 - 3])))) : (arr_6 [i_3] [i_3 - 2] [i_3] [i_3 - 1]))))))));

                            for (int i_4 = 3; i_4 < 21;i_4 += 1)
                            {
                                var_18 = ((~(arr_10 [i_2] [i_2 - 2] [i_2 - 2] [i_3] [i_4 + 1] [i_4 - 1])));
                                var_19 = -87;
                            }
                            var_20 = (min(var_20, (((var_15 ? (max(((((arr_11 [i_3] [i_1 + 4]) ? 0 : -87))), (((arr_4 [i_0] [i_1] [i_2 + 1]) ? 4294967295 : (arr_6 [i_0] [15] [i_2] [i_3 + 1]))))) : 12097)))));
                            arr_12 [i_3] [i_1 + 3] [i_2 - 3] [i_2 - 3] [i_2 + 1] |= var_3;
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_1] = (((max(1022, 86))));
            }
        }
    }
    #pragma endscop
}
