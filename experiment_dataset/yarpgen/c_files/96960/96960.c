/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_8 ? 3234647627 : 2101537745584292312))) ? (((max(var_0, var_6)))) : 6)));
    var_12 = (!15986582810184014757);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = -2;
                arr_6 [i_0] [i_0] [i_0] = (((max(((min((arr_3 [1] [1] [i_1]), var_6))), (var_9 & 18446744073709551600))) < (max((min(72048797944905728, (arr_1 [i_1]))), (arr_0 [i_0] [i_1])))));
                var_13 = (max(var_13, var_5));
                var_14 = (max(var_14, 65535));
            }
        }
    }
    #pragma endscop
}
