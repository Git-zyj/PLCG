/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((985772750 - (min(3136664680, 985772750))))) ? ((((((985772766 ? var_0 : var_11)) <= var_9)))) : var_15);
        arr_3 [i_0] = var_7;
        var_19 = (+(((316683550 * var_2) << (var_13 - 10023301507183331403))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (min(985772766, 8));
        arr_8 [1] [i_1 + 1] = ((min(35, 5524)));
        arr_9 [i_1] = (((var_12 && (((-5500 ? 18 : var_14))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] = (min(((((min((arr_10 [i_2]), var_9))) ? ((min(var_17, var_8))) : ((2940422758 ? var_1 : 4227982015)))), (((((1 ? 4611686018426339328 : (arr_1 [i_2])))) ? (1 != -1233751621) : var_15))));
        var_20 += (((((62 ? ((4276688968 ? 6 : (arr_6 [i_2]))) : ((((((arr_5 [17]) + 9223372036854775807)) << (var_11 - 17466874078223826629))))))) ? (min(((var_4 ? var_15 : (arr_4 [1]))), (arr_10 [i_2]))) : ((((5524 <= -5996241495517877762) ? ((var_12 ? (arr_0 [i_2] [i_2]) : 763199230)) : ((((arr_11 [2]) == var_10))))))));
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        arr_15 [i_3] = 4136631628;

        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            arr_18 [i_3] = ((~1) ? -1 : (((arr_17 [i_3 - 1] [i_3] [i_3 - 1]) ^ ((var_8 ? var_1 : -4)))));
            arr_19 [i_3] = var_1;
        }
    }
    #pragma endscop
}
