/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = (((((114 ? ((var_14 ? 10557406837745484545 : var_10)) : var_7))) ? (max((((var_14 ? var_1 : 255))), (min(2376510124140183345, var_14)))) : (((((var_8 % var_8) <= (var_2 <= var_2)))))));
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_18 += (max((((arr_6 [12]) >> (var_3 - 7957597481618822549))), ((max(-32, 1)))));
                arr_7 [i_0] [i_0] = ((-(max((arr_2 [i_0]), (arr_2 [i_0])))));
            }
        }
    }
    var_19 = (max(var_10, (max(((max(-16146, var_2))), var_8))));
    #pragma endscop
}
