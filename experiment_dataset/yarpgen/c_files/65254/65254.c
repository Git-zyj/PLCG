/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((!(129 <= 4683)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = ((~(~126)));
                var_22 = (min(var_22, (((!(((125 ? 9939 : 55593))))))));
                arr_4 [i_0] [i_1] [i_1] = 255;
                var_23 = (max(var_23, 203));
            }
        }
    }
    var_24 -= var_3;
    var_25 = ((63729 ? 8192 : 65535));
    #pragma endscop
}
