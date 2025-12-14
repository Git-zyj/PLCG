/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-23 ? 7614215794833920103 : 343625058));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((0 ? var_16 : (max(7614215794833920103, 14814))));
                arr_5 [i_0] = (min((((!(arr_1 [i_1 - 1] [i_1 - 1])))), (min(((max((arr_3 [i_0]), var_7))), (arr_2 [i_1])))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 = ((!(((((max((arr_3 [i_0]), var_11))) ? 3 : 0)))));
                    arr_8 [i_0] [i_0] [i_2] = ((min(var_0, (arr_1 [i_1 + 2] [9]))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_21 = (max(var_21, ((max((arr_7 [i_3]), ((-((var_13 ? 469254551 : 0)))))))));
                        var_22 = (max(var_22, (~var_13)));
                        var_23 = (max(var_23, ((min((max(var_9, 1641200134)), ((min(1, -1))))))));
                        arr_12 [i_0] [i_0] = (((((126 == ((((arr_6 [i_0] [i_1] [i_2] [3]) >= 343625056)))))) | ((min(var_16, (((!(arr_6 [i_0] [i_1] [i_2] [i_3])))))))));
                        var_24 = (max(var_24, (0 - -3501801281058993854)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            arr_20 [i_4] [i_1] [i_2] [i_4] [i_0] [i_0] [9] = 210;
                            var_25 = 2320507280156936644;
                            arr_21 [i_5] [i_0] [1] [i_0] [i_0] = ((~(~242)));
                        }
                        var_26 = (min(var_26, (arr_14 [i_0] [i_1 + 1] [i_1] [i_0] [i_1] [i_1 - 1])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_27 *= 58982;
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (41171 ^ -121);
                        var_28 = (-9223372036854775807 - 1);
                        arr_26 [i_6] [i_0] [i_2] [i_6] = (((~9223372036854775807) ? (arr_10 [i_0] [i_1] [i_0] [i_1] [11] [i_1]) : var_2));
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_29 &= var_6;
                        var_30 = (max(var_30, (arr_27 [i_7] [i_2] [i_1] [i_0])));
                        arr_29 [i_7] [i_7] [i_0] [i_7] = (((((((((arr_23 [i_0] [i_7 - 1]) ? (arr_7 [i_0]) : 1))) + (arr_0 [i_0] [i_2])))) ? (((((3474650379 ? 10183113145279701287 : 343625073)) != (arr_15 [i_0] [i_0] [i_2] [i_1])))) : (max(-1859882319, 48))));
                    }
                }
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    arr_33 [i_0] [18] [18] [i_8] = ((var_7 ? (((arr_11 [i_8] [i_0]) ? -1859882319 : ((427584260 ? var_5 : 2047)))) : (!-var_1)));
                    var_31 = (max(var_31, ((min(-3501801281058993854, -1859882312)))));
                    arr_34 [i_0] [i_1] [10] &= min(((((((var_10 ? var_6 : -1859882316))) && (arr_32 [i_1] [i_1 - 1] [i_1] [i_1 + 2])))), (max(1, -469254551)));
                    var_32 = (arr_32 [i_0] [i_0] [i_1] [i_1]);
                    arr_35 [i_0] [i_0] [7] = ((~((~((min(var_16, var_12)))))));
                }
                var_33 = (min(var_33, ((max(((((min((arr_28 [i_1] [1] [1] [1] [1]), var_12))) ? (((arr_22 [i_0] [i_1]) / (arr_0 [i_1] [i_1]))) : (min(-7614215794833920103, 24)))), (((((max(var_14, 2147483647))) ? (2147483647 - 116) : (min(var_18, 127))))))))));
            }
        }
    }
    var_34 = var_18;
    #pragma endscop
}
