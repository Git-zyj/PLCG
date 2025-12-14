/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (-1710486131 % 1);
    var_16 = (!var_2);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_0] = var_4;
                            arr_11 [i_0] [i_0] [1] [i_0] [i_2] [i_3] = ((((!(arr_0 [i_0]))) ? (arr_5 [i_1] [i_1 - 4] [i_2]) : ((min((arr_0 [i_0]), var_7)))));
                            var_17 = ((~((~(max(7, var_3))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] = (((1 >= 32767) || 216));
                                arr_24 [i_0] [i_4] = ((((max((var_3 != var_3), ((224 ? (arr_13 [i_0] [i_0]) : 250))))) ? -224 : 26));
                            }
                        }
                    }
                }
                arr_25 [i_1 + 1] [i_0] [i_1] = (((min((max((arr_3 [i_0]), (arr_4 [i_0]))), var_11))) || ((!((min(var_14, (arr_2 [i_0])))))));
                arr_26 [i_0] [1] [i_0] = (arr_0 [i_0]);
                arr_27 [i_0] = 220;
            }
        }
    }
    var_18 = (((190 - 53) != var_11));
    #pragma endscop
}
