/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((6 & var_5) ? (((-(63 / 2863)))) : (max(var_10, (((var_11 ? var_2 : 2839)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_13 = (-9 + 195);
                    arr_8 [i_1] [i_1] [i_2] = (((9909947296294031878 > 1073741823) ? var_0 : (~255)));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_3] = ((!((((arr_1 [i_0]) ? (!3339253365) : ((var_0 ? (arr_7 [i_0] [3] [i_1] [i_1]) : (arr_2 [11]))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_14 = (((arr_15 [i_4] [i_3] [i_1]) ? (((arr_17 [i_5] [i_5 - 1] [i_5 + 1] [2] [10] [10]) - ((((arr_11 [9] [4] [i_4] [i_5 - 1]) ? (arr_16 [1]) : var_10))))) : ((((arr_0 [i_5 + 1]) ? var_3 : (arr_0 [i_5 + 1]))))));
                                var_15 = 62698;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_16 = (((arr_18 [i_0] [i_1] [i_1] [i_6] [i_6]) >= (arr_18 [i_0] [i_6] [i_0] [8] [11])));
                    var_17 += ((62704 ? 63 : 10425182631487559820));
                    var_18 = (max(var_18, ((((arr_21 [i_0] [13]) ? (((var_5 - (arr_18 [i_0] [9] [i_1] [5] [2])))) : 62693)))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_19 -= var_11;
                    var_20 += (((arr_15 [i_7] [i_1] [i_0]) ? (arr_19 [i_0] [i_1] [i_0]) : -2179567053));
                    var_21 = (var_5 != var_7);
                }
                var_22 = (min((arr_2 [i_0]), (((arr_2 [i_0]) << (var_5 - 117)))));

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_23 = (var_7 >> (((max((arr_28 [i_0] [i_0] [12] [i_8]), (arr_28 [i_0] [i_0] [3] [i_8]))) - 3759235857445721308)));
                    arr_31 [i_1] [i_1] [i_8] = (var_8 > 7928525307400441605);
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_24 = ((-(min(279720670, 176))));
                                arr_37 [12] [i_1] [i_8] = var_8;
                                var_25 = (max(var_25, 45));
                            }
                        }
                    }
                    var_26 = (min(119, ((min(-5524183264816378300, -1)))));
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    var_27 += ((-1 ? 7 : 11956586412599683636));
                    arr_40 [i_0] [i_1] [i_0] [i_11] = (min((((((max((arr_2 [i_11]), var_3))) ? ((min(var_10, (arr_16 [2])))) : ((1 ? 1062581379 : 7514201799970595155))))), (((arr_16 [i_1]) + (((arr_19 [i_0] [i_0] [i_1]) ? 1 : (arr_27 [12] [i_1] [i_11] [i_11])))))));
                    var_28 = arr_32 [i_1] [i_1] [i_11] [14];
                    var_29 *= (!226);
                }
                var_30 *= -var_9;
                var_31 = (4121505408 <= 3177663446);
            }
        }
    }
    #pragma endscop
}
