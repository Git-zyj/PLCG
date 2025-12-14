/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((((1 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 2])))) ? (((19 < (~var_7)))) : (arr_2 [i_1] [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_1] [i_3] = ((max(104, 0)));
                                var_19 -= ((!((((((arr_1 [18] [i_1]) >= (arr_4 [i_0 - 1] [i_2] [20] [i_3]))) ? (arr_5 [i_0] [i_0] [i_0] [i_0 - 1]) : (arr_2 [i_2] [i_4]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_21 [1] [i_0] [i_0] [i_0] [19] [i_0] [8] = ((((max(((((arr_1 [6] [i_0]) ? var_12 : 1))), (((arr_14 [i_0] [i_1] [i_0]) ? 536739840 : (arr_16 [i_0] [i_5] [i_7])))))) ? ((((max(41175, var_4))) ? 22032 : var_6)) : (((((129024 ? (arr_1 [i_5] [17]) : var_15))) ? (arr_9 [i_6] [i_6] [12] [i_0]) : var_1))));
                                arr_22 [i_5] [i_1] [20] [i_1] [14] |= (((arr_17 [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_0]) <= -11));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 1;
    #pragma endscop
}
