/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((((1128385765 * 336737998) ? ((var_2 ? var_0 : var_10)) : ((var_0 ? var_5 : var_4))))) + ((var_4 ? ((min(var_5, var_7))) : ((var_12 ? var_12 : var_9)))))))));
    var_15 = ((((min(((1 ? -1 : 3819445136)), (((var_13 ? var_6 : var_8)))))) ? (max(((max(var_3, 6))), (max(9523450917559829903, var_3)))) : ((min(((var_5 ? var_5 : var_10)), ((max(var_0, var_0))))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1] = var_13;
            var_16 = ((((max(0, 1451360757))) ? (((var_13 == var_11) ? ((max(var_3, var_5))) : (min(var_10, var_12)))) : (4294967295 >= 1)));
            var_17 = (((max((min(var_13, var_12)), (var_7 && var_5)))) ? ((((((var_13 ? var_12 : var_4))) ? var_10 : ((var_11 ? var_13 : var_8))))) : ((((min(var_8, var_1))) ? ((var_1 ? var_7 : var_4)) : (((min(var_6, var_4)))))));
            var_18 = (max(var_18, (((((min((((var_9 ? var_0 : var_2))), ((1977602342 ? 567742566 : 4294967295))))) ? (((var_1 + var_8) | ((min(var_1, var_1))))) : (max(50776, -1638834353)))))));
        }
        var_19 = ((((min(((var_0 ? var_2 : var_0)), ((var_1 ? var_10 : var_1))))) ? (((var_13 != var_11) ? ((var_3 ? var_9 : var_12)) : ((max(var_3, var_6))))) : ((((max(var_2, var_8))) ? var_8 : ((var_5 ? var_12 : var_1))))));
    }
    #pragma endscop
}
