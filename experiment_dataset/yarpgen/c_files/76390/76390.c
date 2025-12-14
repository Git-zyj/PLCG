/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((min(var_7, var_0))) & var_9))) || var_8));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = max((min(((max(1964187724, 1964187736))), (arr_0 [i_0]))), (arr_1 [i_0]));
        var_14 = ((((min((min(2330779574, (arr_2 [i_0]))), (!var_3)))) ? (((min((arr_0 [i_0]), var_11)) % ((1964187737 ? (arr_0 [i_0]) : var_11)))) : ((((!(((var_5 | (arr_0 [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_15 = (min(var_15, var_0));
                    var_16 += (min((min((arr_5 [i_1]), var_2)), (((-(arr_12 [i_3] [i_3] [i_3] [i_3]))))));
                    arr_13 [i_3] [i_3] |= min(2146959360, (((+((min((-32767 - 1), 43594)))))));
                    var_17 |= (min(((!(arr_4 [i_2 + 1]))), ((var_2 == (arr_4 [i_2 - 1])))));
                }
            }
        }

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_18 = (max(var_18, (((+(((!var_6) % (arr_4 [i_1]))))))));

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_19 -= (1964187734 ? 7 : -10);
                arr_18 [i_1] [i_4] [i_5] = (((arr_15 [i_1] [i_4] [i_1]) ? ((var_2 ? (arr_15 [i_1] [i_4] [i_5]) : (arr_15 [i_1] [i_1] [i_1]))) : ((var_9 + (arr_15 [i_4] [i_4] [i_4])))));
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
