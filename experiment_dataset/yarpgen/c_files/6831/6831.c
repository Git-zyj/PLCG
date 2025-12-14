/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_12 = (((12 <= 1) > (arr_1 [i_0] [i_0 - 1])));
        var_13 = 0;
        arr_4 [i_0] = (max((arr_3 [i_0 - 1]), (((((arr_2 [i_0] [i_0]) ? 50473 : var_5))))));
        var_14 = min((min(var_9, var_3)), (((arr_2 [i_0 - 2] [i_0 - 2]) ? (arr_2 [i_0 + 1] [i_0 + 1]) : var_3)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            {
                var_15 = 7857218526729203145;
                var_16 = ((((min(var_0, (min((arr_9 [i_2] [i_2]), (arr_1 [i_1] [i_1])))))) * (max((arr_0 [i_2 - 2] [i_2 + 1]), (max((arr_8 [i_2]), (arr_8 [i_2])))))));
                var_17 |= (((((var_8 * (arr_2 [i_2 - 2] [i_2 - 1])))) ? var_5 : 0));
            }
        }
    }
    var_18 = (((((0 ? var_3 : (min(var_11, 10589525546980348470))))) ? var_10 : 10589525546980348453));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            {
                var_19 = (max(var_19, var_10));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] = (((arr_16 [i_3] [i_3] [i_3] [i_4 + 1] [i_4 - 2]) ? ((58951 ? 7857218526729203145 : 3173264266881470914)) : 0));
                                arr_21 [i_3] [i_3] [i_3] [1] [i_3] [i_3] |= (arr_17 [i_3] [i_3] [i_3] [14]);
                                arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_17 [i_3] [i_3] [i_3] [i_3]);
                                var_20 = (((var_0 + 2147483647) >> ((((~((var_10 ? 1 : 14890579895123327506)))) - 18446744073709551596))));
                            }
                        }
                    }
                }
                arr_23 [i_3] [12] |= ((((((var_1 ? (arr_10 [i_4]) : var_5))) ? ((var_4 ? var_8 : (arr_19 [i_3] [i_3] [i_3] [i_3] [i_3]))) : (arr_14 [i_3] [i_3] [i_3] [i_4 - 1]))) << ((((7857218526729203144 ? (arr_15 [i_4 + 1] [i_4 - 2] [i_4 + 1]) : (arr_15 [i_4 + 1] [i_4 - 2] [i_4 - 1]))) - 14145136806068623391)));
                var_21 = (max((((arr_19 [i_4] [i_4] [i_4 + 1] [i_4] [i_4]) ? 18446744073709551603 : var_7)), (max((arr_14 [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 - 2]), (arr_14 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1])))));
            }
        }
    }
    var_22 &= ((~((((max(var_1, var_1))) ? var_9 : (max(var_0, var_6))))));
    #pragma endscop
}
