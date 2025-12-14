/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_11 = ((~((min((arr_1 [12]), (arr_0 [i_0]))))));
        var_12 = (((((((((arr_2 [i_0]) - -45))) ? ((2141968821 - (arr_1 [1]))) : (arr_1 [i_0 - 3])))) * ((var_9 ? 2139095040 : (arr_0 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_13 -= (((((((arr_9 [i_0] [i_1] [i_0]) ? 2620187658 : var_10))) ? (!-20) : var_8)));

                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            var_14 = (((arr_2 [i_0]) & ((((77 || (arr_2 [i_0])))))));
                            var_15 = 10154480886493434554;
                            arr_14 [i_0] [i_1] [i_1] [15] [i_0] = (((((min((arr_9 [i_0 - 2] [i_1] [i_2]), (arr_13 [i_0] [i_0] [i_0]))) < ((10012354259347614653 - (arr_12 [i_0] [i_1] [1] [i_3] [8]))))) || (((-2253124800052345985 ? (-32767 - 1) : 29)))));
                            var_16 = (min(((4096 - (-63 - 11090292634833433413))), (arr_3 [i_0])));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_17 += ((~((~(min(2152998503, (arr_1 [i_3])))))));
                            var_18 = var_7;
                        }
                        arr_17 [i_0] [i_1 - 2] [i_0] [i_3] = ((!((max((((arr_16 [i_0] [8] [15] [i_0] [8] [i_0]) - 2152998475)), (arr_6 [i_0] [i_0] [i_2]))))));
                    }
                }
            }
        }
        var_19 = ((((((!(arr_16 [i_0] [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_0 + 2] [1])))) - (arr_0 [i_0]))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {

        for (int i_7 = 4; i_7 < 21;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_20 = (arr_23 [0]);
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_21 = ((((min((arr_25 [i_8]), var_10))) ? var_4 : ((-(arr_25 [i_6])))));
                            var_22 = (((arr_30 [i_6] [i_6] [i_6] [i_6] [i_8] [i_6] [i_6]) ? (min((arr_25 [i_7 - 3]), (arr_25 [i_7 - 4]))) : var_0));
                            var_23 = ((var_9 ? (arr_21 [i_6]) : ((-886442596 ? ((min(var_9, (arr_24 [i_6] [i_6] [i_6] [i_8])))) : (arr_27 [i_10 + 3] [i_10 + 1] [i_10 - 2])))));
                        }
                    }
                }
            }
            for (int i_11 = 1; i_11 < 20;i_11 += 1)
            {

                /* vectorizable */
                for (int i_12 = 2; i_12 < 21;i_12 += 1)
                {
                    arr_36 [i_6] [i_12] [i_6] [i_12 + 2] = var_2;
                    var_24 = (((arr_27 [i_6] [i_6] [i_6]) ? 2152998474 : (var_6 + 1)));
                }
                arr_37 [i_6] [12] [12] [11] = ((var_5 - ((-(-2253124800052345985 & 2049122009)))));
                arr_38 [i_6] [i_6] [i_11] [i_6] = (((min(var_6, var_8)) - -101));
            }
            var_25 = var_10;
        }
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            var_26 = (min(366521048, (((1 && (arr_30 [i_6] [i_6] [i_6] [i_6] [1] [i_13] [i_13]))))));
            var_27 = (0 < (arr_23 [i_6]));
            arr_42 [i_6] [i_6] [i_13] = arr_18 [i_6] [i_6];
        }
        arr_43 [i_6] = (min(-31528, 1));
        var_28 &= 2175526106;
    }
    var_29 = ((~var_1) & (min((23 ^ var_1), (min(var_2, var_0)))));
    #pragma endscop
}
