/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (((arr_1 [i_0] [i_1]) ? (arr_5 [i_0 + 2] [i_0 + 2]) : -23135));
                var_16 -= (max((((min(3385, 65535)) ^ -309895778)), var_8));
                var_17 = var_11;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_18 = (-1907851536 > 65531);
                    arr_16 [i_2] [i_3] [i_2] = (min(((((min((arr_10 [i_2] [i_3] [i_4]), (arr_6 [i_2] [3])))) ? (arr_6 [i_2] [i_4]) : (min(var_14, var_4)))), ((min(var_9, 9223372036854775807)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_19 = (((((92 ? 65535 : 4755))) ? ((~(65535 + -77))) : 8));
                                arr_24 [i_2] [i_2] [i_4] |= var_13;
                            }
                        }
                    }
                    arr_25 [i_2] [i_2] [i_2] [i_2] = ((max(((min(-55, (arr_15 [i_2] [i_2] [i_2])))), ((-(arr_8 [i_4]))))));
                }
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
