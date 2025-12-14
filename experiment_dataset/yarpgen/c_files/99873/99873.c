/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_18 = ((((arr_3 [i_0 - 1]) ^ (arr_3 [i_0 - 1]))));
        var_19 = (max(var_19, var_11));
        arr_4 [18] |= (min(((((512 == 7451) >= 7450))), ((((min(var_11, (arr_3 [3])))) - var_12))));
    }
    var_20 = max((!var_11), ((var_3 >= (7451 - 3))));
    var_21 = ((((var_12 & (~var_0))) ^ (min(var_11, var_9))));
    var_22 = var_2;

    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_23 = ((((((arr_3 [i_1]) != 669168573104250132))) * (!4294967288)));
        arr_7 [i_1 - 1] |= (((arr_3 [i_1 - 1]) >= (arr_3 [i_1 + 1])));
    }
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2] = ((((arr_9 [i_2]) ? 9223372036854775807 : (0 ^ var_9))) | (((~(arr_8 [i_2 + 3] [i_2 + 3])))));
        arr_13 [i_2 - 2] = max((arr_9 [i_2 + 1]), (max((17256456391506045352 && var_3), (min(-67, (arr_8 [i_2] [i_2]))))));
        var_24 = ((((((((-7452 ? (arr_10 [i_2]) : -7451))) ? (((((arr_11 [i_2]) && (arr_11 [i_2]))))) : (arr_9 [i_2 - 4])))) && (arr_10 [i_2])));

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_25 ^= 3645260147;
            var_26 = (arr_11 [15]);

            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                arr_20 [i_2] [i_3] [i_2] [i_3] = (((((arr_9 [i_2 - 2]) && (arr_9 [i_3 + 1]))) || 15037128065598459366));
                var_27 = (min(var_27, (((8588281056803865739 - ((((1 == (arr_19 [i_2] [i_2] [i_2] [i_4]))))))))));
                var_28 = var_12;
            }
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                var_29 = (min(var_29, (((((max(7451, (max(1092698372, 0))))) ? ((0 | ((var_10 ? var_8 : (arr_11 [i_2]))))) : (((((((arr_16 [i_5 + 1] [i_3 + 1]) ? (arr_16 [i_3] [i_3]) : 1073741824))) ? ((480433259 ? 1313272371 : -197511407)) : (arr_11 [i_3 + 1])))))))));
                var_30 ^= ((((max((arr_11 [i_2]), (((!(arr_21 [i_2] [i_3] [i_5 - 1]))))))) ? ((+((var_0 ? (arr_9 [i_3]) : (arr_9 [i_2]))))) : var_17));
            }
        }
        arr_24 [i_2] = (min((((!(((var_15 ? -4083316022000873205 : var_8)))))), (min(((2193062141 / (arr_10 [i_2]))), var_12))));
    }
    #pragma endscop
}
