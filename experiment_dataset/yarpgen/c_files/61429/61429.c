/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (var_8 * var_6)));
    var_12 = ((65380 ? var_9 : (((((var_0 ? 155 : var_9)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [6] |= (min((arr_0 [i_0] [i_0]), 65380));
        arr_5 [i_0] [i_0] = (-(((min(-64, 141)))));
        var_13 = (((arr_2 [i_0] [i_0]) != (((!(arr_2 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = (min((((min(var_8, 148)))), (max(155, 44021))));
        var_15 = (max(var_15, ((((arr_6 [i_1] [i_1]) == (arr_6 [i_1] [i_1]))))));
        var_16 = (max(var_16, (((!((!(((144 ? 235 : var_7))))))))));
        arr_8 [i_1] = ((65380 ? ((((((arr_7 [i_1] [i_1]) ^ (arr_7 [0] [0]))) ^ var_5))) : (arr_6 [11] [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_17 = (arr_12 [i_3] [i_3]);
                    var_18 = 156;
                }
                var_19 = ((var_3 != (min(156, (~156)))));

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_20 [i_2] [i_2] [i_5] = 15;
                    arr_21 [i_2] [i_2] [i_5] = (arr_19 [i_2] [i_3] [i_2]);
                    var_20 = (max(var_20, 173));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_21 = (min(var_21, (((!(((var_2 ? 239 : 46549))))))));

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_22 = (min(var_22, (~-8)));
                        var_23 += ((-(arr_25 [i_2 + 2])));
                        var_24 = ((!((((arr_23 [i_6]) % ((((arr_25 [i_3]) >= var_1))))))));
                    }
                    var_25 = 21;
                }
            }
        }
    }
    #pragma endscop
}
