/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (max(-22196, 1));
                var_21 = arr_6 [i_0];
                arr_7 [3] = (((((min(1, var_1))) >= var_2)));
            }
        }
    }
    var_22 = (((((-8711293624249068354 <= (min(var_7, 137438953471)))))) % -8711293624249068354);
    var_23 = ((max(609828101, 18446744073709551615)));
    var_24 = -var_17;
    #pragma endscop
}
