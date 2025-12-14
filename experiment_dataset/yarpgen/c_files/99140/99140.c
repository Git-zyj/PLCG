/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-1876680638 % -31082);

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = (((((max(1, 1)))) - ((((max(0, 0))) ? (max(3123124408594854876, var_0)) : (arr_1 [i_0 + 3])))));
        var_13 = (max(var_13, ((((~(arr_0 [1] [i_0])))))));
        arr_4 [i_0] = (min((((arr_1 [i_0 + 1]) || 0)), (((arr_1 [i_0 + 2]) && (arr_1 [i_0 + 3])))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_14 = (((((var_6 <= ((3123124408594854876 ? -29566 : (arr_6 [i_1])))))) < 1));
        var_15 = (min(var_15, (((((((max(var_2, var_8))) ? 0 : (!11369310403997635531)))) % (((((var_3 ? var_11 : 255))) | 5423907656438927422))))));
        var_16 = (max(((!(((var_3 ? var_7 : var_2))))), ((!(min(0, (arr_5 [i_1])))))));
    }
    #pragma endscop
}
