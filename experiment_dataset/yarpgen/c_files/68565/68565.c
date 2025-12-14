/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = -1;
                    arr_7 [i_0] = 18208;
                    var_21 ^= min(var_4, (arr_6 [i_0] [i_0] [11]));
                    var_22 *= ((-18230 ? -18230 : -18233));
                    var_23 += arr_0 [i_0] [i_1];
                }
            }
        }
    }
    var_24 |= (~3980);
    var_25 -= var_10;
    var_26 = ((!(((18229 ? (!-18233) : -18209)))));
    #pragma endscop
}
