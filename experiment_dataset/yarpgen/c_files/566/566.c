/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((-(var_9 < var_4))));
    var_11 = 102;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = ((!(arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = 0;
        var_13 = ((((((arr_1 [i_0]) ? 11 : 18446744073709551615))) ? var_2 : (~-17)));

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_14 = (!-34);

            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                var_15 = (max(var_15, (((6948820842764850508 ? 6 : -8058)))));
                var_16 = ((-(0 != -97)));
                arr_7 [i_2] [i_2] = 241707453;

                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {

                    for (int i_4 = 4; i_4 < 21;i_4 += 1)
                    {
                        var_17 += -1;
                        var_18 += 97;
                        arr_12 [i_0] [i_1] [i_0] [i_1] = (!103);
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_19 = 81;
                        var_20 = (max(var_20, ((((arr_5 [i_0] [i_0] [i_2 + 1]) ? (arr_5 [i_0] [7] [i_5 - 1]) : (arr_5 [i_0] [i_0] [i_0]))))));
                        var_21 = (min(var_21, -11));
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_15 [i_6 + 3] [i_3] [i_2 - 1] [i_1] [i_0]);
                        var_22 = ((-(arr_18 [i_6 + 1] [i_3 - 3] [i_2] [i_2] [i_1 - 1] [i_0] [i_0])));
                    }
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        arr_23 [i_3] [i_3 + 2] [i_3] [i_7] [i_7 - 3] = ((~(arr_13 [i_7] [i_7] [i_2 + 1] [i_7] [i_0])));
                        var_23 = ((arr_18 [i_1 - 1] [i_1 - 1] [i_7] [i_7 - 3] [i_7 - 1] [i_7] [i_1 - 1]) ? var_2 : (arr_21 [i_0] [i_1 + 1] [i_0] [i_3 - 3] [i_2 - 1]));
                        arr_24 [i_7] [i_1 + 1] [i_7] [i_1 + 1] [i_0] = var_8;
                    }
                    arr_25 [i_0] [i_0] [i_0] [i_0] = 1;
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_24 = 18446744073709551613;
                    var_25 = (max(var_25, 28));
                }
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_26 = (max(var_26, (~var_2)));
                var_27 = (arr_3 [i_1 + 1] [i_9]);
            }
            var_28 = (arr_9 [i_0] [6] [i_0] [i_1 - 1]);
        }
        var_29 -= (((((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((((arr_14 [i_0] [1] [i_0] [8] [1] [i_0] [i_0]) ? var_2 : 5))) : ((-(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    #pragma endscop
}
