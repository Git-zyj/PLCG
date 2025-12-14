/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max((((var_14 ? 45 : 1396894096))), (max(var_15, -1))))) ? var_13 : var_12));
    var_19 = (((max((!var_4), var_15)) * var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] = (min((((43 >> (7438986049736205714 - 7438986049736205705)))), (max(((4166833081726864317 ? 6581846459102791100 : (arr_1 [i_4] [i_1]))), (max(34359738367, var_2))))));
                                var_20 = (((((var_1 ? ((((!(arr_8 [i_0] [i_0] [9]))))) : (max(8863796085893247049, var_8))))) ? ((((140713604 ? -2106256570 : 1760)))) : ((min((min((arr_2 [i_0]), (arr_9 [0] [i_1] [0] [0] [i_4] [i_4]))), var_1)))));
                                arr_12 [i_0] [i_1] = (arr_6 [i_0] [i_0] [i_2 - 2] [i_3] [i_4] [i_4]);
                            }
                        }
                    }
                    var_21 = (((!(((arr_7 [i_1] [i_2 + 1]) <= (arr_0 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
