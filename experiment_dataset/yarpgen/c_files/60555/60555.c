/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0 + 2] [i_0] [i_0] = (((((248 ? (max((arr_0 [i_0]), var_14)) : ((((arr_2 [i_0]) != 0)))))) ? (((min(var_17, -20667)) - ((((arr_3 [i_2]) ? 1052115552 : var_10))))) : ((max(-1, (((arr_2 [7]) * (arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 3] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_4] [i_1] [i_1] = ((14829697226080436406 >> (((arr_12 [i_0] [i_0] [12] [i_0]) - 37441))));
                                arr_14 [i_4] [i_4] [i_2] [i_4] [i_4] [i_3] = ((((max(78407067, (((!(arr_11 [3] [3] [i_2 - 4]))))))) ? (((8944361162703723513 > 5) & 227)) : ((8758635309211151997 ? 0 : 40245))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
