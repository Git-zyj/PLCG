/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 378643927;
    var_16 -= (((((3289 - 1090921693184) ? -var_13 : -345027188)) <= (!var_2)));

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_17 = 378643927;
        var_18 = ((((((arr_1 [i_0 - 2]) * (arr_1 [i_0 + 1])))) ? 22 : (arr_2 [i_0 + 1])));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 = (min(var_19, (((~((max(690775395, 1))))))));
            var_20 = (((arr_2 [i_1 - 1]) ? (max(var_14, (((arr_5 [i_1 - 2] [i_2]) ? (arr_0 [i_1] [i_1]) : (arr_1 [i_1]))))) : (((-446189445 / var_2) / var_14))));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_21 = (((((505028070 | var_8) ? (((var_6 ^ (arr_3 [i_1 - 2] [i_3])))) : var_12)) * ((((var_4 & var_6) ? 87 : (1 >= var_13))))));
            var_22 = (max(var_22, ((min((min((((arr_1 [i_1]) ? 25 : var_0)), (((var_6 << (128 - 111)))))), (((1 % (arr_9 [i_1] [i_1 - 2] [12])))))))));
            var_23 = ((!(((arr_0 [9] [i_1 - 2]) != (arr_5 [i_1] [i_3])))));

            for (int i_4 = 4; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_24 = var_10;
                    var_25 = var_0;
                    var_26 = (max(var_26, (((((((arr_8 [16] [i_1 - 2]) - var_0))) ? (((arr_2 [i_1 - 1]) ? var_0 : var_8)) : (arr_12 [i_1 - 1] [i_1 - 1] [i_4 + 1] [i_4 - 4]))))));
                    var_27 = (~6261958039695962870);
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_28 = ((((max((arr_15 [i_4 - 3] [i_1 - 2]), (arr_15 [i_4 - 4] [i_1 - 1])))) ? (arr_15 [i_4 + 2] [i_1 - 1]) : (min((arr_15 [i_4 - 3] [i_1 - 2]), (arr_15 [i_4 + 1] [i_1 + 1])))));
                    var_29 = (max(var_29, ((((~(-127 - 1)))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    arr_20 [0] [0] [i_3] [i_3] [i_3] [i_7] = (196946627 << (((arr_2 [i_4]) + 989029998)));
                    var_30 = ((var_3 ? (arr_15 [i_1 - 1] [i_1]) : (~var_9)));
                    var_31 = (min(var_31, (arr_5 [i_4] [i_3])));
                }
                var_32 ^= 255;
            }
        }
        var_33 = (((arr_11 [16] [16] [i_1]) / ((var_13 << (((arr_7 [i_1 - 2]) - 17415))))));
    }
    #pragma endscop
}
