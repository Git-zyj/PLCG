/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = 2068;
        var_20 = (max(var_20, ((((min((!677283629350504150), ((var_14 / (arr_1 [i_0] [i_0]))))) >> (677283629350504160 <= 3584))))));
    }

    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_21 = (((!var_9) ? (((arr_1 [i_1] [i_1 - 1]) | 0)) : (arr_1 [i_1 - 1] [i_1 + 1])));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_22 += (arr_6 [i_1] [i_1 - 1] [i_1 + 1]);
            var_23 = var_2;
            var_24 = var_13;

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        {
                            arr_13 [i_4] [i_4] [i_4] [i_4] = (max(9175732621036783614, ((((arr_8 [i_1 + 1] [i_1 - 1] [i_1 - 1]) < ((var_1 - (arr_10 [i_1] [i_2] [i_3] [i_4] [i_3]))))))));
                            var_25 *= (arr_2 [i_1 + 1]);
                            var_26 &= arr_1 [i_1] [i_1];
                        }
                    }
                }
                var_27 = ((!(!1)));
                arr_14 [i_1] [i_2] [i_3] = ((!(!121)));
                var_28 = (max(var_28, (arr_12 [i_1] [i_1 - 1] [i_2] [i_3] [i_3] [i_3])));
                var_29 += var_17;
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_23 [i_7] [i_7] [i_2] [2] [i_7] = 2261543039;
                    var_30 = (min(var_30, var_11));
                }
                arr_24 [i_1 + 1] [i_2] [i_6] [i_6] = (13085 != 137438953471);
                var_31 ^= var_11;
            }
        }
        arr_25 [i_1] = (((arr_16 [i_1] [i_1 + 1] [i_1] [i_1]) ? 1 : 49311));
    }
    #pragma endscop
}
