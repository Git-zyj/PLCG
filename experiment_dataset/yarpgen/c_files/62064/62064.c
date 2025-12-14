/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [0] = (((((((1152921504573292544 << (17293822569136259071 - 17293822569136259040)))) ? (((arr_0 [1]) ? (arr_1 [i_0]) : 8589934591)) : ((((arr_1 [i_0]) * var_10))))) != 5974824448891060639));
        arr_3 [i_0] = (((((1152921504573292545 & ((((arr_1 [4]) ^ (arr_1 [9]))))))) && ((!(arr_1 [5])))));
        var_18 *= (~var_12);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_19 -= ((!(~4294967270)));
        arr_7 [i_1] = -26984;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((-(min((max(0, 17293822569136259049)), ((max((arr_8 [i_2]), var_5))))))))));
        var_21 |= (((((max((arr_6 [3]), 96)) >> (((arr_4 [i_2]) - 5356191453572134297)))) + (min(((~(arr_6 [9]))), (min(-853, (arr_9 [i_2])))))));
    }
    var_22 = (min(var_22, ((((max((min(8674330627324510934, var_4)), var_2)) == (((var_11 ? (var_3 > -6854) : (!var_17)))))))));
    var_23 = var_5;
    #pragma endscop
}
