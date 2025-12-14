/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_10 |= ((arr_2 [i_0] [i_3 - 1]) ? (((((arr_2 [i_0] [i_3 - 1]) != (arr_2 [i_0] [i_3 + 1]))))) : (arr_2 [i_0] [i_3 + 1]));
                                arr_17 [i_3] [i_3] [i_4] = ((((max((min((arr_3 [i_2] [i_3 + 1]), (arr_4 [i_0] [i_0]))), (((0 && (arr_5 [i_0] [i_0] [i_2]))))))) | (max(((var_8 ? 5693 : var_2)), ((max((arr_13 [i_3] [i_3] [i_2] [0]), 3)))))));
                                var_11 = (max(var_11, ((max(((~(arr_12 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0]))), ((20 - (arr_10 [i_0] [i_1] [i_2] [i_3 + 1] [6] [i_4]))))))));
                            }
                        }
                    }
                }
                var_12 = (min(var_12, (((!(arr_3 [i_1] [1]))))));
                var_13 = (arr_2 [i_0] [i_0]);
            }
        }
    }
    var_14 = (((((-9223372036854775791 ? ((728401753 ? -4125934124354336216 : 1693468951)) : (8827229999965242000 >> 1)))) ? 1 : 2664094181));
    #pragma endscop
}
