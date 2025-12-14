/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!498181460);
    var_16 = var_5;
    var_17 = (min(var_17, 3796785835));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((~(~var_11)));
                arr_7 [i_0] [i_1] |= (((!-2102477121) + 10532442171947823240));
            }
        }
    }
    var_18 = (!var_4);
    #pragma endscop
}
