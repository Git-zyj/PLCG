/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (max(var_14, ((-var_6 ? (arr_0 [i_0]) : ((-(arr_1 [8])))))));
        var_15 = (min((((!(arr_1 [i_0])))), (var_2 & 18294162525254202793)));
        var_16 = (max(var_2, ((((arr_2 [i_0]) < 1)))));
        var_17 = (((arr_0 [i_0]) * (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((1983507234 ? 1983507251 : (min(1983507220, -1983507217))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_17 [i_5] [i_1] [i_3] [i_1] [i_1] = ((((((arr_15 [i_1 - 1] [i_1 - 1] [i_3] [i_3] [i_5]) ? 0 : (arr_12 [5] [i_4] [i_2 - 3] [i_2 - 3] [i_1])))) ? var_0 : ((64678 ? 1983507207 : 1))));
                            arr_18 [i_1] [i_1] = var_10;
                        }
                        var_18 = (arr_15 [i_4 - 1] [i_2 - 2] [i_1 + 1] [i_1] [5]);
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = ((-(arr_0 [i_6])));
        var_19 = (max(var_19, ((var_7 ? (((arr_21 [12]) >> (((((arr_2 [8]) ? var_1 : (arr_2 [22]))) - 1807080800)))) : (((arr_22 [i_6]) | (arr_22 [i_6])))))));
    }
    #pragma endscop
}
