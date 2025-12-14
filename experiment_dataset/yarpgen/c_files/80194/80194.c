/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (min((min((arr_1 [i_0]), var_7)), var_6));
                arr_6 [i_0] [i_0] [i_1] = (((arr_1 [i_0 + 1]) | (((!(arr_2 [i_0 - 3] [i_0 - 2]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_15 [7] [i_2] [i_3] [i_5] [i_5] [i_5] = max(30430, (arr_11 [9] [i_2] [i_4] [8]));
                            var_11 = var_2;
                            var_12 = ((((((arr_13 [i_2 + 2] [i_2 + 2] [i_3]) ? var_1 : (arr_13 [i_2 + 2] [i_2 + 1] [i_3])))) || (((arr_13 [i_2 + 2] [i_2 - 1] [i_2 + 1]) && (arr_13 [i_2 + 2] [i_2 - 1] [i_2 - 1])))));
                        }
                    }
                }
                arr_16 [i_2 - 1] [i_2] [i_2 - 1] = (79 == 22931);

                for (int i_6 = 4; i_6 < 9;i_6 += 1)
                {
                    arr_19 [7] [i_2] [i_2] [0] = (((((((!(arr_14 [1]))) ? ((max((arr_18 [i_2] [i_3] [i_6 + 1]), (arr_4 [i_2] [i_3] [14])))) : 3408207965))) ? 40457 : (((arr_13 [i_2] [i_6 - 1] [i_2 + 2]) ? (var_2 >= var_9) : ((min(128, (arr_11 [i_2] [i_2] [i_2] [i_2]))))))));
                    var_13 = ((((max((arr_12 [i_2]), (arr_12 [i_2])))) > ((max((arr_8 [i_2 - 1]), (arr_8 [i_2 - 1]))))));
                    var_14 = ((40454 ? -1535333919 : ((min(var_1, 1)))));
                }
                var_15 = ((((var_4 & (arr_4 [i_2] [i_3] [i_2])))) ? ((max((arr_17 [i_2]), (arr_17 [i_2])))) : var_8);
            }
        }
    }
    #pragma endscop
}
