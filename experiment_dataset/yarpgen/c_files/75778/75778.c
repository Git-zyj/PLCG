/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_7 ? 2915826797 : 18446744073709551611)) >> (43 < 3683138915916692640)))) ? ((((1323830387583361351 ? 3893247321136410936 : 213)))) : 347321304));

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, 3683138915916692620));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (((((21895 ? 1177268565 : (arr_3 [i_0 + 3])))) ? (((43 >> (10640683587949475471 - 10640683587949475471)))) : -3683138915916692621));
            var_21 -= 4741433377840206346;
            arr_7 [i_0] = (arr_0 [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_22 = ((var_12 ? 7 : var_2));
            arr_10 [i_0] = (max((arr_8 [i_2] [i_0] [10]), ((((arr_4 [i_0 + 2] [i_0 + 2] [i_0]) & (arr_4 [i_0 - 1] [i_2] [i_0]))))));
            var_23 = (max(var_23, ((min(((((222 ? (arr_4 [i_0] [i_2] [i_2]) : 357909149)))), (((max(16728270679564612711, var_18)) << (((((arr_8 [i_0] [i_2] [i_2]) ? (arr_8 [i_2] [i_2] [8]) : (arr_3 [i_2]))) - 16204)))))))));
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            arr_14 [i_0 + 2] [i_3] [i_0] = (arr_0 [i_0] [i_0]);
            var_24 -= (~3947645991);
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            arr_17 [i_0 + 1] [i_0] = ((arr_0 [i_0] [i_0]) ? (((arr_9 [i_0] [i_0 + 1] [i_4 + 1]) & (arr_15 [i_4 - 1]))) : (min((arr_8 [i_0] [i_0] [5]), ((-(arr_1 [i_0 + 2]))))));
            var_25 = (max(var_25, ((((min((arr_4 [i_0 + 3] [i_0 + 3] [0]), var_1))) ? ((6 ? 7799025722589441635 : -3)) : (-11026 * 3117698721)))));
        }
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [i_5] = (((((var_1 << (((((arr_18 [i_5]) + 877)) - 17))))) > var_17));
        var_26 = ((~(min((((arr_0 [i_5] [i_5]) ? var_18 : (arr_9 [i_5] [i_5] [i_5]))), (arr_11 [i_5 - 1] [i_5 + 1])))));
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
    {
        var_27 += (((((18 ? -729 : 2002971093))) ? ((max(16, 11))) : (((((arr_9 [i_6] [i_6] [i_6]) ? 3117698715 : 13705310695869345285)) * ((max((arr_5 [i_6]), -461)))))));
        var_28 = (arr_5 [i_6]);
    }
    var_29 = (min(var_29, var_8));
    var_30 = (min(var_30, (((32762 ? -23537 : (((((127 << (7799025722589441628 - 7799025722589441605))) <= (347321299 < 12)))))))));
    var_31 = ((((var_8 / var_18) - -97)));
    #pragma endscop
}
