/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [8] [i_0] = (arr_1 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 &= (((((arr_11 [17] [i_1] [i_2] [i_4]) + (arr_11 [i_0] [i_2 - 1] [i_3] [i_4]))) - ((-(arr_11 [i_2] [i_1] [i_4] [i_4])))));
                                arr_16 [i_1] [i_4] = ((~(min(8589934584, 4294967295))));
                                arr_17 [i_4] [i_3] [i_4] [i_1] [i_0] = (min(((((arr_11 [i_2 - 1] [i_2] [14] [19]) + (arr_12 [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 2])))), ((1 | (arr_6 [i_0] [i_1] [5] [i_0])))));
                                var_13 &= (((max((1 >> 8), (arr_12 [i_3] [15] [i_1] [i_0])))) ? ((~((~(arr_10 [i_0] [i_1] [i_3] [i_4]))))) : (max((arr_12 [i_2 + 1] [i_2 + 1] [i_2] [i_4]), (arr_1 [4] [i_0]))));
                            }
                        }
                    }
                    arr_18 [i_2 - 1] [i_2 + 1] [i_1] [i_0] &= 9789165523595451257;
                }
            }
        }
    }
    var_14 = ((((9465 ? 1028823013 : 20778)) ^ (((((max(var_8, var_7))) || (15783 || var_2))))));
    #pragma endscop
}
