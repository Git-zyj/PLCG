/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_11 += (arr_9 [i_4] [i_3]);
                            arr_17 [i_0] [i_0] [i_2] [1] [10] [i_0] = (((arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1 + 1]) ? (((arr_4 [i_1 - 2]) ? (arr_5 [i_0] [i_2 - 1] [i_1 - 2]) : 27071)) : (((18446744073709551615 ? ((max((arr_15 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0]), (arr_13 [5] [i_3])))) : (min(var_9, var_6)))))));
                            var_12 = (min(var_12, (((-((-(arr_10 [i_0] [i_1 - 2] [i_2 + 1]))))))));
                            arr_18 [i_2] [i_2] [i_2] = (max(-6715975948970510342, 107104083));
                            var_13 = ((((max(0, -10084))) ? ((((!((max(11165014349967183359, var_0))))))) : (max(-15547, (max((arr_10 [i_0] [8] [8]), (arr_7 [i_1] [i_0])))))));
                        }
                    }
                }
            }
            var_14 *= ((~(((!(arr_15 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_0] [i_0]))))));
            arr_19 [i_0] [i_1 + 1] = (((min(var_2, (((arr_13 [i_0] [i_0]) ? var_2 : 18214270676873439318)))) ^ (((((((arr_9 [i_0] [i_1]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_13 [8] [i_1 - 1])))) ? (((max(var_0, 53)))) : (max(0, 3242871226)))))));
        }
        var_15 = (((((~var_5) > ((((arr_13 [i_0] [i_0]) < (arr_9 [i_0] [i_0])))))) || (arr_9 [i_0] [i_0])));
    }
    var_16 = var_0;
    #pragma endscop
}
