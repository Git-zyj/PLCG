/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = ((((var_11 + (max(var_4, 18446744073709551606))))) ? ((max(var_8, var_10))) : ((-22 ? 96 : 13623670365067574193)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((((arr_1 [i_1]) ? 134217727 : (157 & var_9))));
                var_16 += 56223;
                arr_4 [i_0] [15] [i_0] = ((((101 ? 2031265870 : 82)) & ((((~(arr_3 [13] [i_1])))))));
            }
        }
    }
    var_17 = (~var_6);
    #pragma endscop
}
