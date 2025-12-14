/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((!(var_2 >= var_9)))));
    var_16 = var_7;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_17 = (((((13400608208655186885 ? 13400608208655186885 : 48590))) ? 4490320590724514368 : var_2));
        arr_3 [i_0] = (((min((arr_2 [i_0]), (arr_2 [i_0]))) * ((((!(arr_2 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((14037866863772394273 && 1) >= (((!(max(var_13, var_13))))));
        var_18 = (max(var_18, (((-var_9 ? (arr_2 [10]) : (max((arr_0 [12]), (arr_5 [12]))))))));
        var_19 = (arr_5 [i_1]);
    }
    var_20 = var_6;
    #pragma endscop
}
