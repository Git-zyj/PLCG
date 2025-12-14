/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 = (((arr_6 [i_1] [i_1 + 3]) ? ((((-9223372036854775807 - 1) ? 3097406195 : var_0))) : (max((arr_4 [i_1 + 3] [2] [i_1 + 3]), (arr_6 [i_1 + 3] [i_1 + 3])))));
                    arr_8 [i_0] [i_0] [11] [i_0] = min(((((((-(arr_3 [i_0] [i_1])))) && (3998843052 / -5591599853320551417)))), (arr_1 [i_2] [i_1]));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = (((((((arr_12 [i_4] [i_2] [i_2] [i_2]) >= (arr_12 [i_4] [i_2] [i_3 + 3] [i_4 - 1]))))) == (arr_12 [i_4] [i_1 + 3] [i_2] [i_2])));
                                arr_14 [i_4] [i_1] [i_2] [i_3] [i_4] = (arr_4 [i_3] [2] [i_1 + 4]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_12 = (max(-65, (((!((((arr_15 [i_5]) ^ (arr_7 [i_5])))))))));
                    arr_22 [i_5] [i_5] [i_6] [i_7] = ((arr_6 [i_5] [i_6 - 3]) ^ 1793753290);
                    arr_23 [i_6] [i_6] = 670281441;
                }
            }
        }
    }
    #pragma endscop
}
