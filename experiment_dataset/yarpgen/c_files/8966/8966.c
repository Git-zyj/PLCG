/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_7);
    var_17 = (min(var_17, (((71776119061217280 ? (min(((max(var_13, var_5))), var_14)) : -14802)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((min(((11083 ? 14188 : ((min(14188, -11097))))), var_11)))));
                arr_6 [i_0] [i_0 + 1] [i_0 + 1] &= (!(arr_4 [i_0 - 1]));
                var_19 = (arr_4 [i_1]);
                var_20 = ((-(arr_4 [i_0])));
                var_21 = max(14169, 32566);
            }
        }
    }
    #pragma endscop
}
