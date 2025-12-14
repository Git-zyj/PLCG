/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (2887908779 >= 9600168686247792058);
        var_14 = var_6;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_15 = ((~63775) ? 0 : (arr_3 [i_1]));
        var_16 = (max(var_16, (((!(arr_4 [i_1 + 2]))))));
        var_17 = (arr_0 [7]);
    }
    for (int i_2 = 2; i_2 < 8;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_10 [i_2] [7] [i_3] = (((arr_9 [i_2] [i_2 + 2]) ? var_6 : (arr_1 [i_2])));
            var_18 = (max(var_18, (((2085432678 + (arr_2 [i_2 + 2] [i_2 + 2]))))));

            for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
            {
                var_19 *= (!var_9);
                var_20 &= 18446744073709551615;
            }
            for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
            {
                var_21 = (!-6291451486473088170);

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_22 = ((-(((arr_12 [2] [i_3]) ? (arr_5 [i_2]) : 16777216))));
                    var_23 = var_1;
                }

                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_24 = 1;
                        var_25 = ((249 ? (arr_20 [i_2 - 1]) : (arr_20 [i_2 - 1])));
                    }
                    var_26 = (arr_6 [i_2 + 2]);
                }
            }
            var_27 ^= 9600168686247792058;
        }
        var_28 = var_0;
    }
    #pragma endscop
}
