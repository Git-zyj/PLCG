/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_1, var_14));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min(((((arr_5 [i_1]) - (arr_4 [i_0 - 4] [i_1])))), (((arr_4 [i_0 - 3] [i_1]) ? (((min(1, -30843)))) : (max(1648271117, 28))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 - 2] [i_1] = (max((~24), (arr_3 [i_1] [i_3 + 1] [i_1])));
                            var_18 = (arr_8 [i_0] [i_1]);
                            var_19 = (max(((min(((max((arr_3 [6] [6] [i_1]), (arr_0 [i_1] [i_1])))), ((28 << (2906620302 - 2906620283)))))), (((arr_6 [i_2] [i_1] [i_2 + 1] [i_3 + 2]) % (arr_6 [i_0 - 3] [i_0] [9] [9])))));
                            arr_12 [i_1] [i_1] [i_2 + 4] [i_2] [i_2] = ((((-5388069672638608543 ? 5707698972255459519 : 20))) ? ((2222160589924798176 ? 1388346993 : 1388347014)) : (((((arr_8 [i_1] [i_1]) <= (arr_4 [i_3 + 1] [i_1]))))));
                            var_20 = (((((arr_3 [i_1] [i_2 - 3] [i_1]) >= (arr_2 [i_0 - 4]))) ? (max(15867983922621795097, (arr_3 [i_1] [i_2 - 3] [i_1]))) : ((((!(arr_2 [i_0 - 4])))))));
                        }
                    }
                }
                arr_13 [i_1] [i_1] = (min(((((arr_3 [i_0 - 4] [i_0 - 4] [i_1]) >= 28))), (((arr_9 [i_0] [i_0] [1]) / (arr_0 [20] [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_20 [i_5] [i_5] [i_5] = 3881985751;
                    var_21 = (((arr_9 [i_4] [i_4] [i_4]) ? (((((arr_9 [i_4] [i_4] [i_4]) > 3105124859690871057)))) : (min(355630309, (arr_0 [i_5] [i_6])))));

                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        var_22 = (max((((-(arr_5 [i_5])))), ((~(min(-780956779349183855, (arr_16 [i_4] [i_5] [i_4])))))));
                        var_23 = (min(var_23, (arr_17 [i_4])));
                        var_24 = (min(var_24, (arr_10 [i_4])));
                        arr_23 [i_4] &= ((((arr_21 [i_7 - 2] [i_7 - 2] [i_7 - 4] [i_7] [i_7 + 1]) || (arr_21 [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7 - 1]))) ? (((arr_22 [i_4] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_4]) + 24362)) : (((((227 ? (arr_10 [i_4]) : 24362))) ? (arr_6 [i_4] [i_7 + 1] [i_6] [i_7 + 1]) : (((arr_5 [i_4]) ? (arr_22 [i_4] [i_5] [i_6] [i_5] [i_4]) : (arr_21 [i_7] [i_7 - 3] [i_6] [6] [7]))))));
                        var_25 = 2500;
                    }
                }
            }
        }
    }
    var_26 -= 66;
    #pragma endscop
}
