/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((!((min(var_15, var_4)))))));
    var_19 = ((1758416378701967101 ? (((((var_4 ? -1261260378 : var_3))) ? -var_8 : (max(var_1, var_0)))) : 5686464269953393853));
    var_20 = (max(var_20, 72057594037927872));

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_21 = ((~((max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
        arr_2 [i_0] |= (((~59367) ? 5686464269953393833 : ((min(((-5686464269953393854 ? 3213776542 : 3213776550)), 3213776552)))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [8] = ((((((arr_3 [i_1 - 2] [i_1 + 2]) ? 756449081 : (arr_4 [i_1 + 1])))) ? -5686464269953393853 : (((((arr_4 [i_1 - 1]) < (arr_5 [i_1 + 2] [i_1 - 2])))))));
        arr_7 [i_1] = ((((((arr_5 [i_1 + 2] [i_1 + 2]) ? 3213776523 : var_12))) && ((min((arr_4 [i_1 + 1]), (arr_5 [i_1 - 2] [i_1 + 2]))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = 1081190764;
        arr_12 [i_2] = (arr_1 [i_2]);
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_22 = 3226254090790975886;
        var_23 = ((((!(((1047 ? var_10 : 3213776539))))) ? (arr_9 [i_3]) : (((arr_13 [i_3]) ? (arr_0 [i_3]) : 19452))));
    }
    #pragma endscop
}
