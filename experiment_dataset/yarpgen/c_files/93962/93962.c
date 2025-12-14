/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-var_2 ? -var_4 : var_1))) ? (((((var_2 ? var_6 : var_1))) ? (var_9 & var_6) : (~var_2))) : (var_7 > var_3)));
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] = (((arr_4 [i_0 + 1]) ? (!5926864536471067238) : (arr_7 [i_2] [i_2])));
                            var_12 -= (((~243) ? 228 : 1));
                            var_13 = (min(var_13, (((51 ? var_0 : 13)))));
                        }
                        var_14 = (min(var_14, (arr_8 [i_0 + 1] [9] [i_0] [i_2] [i_2 + 1])));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_0 + 1] [2] [11] [i_5] [i_6] = ((var_8 & 7889989293378525928) ? ((-(arr_0 [i_0 - 1]))) : -14999180704756301600);
                            var_15 &= (min(((((((14999180704756301597 ? 3447563368953250021 : (arr_21 [i_5] [i_5] [i_5] [i_5] [i_5])))) ? var_5 : var_0))), ((-(arr_5 [i_0 - 1])))));
                            arr_23 [i_6] [i_6] [15] [i_2 + 1] [i_1] [i_0] = ((-((((var_1 & (arr_7 [i_0] [i_0]))) / (arr_8 [i_0] [i_0 - 1] [i_1] [i_2] [i_2 + 1])))));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_5] [i_5] [i_2] [i_1] = (arr_6 [5] [i_1] [i_2 - 1] [5]);
                            var_16 = (max((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : var_3)), (max((arr_25 [17] [i_1] [i_2 - 1] [17] [i_2 - 1] [i_2]), (max((arr_0 [i_0]), (-2147483647 - 1)))))));
                            var_17 = (max(var_17, (((var_6 ? var_4 : ((((((51 ? var_9 : var_4))) && 14999180704756301597))))))));
                            var_18 = ((((-(arr_20 [20] [20] [20] [1] [20]))) / 240));
                            var_19 &= ((~((var_5 ? 1040384 : var_3))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_30 [14] [i_5] [i_0] [i_0] = (arr_10 [i_0] [i_1] [i_2] [i_8]);
                            arr_31 [i_0 + 1] [i_1] [i_1] [i_2] [i_5] [i_5] [i_8] = var_5;
                        }
                        arr_32 [i_0] [i_0] [22] [16] = ((((14999180704756301586 & ((((arr_18 [i_0] [i_5] [i_5] [i_5] [i_1] [i_0] [i_5]) >> (1385577316 - 1385577288)))))) & (arr_25 [21] [22] [i_2] [i_1] [i_1] [13])));
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_20 = var_3;
                        var_21 = (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [17] [i_2] [i_2] = (var_0 ^ 3447563368953250007);
                        arr_41 [17] [22] [22] [22] |= (((arr_29 [1] [i_2] [1] [i_2] [i_2 + 1] [i_10]) == 156));
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, (((3497138490 < (min(4294967289, 101)))))));
                        arr_44 [i_11] [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1] = var_7;
                        arr_45 [i_1] [7] [i_1] [14] [i_0] = ((~(arr_25 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_0 - 1])));
                    }
                    var_23 = (((arr_9 [i_0] [i_1] [i_1]) ? (1307962538 && 242) : (arr_34 [i_0] [i_1] [i_2] [i_1])));
                    var_24 -= (((var_7 == var_1) ? ((((arr_5 [i_0 - 1]) ^ (((min(36, (arr_18 [i_0] [1] [i_1] [i_2] [i_2] [1] [i_2 + 1])))))))) : (min((max((arr_12 [i_0 + 1] [i_1] [20] [i_1] [20] [i_2]), (arr_11 [i_2 + 1]))), (arr_11 [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
