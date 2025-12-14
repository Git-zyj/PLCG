/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(((241041914414095127 / 241041914414095127) - 16940))));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_21 = (min(var_21, (((max((arr_0 [i_0 - 4] [i_0 - 4]), (241041914414095127 - var_11)))))));
            arr_4 [i_1] = (min(1, ((((min(var_13, -46))) ^ 45506))));
            arr_5 [8] [i_1] [i_0] = ((~(max(((max(0, -196141375))), 18446744073709551613))));
        }
        var_22 += ((var_14 | ((max(var_2, 2110629146)))));
    }

    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2 + 1] |= (max(3924913903, var_5));
        arr_9 [i_2] |= ((~(18205702159295456489 >> 1)));
        var_23 = (((min(18446744073709551615, (arr_0 [i_2 + 1] [i_2 - 1]))) ^ (((~((max((arr_1 [i_2 + 1]), var_8))))))));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_24 = (arr_1 [i_2]);

            for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
            {
                arr_15 [5] [i_2 + 2] [i_3] [i_4 + 2] |= (((min((arr_14 [i_2]), 241041914414095135)) / (((-(arr_14 [11]))))));
                var_25 = (min(var_25, (((!(((~(1735291971 & var_16)))))))));
            }
            for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_26 = ((18205702159295456480 > ((min(var_1, ((var_18 ? var_18 : 27328)))))));
                    arr_22 [i_2] [3] [i_5] = (((max(var_8, (arr_17 [i_2] [i_5] [i_2 - 1] [i_6]))) ^ ((13966 ^ (arr_17 [1] [1] [i_2 + 1] [i_6])))));
                    var_27 = (max(var_27, (((var_6 == (arr_3 [i_2] [i_2]))))));
                }
                for (int i_7 = 3; i_7 < 15;i_7 += 1)
                {
                    arr_25 [i_2] [0] = ((var_12 * (((!((min((arr_1 [6]), var_2))))))));
                    var_28 = (min((arr_19 [i_7] [i_7 - 3] [i_7 - 3] [4] [i_7] [i_5 - 2]), (137 * 1)));
                    var_29 = (((((((min(var_13, 160))) ? ((~(arr_17 [6] [i_5] [i_3] [6]))) : (arr_14 [i_2 - 1])))) ? (min((((255 >> (48835 - 48813)))), (max(1, 2184338128)))) : var_0));
                }
                arr_26 [i_2 - 1] |= (max(var_17, -9857));
            }
        }
        var_30 = (min(var_30, ((max((((((((arr_24 [i_2]) && var_8))) >> (922375536 - 922375532)))), (max(((var_19 - (arr_10 [i_2]))), var_4)))))));
    }
    var_31 = var_5;
    #pragma endscop
}
