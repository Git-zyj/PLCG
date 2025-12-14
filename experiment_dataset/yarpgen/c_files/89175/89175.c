/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 |= var_1;
        var_16 ^= (((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                var_17 = (max(var_17, (((191 ? ((~(-9223372036854775807 - 1))) : 29464)))));
                var_18 = (min(var_18, ((((((-12427 < (arr_0 [i_1] [i_0])))) * ((((arr_3 [2]) > (arr_0 [i_0] [i_1])))))))));
                arr_7 [i_0] [i_1] [i_2] [i_2] = 18;
                arr_8 [i_0] [i_2] [i_2] = ((arr_6 [1] [1] [i_2] [i_2]) ^ ((13 >> (var_8 - 8636))));
                var_19 = (arr_3 [i_1]);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                arr_11 [i_0] [13] [i_3] [i_3] = 9223372036854775807;
                var_20 = (((((arr_3 [i_0]) / (arr_1 [i_0]))) * ((((arr_1 [i_0]) / 1)))));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                var_21 ^= var_7;
                arr_14 [i_0] [i_1] |= (arr_9 [0] [i_1]);

                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    var_22 = (arr_17 [i_0] [i_0] [i_0] [i_0]);
                    arr_18 [i_0] [i_5] = (arr_6 [i_0] [i_1] [i_4] [1]);
                    var_23 = ((-(((-9223372036854775807 - 1) ^ var_0))));
                }
            }
            arr_19 [i_1] [i_0] = (arr_17 [i_0] [i_0] [i_1] [i_1]);

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_22 [7] [i_1] [i_6] [7] = (arr_16 [i_0] [i_0] [i_0] [4]);
                var_24 = (~(((arr_12 [8] [i_1] [i_0]) % (arr_20 [i_6] [i_1] [i_0]))));

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_25 |= ((!(arr_0 [1] [i_1])));
                    var_26 = (arr_0 [i_0] [i_0]);
                    arr_26 [i_0] [i_0] [i_6] [i_7] = (((!var_14) || 1606872878));
                }
                var_27 = ((~(~1)));
            }
            arr_27 [i_0] [5] [i_0] = (~5330794213562437447);
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_28 = ((-(var_0 + 22285)));
            var_29 = (arr_16 [i_0] [i_0] [i_0] [i_0]);
            arr_30 [i_0] [i_0] [i_0] = ((-(((arr_23 [i_0] [i_8] [i_8]) ? (arr_6 [i_0] [i_0] [i_0] [14]) : var_5))));
        }
    }
    var_30 = (min(var_30, ((max(((-(max(var_7, var_1)))), ((((~var_4) || -169664406))))))));
    var_31 = (min(var_31, var_3));
    var_32 = (max(var_32, (((!((((!var_5) ? 4294967293 : var_4))))))));
    #pragma endscop
}
