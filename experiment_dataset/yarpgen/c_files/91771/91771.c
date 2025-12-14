/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 |= 3321658353;

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_17 = (max(var_17, ((((((~(arr_2 [i_0] [i_1 + 1])))) ? (((arr_1 [18] [4]) ? 1 : 86)) : (arr_0 [i_0 - 1] [i_1 + 1]))))));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_18 = (((((var_3 ? (arr_0 [i_1 + 3] [i_1 + 3]) : var_12))) ? (arr_0 [2] [2]) : ((2 ? 12711278458204159919 : (arr_8 [i_1] [i_2])))));
                    arr_11 [i_3] [i_2] [i_2] [i_2] = (~3);
                    var_19 = (arr_1 [i_0] [i_0 - 1]);
                    var_20 |= ((-((~(arr_4 [13])))));
                    arr_12 [i_3] [1] [i_3] = (((arr_0 [i_0 - 1] [i_0]) ? var_6 : (~-1819801034)));
                }
                var_21 = ((-(~65524)));
                var_22 = ((~((~(arr_9 [i_0] [i_0] [16] [i_0])))));
                var_23 *= ((!(arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                var_24 += (arr_6 [i_0] [i_0]);
            }
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                arr_16 [i_0] [i_1 - 1] = var_2;
                var_25 = (max(var_25, (arr_0 [i_0 - 1] [i_0 - 1])));

                for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, -var_9));
                    arr_20 [i_0] [i_0] [i_0] = var_10;
                    arr_21 [i_0 - 1] [1] [i_4] = (((arr_3 [i_0] [i_1]) ? ((((arr_7 [i_5] [i_5] [6]) ? var_4 : (arr_2 [i_0] [i_0])))) : ((25 ? var_12 : 64))));
                }
                for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    arr_24 [i_6] [i_1] [i_4] [i_6] = 1;
                    arr_25 [i_0] [1] [i_4] [i_4] &= (arr_3 [i_0] [i_0 - 1]);
                }
            }
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_28 [i_0] [i_7] = -32750;
            var_27 += 65535;
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_32 [i_8] = ((((((arr_14 [i_8] [i_8]) ? 3 : (arr_14 [i_8] [i_8])))) ? (((max(var_3, 255)))) : (arr_14 [i_8] [i_8])));
        var_28 -= (((((max(var_9, 1702919029)))) ? ((((((var_2 ? (arr_0 [i_8] [i_8]) : 14651863903648976403))) ? (arr_18 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_17 [i_8] [i_8] [1])))) : ((28534 << (((!(arr_7 [i_8] [i_8] [i_8]))))))));
    }
    #pragma endscop
}
