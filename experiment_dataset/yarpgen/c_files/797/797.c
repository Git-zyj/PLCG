/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, 235));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (max(var_6, ((var_8 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_13 = ((((max((arr_0 [i_0] [i_0]), 235))) / (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_14 = (arr_3 [i_2] [i_1]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_15 = (min(((86 ? (!0) : (((var_7 || (arr_6 [1] [10] [i_2])))))), (((arr_11 [i_0] [i_1] [i_4]) ? ((max(2147, (arr_13 [i_0] [i_0] [i_0])))) : -50))));
                            var_16 = (min(var_16, var_7));
                        }
                    }
                }
            }
            var_17 = (min(var_17, var_8));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((min((((!(arr_20 [i_6 - 1] [i_6] [i_6 - 1] [i_5])))), var_8)))));
                            arr_23 [i_0] [5] [i_0] [i_7] = 63389;
                            var_19 = (((arr_21 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_7] [i_7]) ? (arr_14 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_7] [i_6]) : (!524225364)));
                            var_20 = (0 ? 1319765009 : (max((((var_5 ? 119 : var_3))), ((var_7 ? (arr_3 [i_0] [i_1]) : var_1)))));
                        }
                    }
                }
            }
            var_21 &= (min(((min(((-22073 ? 1 : 1)), (21 != -119)))), ((-((var_4 ? 8497079446594570726 : var_1))))));
            arr_24 [i_1] = ((((((-119 ? var_10 : (arr_17 [i_0] [i_0] [i_0] [13] [i_1] [14]))) <= 1484722390)) ? 63393 : (arr_8 [i_0] [i_0])));
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_22 = var_4;
            var_23 = 1268832117;
        }
    }
    var_24 = ((((!((max(46097, -34293706))))) ? var_6 : var_1));
    #pragma endscop
}
