/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_4 ? -274875809792 : var_12)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = (max((((var_1 % 59) | (max(8426787004242109213, var_10)))), ((((var_9 ? 4276216325941686829 : (arr_1 [i_0]))) >> (var_16 - 62887)))));
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? (((var_1 ? -248 : (max((arr_0 [i_0]), var_5))))) : (max(58519684, 10813013698736073740))));
        var_22 = (min(var_22, (!var_14)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = ((var_16 >> (((!((max((arr_3 [i_1]), var_0))))))));
        arr_6 [i_1] = ((!((0 && ((max(var_19, 274875809810)))))));
        var_23 = ((-(arr_0 [i_1])));
    }
    #pragma endscop
}
