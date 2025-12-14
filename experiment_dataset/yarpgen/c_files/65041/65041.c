/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~var_6) ? (((var_7 ? var_4 : 126))) : var_8));
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_14 = (-((((arr_5 [i_3] [i_3] [i_3]) >= (arr_7 [i_3] [i_2] [i_1] [i_0])))));
                            arr_12 [i_0] [i_1] = (((((((arr_8 [2]) ? (arr_6 [i_3] [i_2] [i_0]) : (arr_5 [i_0] [i_0] [i_0])))) ? ((1 ? (arr_8 [i_1]) : (arr_11 [i_0] [i_0] [i_0] [i_0]))) : ((((arr_4 [i_3]) ? (arr_10 [i_1]) : 141))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [i_0] [i_4] [i_1] [i_0] |= var_9;
                                arr_21 [i_1] = ((((((arr_13 [11] [11] [1]) * var_7))) + (arr_4 [i_0])));
                                var_15 = (min((((((((arr_9 [i_4] [4] [i_4]) >= var_0))) > ((32756 + (arr_3 [i_0] [i_6 + 1])))))), ((((((arr_15 [i_0] [i_1] [i_4 + 3] [i_4 + 3]) ? (arr_2 [i_0] [i_0]) : var_0))) ? (((arr_14 [i_6]) + (arr_19 [3] [i_1] [i_1]))) : (var_4 && var_3)))));
                            }
                        }
                    }
                }
                arr_22 [i_1] = (min(((min((arr_15 [i_1] [i_0] [i_0] [i_0]), (arr_15 [i_1] [i_0] [i_0] [i_0])))), ((-18559 ? 17892411153615479798 : -1584684537045612338))));
            }
        }
    }
    #pragma endscop
}
