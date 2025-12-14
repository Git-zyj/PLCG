/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = -5980655617393370105;
                var_12 = var_1;
                arr_5 [i_0] [i_0] [i_0] = min(4294967295, (arr_0 [i_1] [i_1 - 3]));
            }
        }
    }
    var_13 = (var_9 ? ((((var_2 ? var_6 : var_4)) % var_6)) : ((~(7795402019241876925 - 4600089737506239611))));
    var_14 = var_8;
    #pragma endscop
}
