/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((((11707396218830906758 ^ var_15) & var_5)), ((min((var_13 && var_13), var_3))));
    var_19 = var_15;
    var_20 = (((((((max(1385982296295652177, var_5))) ? 6739347854878644837 : 6123682154690670291))) ? var_1 : 11707396218830906771));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, ((max((((var_16 + 9223372036854775807) << ((1 >> (6739347854878644830 - 6739347854878644805))))), ((min((arr_4 [i_2 - 1] [i_2 + 2]), (arr_4 [i_2 + 1] [i_2 + 1])))))))));
                    var_22 = min((max((!var_1), (max(11707396218830906758, 6739347854878644844)))), ((((((arr_3 [7] [i_0] [i_2 + 1]) ? var_3 : 11707396218830906778)) <= 14826))));
                }
            }
        }
        arr_9 [i_0] = (max(var_9, ((((var_6 == var_6) < -var_2)))));
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        arr_13 [6] &= ((6739347854878644837 & ((max(((6739347854878644842 ? (arr_12 [i_3 + 3]) : (arr_12 [9]))), (max((arr_11 [i_3] [i_3]), 67099155)))))));
        var_23 = arr_11 [i_3 + 2] [i_3 + 2];
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_17 [i_4] = (((((1 ? (((arr_4 [i_4] [i_4]) / (arr_6 [i_4]))) : (4503 > 32757)))) != ((((min(0, (arr_10 [10])))) ? (((0 * (arr_11 [12] [i_4])))) : 9750674392463593981))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_24 -= var_7;
            var_25 = (max(var_25, ((((arr_12 [i_5]) ? (max(13653488738225354432, (arr_12 [i_4]))) : 48942)))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_24 [i_6] [i_6] [i_4] = (min(var_11, 4503));
            arr_25 [2] &= 1;
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {

                /* vectorizable */
                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    var_26 = (min(var_26, (((~(var_2 / 28045))))));
                    var_27 = (arr_4 [i_7] [i_8]);
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                {
                    var_28 -= ((((-(min(-14827, var_4))))) ? var_16 : ((((var_2 <= (arr_32 [i_7]))))));
                    arr_38 [i_7] [i_8] [i_8] = (((((11707396218830906776 ? ((max(var_11, (arr_10 [i_8])))) : (((arr_5 [i_7] [3] [i_7]) ? var_10 : (arr_33 [i_7] [i_7] [i_10])))))) ? var_14 : (((min(var_2, 6))))));
                }
                arr_39 [i_8] [i_7] [7] = (arr_36 [i_7] [i_7] [i_8]);
                var_29 = (min(var_29, ((((((((var_6 ? 14826 : (arr_5 [i_7] [i_8] [i_7]))) * 110))) ? (arr_11 [i_7] [i_8]) : (max(-var_13, ((~(arr_0 [6]))))))))));
                arr_40 [i_8] = ((+(((arr_33 [i_8] [i_7] [i_7]) / var_0))));
            }
        }
    }
    #pragma endscop
}
