/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = ((var_10 ? (((-(var_7 > var_8)))) : (((1 ? 0 : var_8)))));
                arr_4 [i_0] [i_1] |= (((arr_3 [i_0] [i_1] [i_0]) == ((-(((var_7 + 9223372036854775807) << var_2))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_7 [i_2] = (((arr_5 [i_2]) >= (var_7 ^ 1)));
        var_14 -= ((~((min(1, (arr_5 [i_2]))))));
    }
    #pragma endscop
}
