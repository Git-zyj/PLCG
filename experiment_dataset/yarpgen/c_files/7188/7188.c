/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 = (max(var_20, ((((((var_18 ? var_14 : 209))) * ((var_0 ? (!var_3) : var_12)))))));
    var_21 = var_18;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_22 = (arr_12 [i_1]);
                            arr_15 [i_0] [i_3] [i_3] [i_1] [i_4 - 1] = (arr_11 [i_1] [i_1] [i_2 + 3] [i_1] [i_3] [i_4]);
                        }
                        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_23 = (min((arr_9 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1]), ((-(arr_9 [12] [i_1] [12] [i_1 + 2] [i_1 - 1] [i_1])))));
                            var_24 = (max(var_24, (var_16 % var_11)));
                        }
                        arr_18 [i_0] [i_0] [i_1] [1] = (7688273508049969464 | 468389463466231651);
                    }
                }
            }
        }
        var_25 = ((max(((((arr_17 [i_0] [i_0] [i_0] [i_0]) ? var_11 : (arr_2 [i_0])))), (var_18 * 209))));
        var_26 = ((((!(arr_9 [10] [i_0] [i_0] [i_0] [i_0] [10]))) ? var_9 : ((max(var_13, (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [1]))))));
        arr_19 [i_0] = var_13;
    }
    #pragma endscop
}
