/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = (((var_2 + 9223372036854775807) >> (((~-30867) - 30859))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = min((~var_2), (~var_12));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = min(1, 18446744073709551615);
                    var_22 = var_15;
                }
            }
        }
    }
    #pragma endscop
}
