/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_18 = (((((!((((arr_6 [i_0] [i_1]) ? 0 : 57344)))))) >= var_4));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_19 = (((((arr_10 [i_3 + 1] [14] [i_0] [i_0 + 1] [14]) / (arr_9 [i_3 + 2] [i_3] [i_3 + 1] [i_0 - 1] [10]))) >= (((!(arr_10 [i_3 + 1] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 3]))))));
                            var_20 = (((((arr_4 [i_3] [i_2] [i_0]) >= var_3)) ? var_6 : (arr_4 [i_4] [i_0] [i_0])));
                            var_21 += var_7;
                        }
                    }
                    arr_11 [i_0] [i_0] = (max(var_3, ((((((arr_5 [i_2] [i_0] [i_0]) ? var_13 : var_13))) ? var_1 : 8117038846350425476))));
                }
            }
        }
    }
    var_22 = (~(((10329705227359126165 >= (~121)))));
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_23 = (((((-(arr_26 [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_6 + 1])))) ? ((min(var_2, (arr_26 [i_5 - 3] [i_5 - 1] [i_5 - 3] [i_5 - 1] [i_6 - 4])))) : (arr_26 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 3] [i_6 - 1])));
                                var_24 = (~((var_16 ? var_14 : (min(var_9, (arr_6 [i_7] [i_7]))))));
                            }
                        }
                    }
                    var_25 = (((var_3 >= var_2) >= ((-(((arr_24 [i_7] [i_6 - 1] [i_6] [i_5]) ? (arr_18 [i_6] [i_5]) : (arr_15 [i_7] [i_5])))))));
                }
            }
        }
    }
    var_26 &= var_8;
    #pragma endscop
}
