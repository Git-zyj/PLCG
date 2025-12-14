/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((((((var_11 ^ (arr_0 [i_0]))) + (var_0 || var_4))) + 2147483647)) << (((var_0 + var_5) + 111))));
        var_12 = (min(var_12, (((((+(max((arr_2 [i_0]), 63063)))) * (((((!(arr_1 [i_0 + 1])))) + ((15 - (arr_0 [i_0]))))))))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_13 = ((-var_4 == ((max(var_4, var_1)))));
        var_14 = (max(var_14, ((((~(93 - -4617362925006205305))) * (((((6987474862316139914 >= 52619708) <= (((arr_2 [i_1]) + (arr_1 [i_1])))))))))));
        arr_6 [i_1] = ((4617362925006205300 + (((var_3 - var_8) ? (((max(var_3, var_7)))) : -4617362925006205331))));
    }
    var_15 = (((((var_7 ? 0 : -17))) >> (((((var_4 + -4617362925006205312) / var_1)) + 111684273637769))));
    var_16 = (((((((var_9 ? var_6 : 98))) || (var_7 && var_8))) && ((((((var_5 ? var_1 : var_1))) ? ((max(var_7, 1))) : var_9)))));

    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((-((var_3 * (arr_0 [i_2 - 2])))));
        var_17 = (max(var_17, (!var_6)));
    }
    var_18 -= ((var_11 || ((((var_5 > var_8) ? var_8 : var_6)))));
    #pragma endscop
}
