/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(((20 && ((min(13870, var_8))))))));
    var_11 = (min(var_11, (((((var_1 != ((var_3 ? var_1 : var_3)))) && ((((var_4 ? var_1 : var_4)))))))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_12 -= 13870;
        var_13 = (min(var_13, ((((arr_1 [0]) || ((((!var_2) ? (arr_1 [6]) : (max((arr_0 [i_0]), 13884))))))))));
        arr_2 [i_0] = 13883;
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_14 = ((min((arr_4 [i_1] [i_1]), (((!(arr_4 [i_1] [12])))))) >> (((((arr_6 [2]) ? -var_7 : ((((arr_6 [i_1]) <= var_6))))) + 44)));
        var_15 -= var_0;
        var_16 = (min((max(var_5, (~var_6))), (arr_5 [i_1])));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_17 = ((!(arr_6 [i_2])));
        var_18 = (max(var_18, (((((min((((!(arr_8 [i_2])))), (arr_8 [i_2])))) ? (min((((arr_4 [2] [2]) ? var_6 : (arr_7 [i_2]))), ((min(var_2, var_5))))) : ((var_3 ? (((min(13865, var_8)))) : ((-(arr_4 [2] [i_2]))))))))));
        var_19 |= (((arr_7 [i_2]) ? (arr_8 [i_2]) : ((((!((max(var_4, var_8)))))))));
    }
    var_20 = (min(((((!var_8) * (~var_4)))), var_1));
    #pragma endscop
}
