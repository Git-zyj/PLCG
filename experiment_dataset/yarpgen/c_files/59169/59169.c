/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((max(var_7, var_8))), (max(-4092, (~var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] = ((!(~405951744)));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_20 = (min(((max((arr_7 [i_0 - 1] [i_1 + 3] [i_0 - 1] [i_1 + 1]), (arr_7 [i_0 + 2] [i_1] [i_2] [i_1 + 4])))), 4092));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1 + 4] [i_2] [12] [i_3] = (max(35848, ((~((min(84, 75)))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0 + 2] = (min(664208778, (arr_3 [i_3 - 1] [i_3 - 1])));
                        var_21 = (max((max(var_2, (min(var_9, (arr_7 [9] [9] [5] [9]))))), ((~(!var_12)))));

                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            var_22 = ((min((max((arr_2 [2]), (arr_2 [i_0 + 1]))), (arr_8 [i_0] [i_0] [9] [i_0] [i_0] [i_0]))));
                            arr_14 [i_0] [8] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = (min(120, -85));
                            var_23 = (min((~var_8), ((-(arr_6 [i_4] [11] [i_1] [i_0])))));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_24 = (max((((!(arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 2] [4])))), ((min(65504, var_1)))));
                            var_25 = (!var_11);
                            var_26 *= var_8;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_27 = (min(var_27, ((max((!1), (min((arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1]), -7962169024282023405)))))));
                                arr_22 [i_0 - 1] [i_0 - 1] [i_7] = ((((!(arr_13 [i_0] [i_0 + 2] [10] [i_0 + 2] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (~var_9);
    #pragma endscop
}
