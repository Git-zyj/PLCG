/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 += ((~(arr_0 [i_3])));
                            arr_10 [13] = ((!((!(arr_2 [i_1])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((arr_11 [i_4] [i_1]) ? ((65535 ? ((65520 ? 5 : 2418333395)) : 65525)) : (arr_19 [i_6] [1] [4] [i_1] [20])))));
                                arr_20 [i_6] [1] [18] [14] [15] = -1397817014;
                                var_18 = (arr_8 [i_0] [i_1] [i_0] [i_5]);
                                arr_21 [i_0] [8] [14] [5] [19] [i_6] [i_5] = (arr_12 [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
