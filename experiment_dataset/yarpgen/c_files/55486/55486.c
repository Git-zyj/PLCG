/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (((((!(arr_1 [i_0])))) < (arr_1 [5])));
        var_19 = ((var_5 ? ((-(arr_0 [i_0] [i_0])) : 17164806863001355058)));
        var_20 = (max((arr_1 [i_0]), (((((arr_0 [5] [5]) ? (arr_0 [i_0] [i_0]) : 32762)) ^ (((arr_0 [1] [i_0]) >> (((arr_1 [5]) - 8))))))));
        var_21 = (((((-1553003771112811740 / 1) ? ((max(11739, 1))) : 0))) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_22 = (((((max((arr_5 [i_1 + 1] [i_1]), (arr_2 [i_1]))))) ? (arr_4 [i_1]) : (arr_4 [i_1 + 1])));
        var_23 = (((((((arr_4 [i_1]) ? var_5 : (arr_5 [i_1] [i_1]))) <= (arr_4 [i_1]))) ? (min((arr_4 [i_1 + 1]), (arr_3 [i_1]))) : (((((max((arr_5 [i_1] [i_1 + 1]), var_17)) == (((((arr_5 [i_1] [i_1]) != var_17))))))))));
        var_24 = ((-34 ? 8247955766523194907 : ((6215009923823780251 ? 8302580224990202417 : 8312534607714112110))));
        var_25 = ((((((arr_4 [i_1 + 1]) ? 2205694144 : 7))) - (arr_2 [i_1])));
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_26 = 1;
        var_27 = (min((arr_8 [i_2]), (max((!257644768723754769), (arr_7 [i_2])))));
        var_28 = (arr_6 [i_2]);
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_29 = (arr_9 [i_3]);
        var_30 = ((((37 ? (18446744073709551615 || var_15) : 8583587758826711606)) >> (32762 - 32753)));
        var_31 = (max(var_31, (((1 + 7359259408934606359) ? (max((arr_9 [20]), (arr_10 [i_3 + 2]))) : (((((arr_10 [i_3 - 1]) >= (arr_10 [i_3 - 1])))))))));
        var_32 = (min(var_32, 0));
    }
    var_33 = var_17;
    var_34 = (18446744073709551615 * -96252013374814129);
    var_35 = var_12;
    #pragma endscop
}
