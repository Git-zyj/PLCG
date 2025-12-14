/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = (max(1, (arr_3 [i_1] [i_1] [i_0 + 3])));
            arr_8 [i_0 + 3] = (max(((((var_7 && (arr_6 [i_0]))) ? 532316706 : (((min(0, (arr_4 [3]))))))), ((((!-1) ? (((!(arr_6 [i_1])))) : (!var_13))))));
            arr_9 [i_0] [i_0] [i_0 + 3] = ((((((((-(arr_2 [i_0 + 2])))) < (((arr_3 [i_0 + 4] [i_1] [i_1]) ? (arr_6 [i_0]) : 9223372036854775807))))) >= (!-123)));
            arr_10 [i_0] [i_1] [i_0] = ((~((((1787086829309867674 ? 134217727 : -119))))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_17 &= ((+(((arr_11 [i_0 + 4] [i_2] [i_0 + 4]) ? 32767 : (arr_11 [i_0 + 2] [i_0 + 2] [i_2])))));
            var_18 = (min(var_18, ((((((842209008707951028 ? 134217727 : ((((!(arr_3 [5] [5] [6])))))))) && -134217743)))));
        }
        for (int i_3 = 3; i_3 < 8;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_19 = (((arr_11 [i_3] [i_3 + 2] [i_0 + 1]) - (((arr_14 [i_0] [i_3] [i_4]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_4] [i_5])))));
                        arr_22 [i_5] [i_3 - 1] [i_3] [i_3] = ((((((arr_12 [i_0 + 2]) ? (arr_12 [i_0 + 4]) : (arr_0 [7] [i_0 - 1])))) ? -133087049 : ((2512647037 ? (arr_0 [i_0] [i_0 + 1]) : 9223372036854775807))));
                        arr_23 [i_0] [i_0 + 4] [i_0 + 4] [i_4] [i_5] = (arr_5 [i_0 - 1] [i_3] [i_4]);
                    }
                }
            }
            arr_24 [i_0] = ((((1292839583 ? ((134217735 ? (arr_16 [i_0] [i_0 + 1] [i_0 + 1]) : 3002127713)) : 196)) != (arr_18 [i_0])));
        }
        for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
        {
            arr_27 [i_0] [i_6 + 2] = (arr_13 [i_0] [i_0] [i_0]);
            arr_28 [i_0] [i_0] = ((~((-(~32767)))));
            arr_29 [i_6] = (max((arr_26 [i_0 - 1] [i_6]), (((arr_17 [i_0] [i_6 + 1] [i_6 + 1]) / (((-134217743 && (arr_4 [i_6]))))))));
            arr_30 [i_0] [i_6 - 2] = -2;
        }
        arr_31 [i_0] = (((~(arr_0 [i_0 + 1] [i_0 + 1]))));
        arr_32 [i_0] = (((~(arr_20 [i_0] [i_0] [i_0 + 2] [i_0]))));
    }
    var_20 += var_3;
    var_21 = var_1;
    #pragma endscop
}
