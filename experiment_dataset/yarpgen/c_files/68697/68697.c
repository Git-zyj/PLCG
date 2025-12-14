/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(((max(var_2, 1))), ((var_3 ? 885340028 : var_1)))), var_11));
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] = (!17262261960887574377);
                    var_16 = (-32767 - 1);
                }
                var_17 = (max(((min(1, (arr_5 [i_0])))), (min((arr_7 [i_0] [i_1] [i_0] [i_1]), (max((arr_1 [i_0]), (arr_4 [i_1] [1])))))));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_13 [i_0] [i_1] [1] = (max((arr_10 [i_0] [i_0] [i_0] [i_0]), (((arr_6 [8] [i_3]) ? (arr_3 [i_0] [i_0]) : (min((arr_0 [i_0]), 396874834821206006))))));
                    arr_14 [i_0] [i_0] = (((arr_2 [i_0] [i_1]) ? (max((arr_3 [i_0] [i_1]), 9223372036854775807)) : ((((-76 + 2147483647) >> (((arr_6 [i_0] [i_1]) - 1658869984781567259)))))));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_18 = (max((arr_15 [i_0] [4] [i_4]), (max((arr_7 [i_0] [i_0] [i_1] [i_4]), (1 * 0)))));
                    var_19 = (i_4 % 2 == zero) ? ((((((max((arr_7 [i_0] [i_4] [i_0] [i_0]), (arr_1 [i_1]))) | var_7)) >> (((arr_16 [i_4] [i_4]) - 4960))))) : ((((((max((arr_7 [i_0] [i_4] [i_0] [i_0]), (arr_1 [i_1]))) | var_7)) >> (((((arr_16 [i_4] [i_4]) - 4960)) - 17675)))));
                    arr_17 [i_4] [i_1] [i_1] [i_4] = ((!(((((((arr_4 [5] [5]) >= (arr_12 [1] [i_1] [i_0])))) % (arr_3 [i_1] [i_4]))))));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_20 [i_0] [i_1] [i_5] = max(((((min(var_5, (arr_2 [i_1] [i_5])))) ? (((((arr_3 [i_1] [i_5]) >= (arr_12 [3] [i_1] [i_0]))))) : (max(-32766, (arr_6 [i_1] [7]))))), ((((arr_0 [i_5]) >= (arr_0 [i_5])))));
                    arr_21 [i_0] [1] [i_1] [i_5] = (((0 / 3880996553) + ((7068409473833872175 & (arr_9 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_28 [i_0] = 0;
                                var_20 = (arr_2 [i_5] [0]);
                            }
                        }
                    }
                }
                arr_29 [7] = (((min(-1464040752, (arr_11 [i_0] [i_1] [i_1]))) | ((((((arr_5 [i_0]) + 2147483647)) << (((((arr_0 [i_1]) + 1286304231)) - 10)))))));
            }
        }
    }
    #pragma endscop
}
