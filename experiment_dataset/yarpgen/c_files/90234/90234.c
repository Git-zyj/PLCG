/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((9080127147223484100 ? var_6 : var_7))) ? var_12 : var_3));
    var_20 -= ((15 >> (10176729333267873045 - 10176729333267873020)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (var_10 - var_13);

        for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_21 -= var_17;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_22 = ((!((!(var_12 || var_16)))));
                        var_23 = (arr_8 [i_0] [8] [i_2]);
                    }
                }
            }
        }
        for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
        {
            arr_15 [11] [i_4 - 3] [i_4] = var_2;
            arr_16 [9] [i_4 + 1] [i_4 + 1] = var_14;
        }
        for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_24 = var_0;
            arr_19 [i_0] [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_5 - 2] [i_5 - 2] [i_0]);
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_25 -= (!3855789333);
                    var_26 = (min(var_26, (arr_14 [i_0] [i_6] [i_7])));
                }
            }
        }
    }
    #pragma endscop
}
