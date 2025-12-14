/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_10 = ((var_4 + (((((var_0 % (arr_0 [i_0] [i_1])))) ? (((var_4 <= (arr_0 [i_0] [i_0])))) : var_0))));
                    var_11 = var_1;
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_12 = 0;
                                arr_18 [i_0] [i_1] [i_0] [i_4 - 1] [i_0] [i_0] [i_0] = ((var_3 + (((var_2 & var_7) ? var_4 : 11))));
                                arr_19 [i_0] = ((((min((((var_1 && (arr_15 [i_0] [i_0] [i_0] [i_0 - 2])))), var_1))) ? (((((var_7 - (arr_9 [i_0] [i_0] [i_0])))) + (min((arr_8 [i_3]), var_8)))) : 0));
                                var_13 |= ((var_3 ? (1 - 1) : (7958498323154096683 != var_8)));
                                arr_20 [i_1] [i_1] [i_1] [i_0] = var_9;
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] = 8;
                    var_14 = (((((arr_0 [i_0 + 1] [i_1]) ? 65524 : 48))) || (((((arr_4 [i_3] [i_0] [i_0]) ? var_3 : var_3)))));
                    arr_22 [i_0] [i_0] [i_3] [i_3] = ((((((arr_4 [i_0 - 1] [i_0] [i_0 - 2]) + (arr_4 [i_0 + 1] [i_0 + 1] [i_0])))) ? ((min(1, ((194 ? (arr_3 [i_0]) : (arr_9 [i_0] [i_1] [i_3])))))) : (arr_17 [i_0 - 2] [i_0])));
                }
                var_15 = (max(var_15, (arr_17 [10] [10])));
                var_16 = (max((((var_0 != var_0) - -86)), ((((arr_12 [i_0] [i_0]) != var_8)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            {
                var_17 = var_6;
                var_18 -= (((((arr_1 [i_6 - 2]) ? ((59036 ? 255 : 6500)) : ((((arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7]) == 255)))))) ? ((((var_9 - (arr_7 [i_6]))))) : ((((arr_24 [i_6 + 3] [i_7 - 1]) && (arr_16 [i_6] [i_6 - 1] [i_7 - 1] [i_7 - 1] [i_6])))));
            }
        }
    }
    var_19 = ((((((((var_3 ? var_4 : var_3))) * ((var_0 ? 16384243054117012604 : var_9))))) ? var_4 : ((((var_4 ? var_0 : var_5)) & (var_6 && var_9)))));
    #pragma endscop
}
