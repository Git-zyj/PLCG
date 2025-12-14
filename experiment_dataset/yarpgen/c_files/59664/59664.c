/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((29368 ? (2985481002 + 2985616942) : (((1 * 1) ? 1 : ((max(0, 65527))))))))));
    var_21 -= (min((((((var_3 ? 221 : var_4))) ? var_6 : 52680)), ((((max(var_16, var_9))) ? 232 : 65535))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_22 = (((16128 ? 119 : 1)));
                arr_7 [i_1] = ((((max(var_17, 232))) ? 34 : 217));
                arr_8 [i_0] [i_0] [i_0] = (((~119) ? (min(var_16, 2938533260)) : ((min(1, 31)))));
            }
        }
    }
    var_23 = ((var_6 ? 35 : ((var_10 ? ((min(-16133, 30835))) : var_19))));
    #pragma endscop
}
