/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (((((max((arr_2 [i_2 - 2] [i_0]), (arr_2 [i_1] [i_0]))))) / 63));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((((!3376356901) < (((((arr_1 [i_1]) | (arr_11 [i_3] [9]))) * ((min((arr_0 [16] [16]), (arr_13 [7] [7])))))))))));
                                var_18 = (max(((((arr_10 [i_2 - 1] [i_4] [i_4 + 1] [i_4 + 2]) | (arr_10 [i_2 - 2] [20] [i_4 + 1] [i_4 + 2])))), (((arr_3 [i_2 + 1]) + (arr_3 [i_2 - 2])))));
                                arr_14 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_4] = ((((((!((max(3566729616, (arr_4 [i_2 - 2])))))))) - ((-0 >> (((arr_11 [16] [i_2]) - 24400))))));
                                var_19 = max((((-1319825144 != (arr_8 [i_2 + 1] [i_4 + 2] [i_4 + 3])))), ((((arr_4 [1]) * 4294967295))));
                                arr_15 [i_0] [i_0] [i_2 + 1] [i_0] [i_3] [i_4 + 1] [i_4] = ((((((((arr_3 [i_2]) <= (arr_7 [i_4] [1] [i_2 - 1] [9])))) >= ((((arr_10 [i_0] [i_1] [i_1] [i_0]) <= (arr_1 [i_1])))))) ? ((((((arr_9 [i_0] [i_1] [i_2] [1]) < 0))) & ((max(56, (arr_1 [i_1])))))) : (((~-1) << (78 == 1)))));
                            }
                        }
                    }
                    var_20 -= ((((arr_8 [i_2 - 1] [i_2 - 2] [i_2 + 1]) > (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 2]))));
                }
            }
        }
    }
    var_21 = min((min((526675849555011918 == var_6), ((728237679 >> (var_15 - 98))))), var_7);
    var_22 = var_12;
    #pragma endscop
}
