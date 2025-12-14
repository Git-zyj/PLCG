/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = var_3;
                    arr_9 [i_0] &= (max(((min((!var_4), (arr_7 [i_0] [i_1 - 3] [i_0])))), (arr_2 [i_2])));
                    var_18 += (min((max((arr_3 [i_2] [i_2] [i_2 + 1]), (arr_3 [i_2 + 3] [i_2] [i_2 + 1]))), var_4));
                    var_19 = (((((1 ? -83 : (-127 - 1)))) ? (((((((arr_4 [i_2] [1] [i_0]) == var_6))) % var_6))) : (var_9 % 104)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (((~985811030) > ((max((min(-125, 93)), (1 <= 11267))))));
                                var_21 = (max(((-(arr_14 [i_3] [i_3 + 1] [i_3] [i_3] [i_3 - 3]))), ((-(arr_13 [i_3] [i_3 + 1] [i_3] [i_3] [i_3 - 3] [i_3])))));
                                var_22 = ((max((((var_10 ? (arr_14 [i_3] [i_1] [i_2] [i_3] [i_4]) : var_6))), -3309156265)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min((64930 < var_0), ((((max(-9038, 121))) * 0))));
    #pragma endscop
}
