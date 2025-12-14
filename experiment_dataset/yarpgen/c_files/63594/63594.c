/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (91 + 1483054219);
                arr_5 [i_0] [i_1 - 3] [i_1] = ((((1 == ((min(var_8, var_6))))) ? (((!(!-1483054209)))) : var_17));
                var_20 = ((~((-431446142 & (-16797 != 36)))));
                arr_6 [i_0] = (~var_15);
            }
        }
    }
    var_21 = (min(((min((var_17 == -36), (var_7 <= 0)))), var_0));
    #pragma endscop
}
