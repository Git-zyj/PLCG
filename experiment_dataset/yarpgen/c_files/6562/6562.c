/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(2147483647, ((((max(9223372036854775807, var_0))) ? 0 : var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 &= var_12;
                    arr_6 [i_0] [i_1] [i_2] [i_2] = (max(((((arr_2 [i_0] [i_1] [i_2]) <= 28))), (max((arr_3 [i_1]), ((((arr_1 [i_0] [i_0]) ? (-9223372036854775807 - 1) : var_14)))))));
                    var_20 = ((((max((arr_4 [i_0] [i_0]), ((max(var_2, 9223372036854775807)))))) ? (arr_3 [i_1]) : (((((arr_4 [i_0] [i_0]) >= (arr_4 [i_0] [i_1])))))));
                    var_21 = (max(var_21, var_10));
                    var_22 = ((((((9223372036854775807 * (arr_3 [i_0]))) > (-9223372036854775807 - 1))) ? ((((!(arr_4 [i_2] [i_0]))))) : (((429655769 ? 2147483637 : -4457504636030344077)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                {
                    var_23 = (max(((~(((!(arr_13 [i_3] [i_3] [i_4] [i_5 + 1])))))), (6 % 8316)));
                    var_24 = (max(-8711910394078481912, (((arr_5 [i_5 - 1] [i_5 + 2] [i_5 + 3] [i_5 + 3]) * (arr_2 [i_5] [i_5 - 1] [i_5])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_25 &= -78;
                                var_26 = (arr_17 [i_3] [i_3] [i_3] [i_6] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
