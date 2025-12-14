/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (((((var_1 != 6203568378163001546) ? (!var_0) : (var_5 / var_1))) * ((-(min(201326592, var_6))))));
    var_12 -= (max(((((min(var_8, var_9)) / var_8))), (4093640715 / var_5)));
    var_13 = (((((((201326582 ? var_1 : 528650883))) ? (max(var_5, var_4)) : (!var_7))) != (((((max(528650866, 2316680197))) ? (min(1879048192, var_8)) : (var_6 * var_3))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 += (arr_1 [i_0]);
        var_15 += ((((min((((arr_1 [14]) ? 3584 : 3587)), (((!(arr_2 [i_0]))))))) ? ((((!var_4) || (arr_1 [i_0])))) : ((((!(arr_1 [i_0]))) ? (((var_8 && (arr_1 [i_0])))) : ((var_4 ? (arr_0 [i_0] [5]) : var_2))))));
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        arr_6 [1] = 1;
        var_16 |= 7971689394705476550;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_17 = (min(var_17, ((max(-2589805059423100779, (((min(var_9, (arr_3 [i_2] [1]))) / 1616631826)))))));
        var_18 -= ((((((((arr_4 [5] [5]) / 6203568378163001536))) ? 13327352148835696085 : ((((arr_8 [i_2]) ? var_5 : 19))))) * (((min((min(var_6, 235)), ((((arr_2 [i_2]) && -6203568378163001549)))))))));
        var_19 = ((var_0 | var_4) & ((~((237 ^ (arr_0 [i_2] [11]))))));
    }
    var_20 = (!(((-14 ? (4093640706 + 117735287) : -var_5))));
    #pragma endscop
}
