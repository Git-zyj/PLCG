/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_13);
    var_16 ^= (((min((~var_12), (~29))) & (~var_11)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = ((((min((arr_6 [i_0]), var_8))) ? ((~(arr_6 [i_2]))) : ((min((min(511, (arr_9 [i_0]))), 58568)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_18 [i_3] [i_3] [i_2] [i_1] [i_3] = (((-((max(123, 58561))))));
                                var_17 &= (min(-16, ((min((arr_8 [i_0] [i_3 - 1] [i_3 - 1] [i_0]), ((17856388586168597124 ? (arr_2 [i_2]) : 177)))))));
                                var_18 += ((max((arr_14 [i_3 + 1] [i_3] [i_3 - 2] [10] [i_0]), 22)));
                                arr_19 [i_3] [i_3] = (min(((((arr_15 [i_3] [9] [i_3 - 3] [i_3] [i_3 + 1] [2] [9]) >= var_13))), (min(1023, (arr_17 [i_3] [i_3] [i_3 - 2] [i_3 - 2] [i_3 - 3])))));
                                var_19 = min((max((arr_14 [4] [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 - 1]), (arr_14 [1] [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 1]))), (!31765));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
