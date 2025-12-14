/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_20 = ((var_7 != (((1603684114 ? 13480 : (arr_2 [i_0]))))));
        var_21 += (arr_0 [i_0 + 2]);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_22 = (-1408165804 ? ((812637627 ? 812637627 : -1023)) : 39377);
        var_23 ^= ((((+((52078 >> (((arr_0 [7]) - 815725090)))))) == ((~(((arr_1 [i_1] [i_1]) << (((-812637608 + 812637637) - 20))))))));
        var_24 = ((~((~(arr_4 [i_1 - 1] [i_1 + 2])))));
        var_25 = (max((((var_3 == (((-812637626 ? 812637653 : (arr_3 [i_1 + 2] [i_1 + 2]))))))), (((max(var_3, -5781)) ^ ((-1321016925 ? 4020489954 : (arr_0 [i_1])))))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_26 = (max(var_26, ((((arr_5 [i_2]) >> (1219255219 - 1219255208))))));
        var_27 = ((arr_9 [i_2 + 2]) % var_4);
    }
    var_28 = ((10397 ? (((((var_19 ? var_9 : var_7))) ? ((133 ? 812637653 : var_19)) : ((var_6 ? 36026 : 39377)))) : var_13));
    #pragma endscop
}
