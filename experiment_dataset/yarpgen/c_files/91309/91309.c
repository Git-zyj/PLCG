/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((min(var_9, (max(var_10, var_10)))), var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 *= ((((1 ? 1 : 1)) - ((((arr_11 [i_4 + 1] [i_3] [i_2] [i_0] [i_0]) < (((arr_4 [i_1] [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_1]))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_1] [i_0] = ((((0 + (((min(var_3, (arr_2 [i_0 - 1])))))))) ? (((arr_7 [i_0] [i_2]) ? (((min(0, 166)))) : (min(-23497, (arr_4 [i_0] [i_0]))))) : (((-(((arr_5 [i_0] [i_0]) ? (arr_10 [i_0]) : 52698))))));
                                var_13 ^= (max((max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))), ((((arr_2 [i_0 + 1]) || (arr_2 [i_0 + 2]))))));
                            }
                        }
                    }
                    var_14 = (arr_7 [i_2] [i_2]);
                    var_15 = (((((((((arr_12 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) && 1))) - ((((arr_11 [6] [i_1] [i_2] [i_0 - 1] [i_1]) == 3891342323)))))) <= 18057349273362364965));
                    var_16 = (min(((-(arr_11 [i_2 + 1] [i_0 - 1] [i_2] [i_0 + 1] [i_0 - 1]))), var_8));
                }
                arr_14 [i_1] [i_0] [i_0] = (max((((arr_8 [i_1] [i_1] [i_1 + 1] [i_1 + 1]) >> (((arr_11 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_1]) - 34592)))), ((min(20689, var_2)))));
            }
        }
    }
    #pragma endscop
}
