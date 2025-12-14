/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = arr_1 [1];
                                arr_12 [15] [i_1] = ((((((((16 ? -22 : -22))) == var_12))) % (((var_2 != (arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_3]))))));
                                var_15 -= (arr_10 [i_0] [i_1]);
                                var_16 = (max(var_16, ((((-37 + 2147483647) << (676463150 - 676463150))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_17 = (max((max((max((arr_17 [6] [16] [16] [i_6]), var_11)), ((max(676463147, (arr_5 [0])))))), (arr_8 [i_1] [i_1 + 1] [i_1 - 1])));
                            var_18 |= (arr_6 [i_0] [i_1] [14] [13]);
                        }
                    }
                }
                var_19 = var_2;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    arr_27 [8] [8] [7] [i_7] = (max(57150, 1873659047));
                    var_20 = ((((48 * (var_1 ^ 23893)))) ? (arr_5 [i_9]) : (((arr_15 [i_7] [i_8] [i_9] [i_9]) ? (arr_16 [i_9] [i_9] [i_8] [11] [i_7] [i_7]) : (((arr_7 [10] [i_7] [i_7] [i_9]) ? var_5 : var_3)))));
                }
            }
        }
    }
    #pragma endscop
}
