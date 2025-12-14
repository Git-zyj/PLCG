/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_13 + 2147483647) << ((((((-(var_8 >= var_12))) + 24)) - 23))));
    var_17 = ((!(((16351 ? -16344 : -16352)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] &= ((-29384 + (((arr_2 [i_0]) / (arr_2 [i_0])))));
        var_18 = (max(var_18, (26094 != 41)));
        arr_4 [i_0] = (max(((var_11 ? var_5 : ((-26982 ? var_14 : 16351)))), 39441));
    }
    #pragma endscop
}
