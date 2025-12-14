/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_3));
    var_14 = (var_9 == var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (max(var_15, 244));
                var_16 = 15228638758266705289;
                var_17 *= (((arr_3 [i_1]) && (!1)));
                arr_4 [i_0] [i_0] = (((var_0 * -1) ? -var_0 : (max((min(3557019253, var_9)), 189))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_18 ^= -27154;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_19 |= (arr_3 [i_6]);
                                var_20 = (max(var_20, (((((0 ? 0 : (arr_3 [i_5]))) ^ (arr_3 [i_3]))))));
                                var_21 -= max((3590204586 - var_5), ((((arr_5 [i_2 + 2]) ? ((var_3 ? (arr_2 [i_6]) : 28164)) : (arr_0 [1] [i_2 + 4])))));
                                var_22 = (arr_14 [1] [i_4] [i_5] [i_6]);
                                var_23 += (min(((16363172106884946306 ? (arr_1 [i_3]) : ((-(arr_12 [1] [i_3] [i_4] [i_3] [i_6]))))), (-127 > 67)));
                            }
                        }
                    }
                    var_24 = (((arr_14 [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_2]) ? (((arr_14 [i_2] [i_2] [i_2 + 3] [i_2]) ? (arr_14 [i_2] [7] [i_2 + 1] [i_2 + 4]) : (arr_14 [i_2 + 3] [i_2 + 3] [i_2 + 2] [11]))) : 197));
                }
            }
        }
    }
    #pragma endscop
}
