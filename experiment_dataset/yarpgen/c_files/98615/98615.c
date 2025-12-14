/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_2] = (((arr_6 [i_1 - 1]) || (arr_6 [i_1 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3 - 1] [6] [i_3] [i_4] &= 0;
                                arr_15 [i_2] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] = (arr_12 [i_0] [i_1 - 1] [i_2] [i_3 + 3] [i_3 - 1]);
                                arr_16 [i_2] [i_2] = (~-1432378409);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_10 = (max(var_10, (max(((min((-127 - 1), (arr_9 [i_0] [i_0] [i_0])))), ((var_0 ? (arr_6 [i_0]) : (1 == 638909655)))))));
                    var_11 ^= ((var_7 ? ((+((0 ? (arr_17 [18]) : (arr_2 [i_5] [13]))))) : ((min((((arr_20 [8] [i_1 - 1]) ? 56994 : var_7)), (arr_3 [i_1 - 1] [i_1 - 1]))))));
                    var_12 = (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                    arr_21 [i_5] = ((((((arr_20 [i_5] [i_1 - 1]) ? (arr_20 [i_5] [i_1 - 1]) : 1))) && ((min((arr_20 [i_5] [i_1 - 1]), (arr_20 [i_5] [i_1 - 1]))))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_13 = -96;
                    var_14 = (min(var_14, ((((((1 | ((3670016 ? var_2 : (arr_3 [i_0] [1])))))) ? ((var_7 ? var_6 : -55)) : (((arr_3 [i_0] [i_1 - 1]) | var_8)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_15 = (((var_8 + 2147483647) << (1 - 1)));
                                arr_30 [0] [i_1] [i_6] [i_7] [14] = (((~(!var_2))));
                                arr_31 [i_0] [1] [10] [i_7] [6] [i_8] [i_7] = ((1 ? 18446744073709551607 : 1));
                            }
                        }
                    }
                }
                arr_32 [i_0] = ((~(((!15457005356084733780) + 18446744073709551607))));
            }
        }
    }
    var_16 = (-var_1 | (min((!var_4), 305770033)));
    var_17 = ((var_1 - (((var_7 - 24626) + (var_7 + 1)))));
    var_18 = 40910;
    #pragma endscop
}
