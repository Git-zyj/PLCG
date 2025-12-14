/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min((!var_4), var_2)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((max((1343583564 && var_1), (var_14 != 2134434214))) ? 57415 : (arr_0 [i_0]));
        arr_3 [16] = (arr_1 [i_0] [8]);
        arr_4 [i_0] = (((max((((arr_0 [i_0]) / (arr_0 [i_0]))), (arr_0 [i_0]))) < (((!(var_18 && 65535))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = ((!(-1 != var_8)));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_1] [i_1] [i_1 + 1] = var_15;
            arr_12 [i_1] [i_1] = var_7;
            arr_13 [i_1] [i_1] = (i_1 % 2 == zero) ? (((!(((((((arr_9 [16]) % (arr_5 [10] [i_1])))) ? (((arr_10 [i_1] [i_2] [i_2]) >> (arr_5 [i_1] [i_1]))) : (((arr_8 [i_1] [i_1] [13]) >> (var_15 - 61319))))))))) : (((!(((((((arr_9 [16]) % (arr_5 [10] [i_1])))) ? (((arr_10 [i_1] [i_2] [i_2]) >> (((arr_5 [i_1] [i_1]) - 38)))) : (((arr_8 [i_1] [i_1] [13]) >> (var_15 - 61319)))))))));
            arr_14 [i_1] [i_2] [i_2] = max(((min(var_7, -115))), ((19900 ? (max(var_12, var_5)) : (!34477))));
            arr_15 [i_1] [3] = ((~((min((arr_10 [19] [19] [i_1 - 1]), (arr_10 [10] [14] [i_1 - 1]))))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_19 [i_1] [i_3] = (arr_9 [i_1 + 3]);
            arr_20 [i_1] [i_1] = (((((var_17 ? 59670 : 4589)))) ? ((((var_18 ? var_3 : -7974)) ^ ((11697 ? 48530 : 34477)))) : (arr_9 [i_3]));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_23 [i_1] = min(45026, (((!(!var_15)))));
            arr_24 [i_1] = var_2;
            arr_25 [i_1 - 1] [i_1] = ((!((((~-1) + (max(var_6, 4)))))));
            arr_26 [i_1] = (!var_10);
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            arr_29 [13] [i_1] [i_1] = var_18;
            arr_30 [i_1] [i_1] = ((!(arr_9 [i_1 - 1])));
            arr_31 [i_1] = ((!((((arr_10 [9] [i_1 + 1] [i_5]) ? var_4 : 61607)))));
        }
        arr_32 [i_1] [i_1] = (!var_8);
        arr_33 [i_1] = (min((arr_6 [i_1 + 2] [i_1]), (-1 != var_18)));
        arr_34 [i_1] = (arr_28 [i_1] [i_1 + 3]);
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_39 [i_6] = (!var_2);
        arr_40 [i_6] = (arr_38 [i_6]);
    }
    #pragma endscop
}
