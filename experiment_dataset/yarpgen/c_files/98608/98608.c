/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (min((max((arr_1 [i_0]), ((33 | (arr_2 [16]))))), (((1 - ((~(arr_0 [16] [16]))))))));
        var_18 = min((~var_9), (min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))));
        arr_4 [i_0] &= var_4;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_19 &= 17;
            var_20 -= max((arr_7 [i_0]), ((-(arr_7 [i_0]))));
            var_21 = (max(((max(var_16, var_13))), (((~(~var_7))))));
        }
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            arr_12 [i_2] = max((max(((~(arr_6 [i_2] [19] [19]))), ((-(arr_7 [i_0]))))), (arr_0 [i_0] [3]));
            var_22 = (arr_1 [i_0]);
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_23 = (1397967749655085343 == 0);

            /* vectorizable */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                arr_17 [12] [12] [0] [i_4] = (((arr_11 [i_0] [i_4]) || var_17));
                var_24 = (min(var_24, ((var_16 << (var_9 - 163)))));
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_20 [i_0] [i_0] [1] [i_5] = (var_0 ? (max(2607933320, ((var_15 ? var_15 : 222)))) : ((((max(var_16, var_12))) ? (arr_10 [i_5]) : var_8)));
                var_25 = (min(var_25, var_8));
                arr_21 [13] = ((var_13 ? (arr_0 [i_3 - 1] [i_3 - 1]) : (max(var_16, (arr_0 [i_3 - 1] [20])))));

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_26 += (min((((((var_16 ? var_12 : var_15))) ? (max(2239945649919431973, (arr_7 [8]))) : -435466265847081677)), ((((~var_6) ? (((arr_7 [i_0]) ? (arr_14 [i_5] [i_5]) : 15)) : (!0))))));
                    var_27 = var_12;
                }
            }
            arr_24 [i_0] [i_3] = arr_23 [i_0] [i_3] [i_3] [i_3];
            arr_25 [i_0] [i_0] [i_0] = (((var_6 | (var_15 + var_8))) | 3646456348);
            var_28 = var_11;
        }
        var_29 = var_4;
    }
    var_30 = (var_1 + 0);
    #pragma endscop
}
