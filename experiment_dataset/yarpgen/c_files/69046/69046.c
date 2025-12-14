/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_9, (~-var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (arr_1 [i_0]);

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] = (var_8 + ((-185 ? (arr_7 [12] [i_2 + 2] [12] [i_2 + 1]) : ((var_3 ? 14636 : var_0)))));
                    arr_9 [i_0] = (min((((arr_7 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 2]) && (arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 1]))), (((arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 + 2]) == var_3))));
                }
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    var_14 = ((arr_7 [5] [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (((!(arr_7 [i_3] [1] [i_3 - 1] [i_3 - 1])))) : (~2147418112));
                    arr_12 [i_0] [i_3] [i_3] [i_0] = (!var_4);

                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_3] [i_4] [i_5] = var_7;
                            var_15 += (arr_3 [i_3]);
                        }
                        arr_19 [i_3] [i_0] = 3140362229978890358;
                        arr_20 [i_0] = ((!(((1915264714 / (arr_14 [i_4 + 2]))))));
                        var_16 = (((((!(arr_16 [i_3 + 1] [i_0] [i_4 + 2] [i_0])))) << var_11));
                    }
                }
                var_17 = arr_16 [i_0] [i_0] [i_1] [i_0];
                var_18 = ((((((arr_7 [3] [i_0] [i_1] [i_1]) << ((((-(arr_0 [i_0]))) + 224866669))))) * 3955699925));
                arr_21 [i_0] [i_0] = (min(((((((arr_16 [i_0] [i_0] [i_0] [i_0]) == (arr_2 [i_0])))) >= 1915264715)), (((arr_17 [i_0] [i_0] [i_0] [i_1] [i_0]) <= (var_1 == var_2)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    arr_30 [i_6] [i_6] [i_6] [i_8] = (((14636 ^ 2261829103) ? (((arr_27 [i_7]) ? (arr_27 [i_7]) : (arr_27 [i_6]))) : ((((!(arr_27 [i_7])))))));
                    var_19 = (((!((min(var_8, var_7))))));
                    var_20 = 27223;
                }
            }
        }
    }
    #pragma endscop
}
