/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((var_8 ? 10208505543856330299 : (max(var_8, var_3))))))));
    var_11 = ((((min((!var_7), ((var_9 ? var_5 : var_2))))) ? ((var_8 ? 1 : ((max(var_2, var_5))))) : ((((((var_0 ? var_0 : var_1)) <= ((35208 ? 1 : var_9))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_12 = ((1024275355687860824 >> ((max((-127 - 1), (arr_0 [i_0] [i_0]))))));
            var_13 *= (((var_9 ^ ((max(8214, 8206))))));
            var_14 = 57318;
            var_15 = ((-var_8 ? (((8214 ? var_4 : 36))) : (((min(var_9, 57295))))));
        }
        var_16 = (min(var_16, -418801248697276859));
        arr_5 [i_0] = 47;
        arr_6 [i_0] = (max((arr_3 [i_0] [i_0] [i_0]), ((var_5 ? 47 : var_6))));
    }
    var_17 = var_0;
    #pragma endscop
}
