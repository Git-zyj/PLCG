/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((27 % ((var_6 ? var_13 : var_11)))) * ((max(((var_0 ? var_4 : var_14)), (!var_1))))));
    var_16 += (min((((~(~var_8)))), (min(var_6, var_12))));
    var_17 = (((((-var_9 >> (-var_2 - 83)))) ? var_6 : var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 ^= ((-((4807670852522648233 ? (arr_3 [i_0]) : (arr_3 [i_0])))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_19 *= (~var_10);
                var_20 = ((var_14 ? (arr_6 [i_0]) : (arr_6 [i_0])));
                var_21 = ((-(arr_1 [i_0])));
            }
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_22 = (min(var_22, var_9));
                arr_13 [i_0] [i_0] [i_0] [i_0] = (max(30, (((arr_5 [i_0]) ? (!var_6) : ((var_10 ? (arr_4 [i_0] [i_0]) : (arr_7 [i_3] [i_1] [i_1])))))));
                arr_14 [i_0] [i_1] [i_0] [i_0] = 3146760005591582326;
                var_23 = ((((((-(arr_6 [i_0]))))) & (min(15870808725367863887, ((max(var_7, var_5)))))));
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                arr_18 [i_0] [i_0] [i_4] [i_0] = (max((max(var_11, ((var_1 / (arr_11 [i_0] [i_0] [i_0] [i_0]))))), ((var_14 / (max(var_11, var_12))))));
                var_24 = var_7;
                var_25 = (max(var_25, (arr_7 [i_0] [i_1] [i_1])));
                arr_19 [i_0] [i_1] [i_4] [i_0] = (min((!10307472358371463840), (arr_1 [i_0])));
            }
            arr_20 [i_0] [i_1] [i_0] = (((((((var_13 ? (arr_12 [i_1] [i_0] [i_0] [i_0]) : var_11))) ? (min(var_7, (arr_4 [7] [7]))) : ((~(arr_4 [i_1] [i_0])))))) ? ((24440 ? var_7 : (arr_3 [i_0]))) : ((((min((arr_12 [18] [i_0] [i_0] [i_1]), var_12))))));
            arr_21 [i_1] [i_1] [i_0] = var_5;
        }
        var_26 = (max(var_26, ((((var_9 || var_8) ? (arr_10 [i_0]) : ((var_10 ? (arr_17 [6] [i_0] [i_0]) : (arr_4 [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_29 [i_0] [i_0] [i_6] [i_7] = ((((((~4724) ? (arr_7 [i_0] [i_5 - 1] [i_6]) : (arr_24 [i_5 + 2] [i_5 + 2])))) ? (arr_0 [i_7] [i_5 - 1]) : ((+(max((arr_6 [i_0]), (arr_11 [i_0] [i_5 - 1] [i_6] [1])))))));
                        var_27 *= (min(var_3, ((var_13 ? var_12 : (min((arr_25 [i_0] [i_5] [8] [i_7]), (arr_22 [i_0] [8] [i_6])))))));
                        arr_30 [i_0] [i_5 + 1] [i_5] = ((max(var_7, (arr_17 [i_0] [i_5 + 2] [i_5 + 3]))));
                        var_28 = ((!(((var_13 ? (arr_10 [i_5 + 1]) : (arr_10 [i_5 + 2]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
