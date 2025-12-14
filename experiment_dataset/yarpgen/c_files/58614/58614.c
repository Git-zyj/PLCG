/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_17));
    var_19 -= ((((!(10087 & var_11))) ? var_9 : (!var_17)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (max((arr_5 [i_2 - 1] [i_2] [i_2 + 1]), (arr_6 [i_0] [i_2 - 1] [1])));
                    arr_9 [1] [i_1] [i_0] = ((min((min(var_10, var_3)), var_2)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = ((-((~(arr_8 [i_2] [i_2] [5] [i_2 + 1])))));
                                arr_15 [i_0] [i_0] [i_0] = (((((((min((arr_2 [i_1]), (arr_11 [i_2] [i_1] [i_2] [i_1] [i_4 - 1])))) ? ((max((arr_12 [9] [i_1] [i_1] [i_1] [i_1]), (arr_0 [i_0])))) : (max(var_11, var_10))))) ? var_0 : (arr_4 [i_0])));
                            }
                        }
                    }
                    arr_16 [12] [13] |= (((10087 - 4245263) - ((-(arr_11 [i_0] [i_1] [i_0] [i_0] [i_2 + 1])))));
                    var_22 = var_0;
                }
            }
        }
    }
    var_23 = var_0;
    #pragma endscop
}
