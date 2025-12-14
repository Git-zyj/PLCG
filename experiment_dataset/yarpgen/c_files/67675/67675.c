/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(min(1, var_6))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_0 [8]), (min(236716412, 0))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_17 &= ((-((~(arr_1 [i_0] [i_0])))));
            var_18 = -231197949;
            var_19 = ((((min((arr_3 [6] [i_1]), (arr_1 [i_0] [i_0])))) ^ (arr_3 [i_0] [i_0])));
            var_20 = (min(((min((arr_0 [i_0]), 22))), (min((((arr_3 [i_1] [i_1]) ? (arr_3 [i_0] [9]) : -7372427709262964151)), (arr_0 [i_0])))));
            arr_5 [i_1] [i_0] = (arr_4 [i_1] [i_1] [i_1]);
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_21 = var_5;

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_22 = (arr_4 [i_0] [5] [1]);
                var_23 = 14207297732823282851;
                var_24 = (((-25 ? (arr_1 [i_2 + 1] [i_2 + 1]) : (arr_1 [i_2 + 1] [i_2 + 1]))));
            }
            var_25 ^= ((((!(!1))) ? ((-((-(arr_4 [i_2] [5] [3]))))) : ((min(1, ((!(arr_9 [i_2] [2] [i_2]))))))));
            var_26 = (((((((min(0, (arr_0 [2])))) * -40))) ? 1 : ((((arr_3 [i_2] [i_0]) < 48371)))));
        }
    }

    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_27 = (min((min(((var_10 ? (arr_13 [i_4] [i_4]) : 17136)), (arr_14 [i_4] [i_4]))), (min((!8841546987165016387), ((1 ? (arr_13 [i_4] [1]) : -107))))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_28 &= 1;
            var_29 = (min(1, 48367));
            var_30 -= (min(((((~1) & ((min((arr_15 [i_5] [i_4]), var_11)))))), var_6));
            var_31 = ((-25 + ((var_13 ? 758 : (((min((arr_17 [0]), (arr_16 [i_4] [i_5])))))))));
        }
        var_32 = ((~(arr_15 [i_4] [i_4])));
        arr_18 [i_4] [i_4] = (1259832869 ^ 40);
    }
    var_33 = (min(var_33, 8841546987165016384));
    var_34 = (((min(var_0, var_5)) < var_13));
    #pragma endscop
}
