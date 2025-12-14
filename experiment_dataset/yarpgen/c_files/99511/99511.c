/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((-123 ? var_12 : var_8)) - var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (max(var_21, 224));
                arr_5 [i_1] [i_0] = ((min(5900603624901305392, (arr_2 [i_0] [i_1 + 1] [4]))) & ((((((((arr_4 [i_1 + 1] [i_1 + 3] [i_0]) ? (arr_3 [i_1] [i_0]) : 123))) <= (arr_0 [i_1 + 2] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
