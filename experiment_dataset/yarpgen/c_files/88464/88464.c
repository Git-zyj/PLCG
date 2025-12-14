/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 += (((((arr_1 [12] [12]) / (arr_1 [8] [i_0]))) / (((((((arr_1 [14] [14]) >> (((arr_1 [10] [10]) - 3597557221117753465))))) ? (((var_8 ? var_12 : var_6))) : (min(133798900, 4161168369)))))));
        arr_2 [i_0] = 4161168401;
        arr_3 [i_0] = var_13;
        var_17 = (min((((arr_0 [i_0]) >> (((arr_0 [i_0]) - 5193474651070493396)))), (((~(max(var_11, 597094859)))))));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (((!(arr_5 [i_1 + 2]))));
        arr_7 [i_1] = ((max(2958405192, 133798900)));
        arr_8 [i_1] = (arr_5 [i_1]);
    }
    var_18 = ((~((var_9 ? 18140204737805820148 : 0))));
    #pragma endscop
}
