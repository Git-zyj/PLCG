/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = (((((((((arr_4 [i_0] [i_0]) ^ (arr_0 [i_0])))) ? (max((arr_7 [i_0] [i_1] [i_0] [1]), (arr_3 [i_0]))) : (((!(arr_7 [i_0] [i_1] [i_0] [i_2 - 1]))))))) ? (((arr_7 [i_2] [i_2] [i_2 - 1] [i_2]) - (((arr_3 [i_0]) ? (arr_8 [i_1] [i_1] [8] [i_1]) : (arr_1 [i_0]))))) : ((((((arr_7 [i_0] [i_0] [4] [4]) * (arr_7 [i_0] [i_0] [i_2] [i_2]))) < (((arr_3 [i_0]) * (arr_1 [i_0]))))))));
                    arr_10 [i_1] [i_1] [i_1] [1] = (((!117) + (((arr_4 [i_0] [i_2 - 1]) - (arr_3 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_10 ^= ((((max((arr_12 [i_0] [i_2] [i_2 - 2] [i_2 + 1] [i_2 - 3] [i_4]), (arr_12 [i_2 - 1] [i_2] [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_0])))) ? ((max((arr_12 [i_1] [0] [i_2 + 2] [i_2 + 1] [i_2 - 2] [i_4]), (arr_12 [6] [6] [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_4])))) : ((((arr_12 [i_0] [i_2 - 2] [i_2 - 2] [i_2 - 3] [i_2 - 3] [i_4]) || (arr_12 [10] [2] [i_2 + 2] [i_2 - 2] [i_2 - 2] [i_4]))))));
                                var_11 = ((+((((arr_6 [i_2 - 3] [i_2 - 3] [i_1] [i_2 - 3]) >= ((((arr_13 [i_0] [i_0] [i_1] [i_3] [i_1] [i_1]) ? (arr_5 [i_0]) : (arr_7 [5] [i_1] [i_2] [i_3])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = var_0;
    var_13 += ((((((var_2 <= var_4) != var_1))) << (((((((-112 ? 120 : 12113427351841728598))) ? (((-5931 ? 60146 : 0))) : 3516283132038812788)) - 60132))));
    #pragma endscop
}
