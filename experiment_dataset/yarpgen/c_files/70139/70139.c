/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_12;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = var_11;
        var_16 = ((((min((((-32767 - 1) ? (arr_2 [i_0]) : 15)), (-32767 - 1)))) ? var_6 : var_1));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = ((((~32757) ^ (arr_0 [i_1]))) | var_7);
        var_18 = (((arr_0 [i_1]) ? 32737 : -var_8));
        arr_6 [i_1] [i_1] = ((!((((~var_9) / (((((arr_0 [i_1]) <= var_2)))))))));
        var_19 = var_10;
        arr_7 [i_1] = ((~(arr_5 [i_1])));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] = (((-1256982486 % var_12) == ((max(-554256995, (arr_2 [i_2]))))));
        var_20 = ((!(((var_10 ? 32737 : -554256995)))));
        var_21 |= (~var_2);
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_14 [i_3] |= 32760;

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_22 = ((((((var_9 * var_0) ? (((var_12 ? (arr_0 [i_3]) : var_11))) : 17175443140520550715))) && (((~((min((arr_5 [i_3]), var_11))))))));
            arr_18 [i_3] = var_5;
            var_23 = -1575327516;
            var_24 -= ((3147419080 ? 1073741824 : (((arr_15 [i_3] [i_3] [i_3]) ? 32767 : -32737))));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_22 [i_3] [i_5] &= var_14;
            var_25 *= (min(((-(var_13 * 0))), (((0 ? ((max(var_2, var_0))) : (!var_4))))));
            var_26 = ((((!(((1073741837 ? var_2 : 17808))))) ? ((+(max((arr_9 [i_3]), var_13)))) : ((min((var_1 & var_1), ((var_5 ? var_8 : var_7)))))));
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_27 = (arr_13 [i_6]);
            arr_25 [i_3] [i_6] [i_3] = (((min(((32757 ? (-32767 - 1) : var_2)), 11931))) ? ((4276371692 ? 1073741838 : 1)) : (min(var_6, var_1)));
            var_28 = (((var_11 / -1073741836) ? var_9 : ((min(153626990, (arr_5 [i_3]))))));
            var_29 = (!var_4);
        }
    }
    var_30 = var_13;
    #pragma endscop
}
