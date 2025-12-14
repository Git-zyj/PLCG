/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 -= ((27384 ? (var_2 % 4177920) : ((min((33593 || var_1), (((var_9 + 2147483647) << (27378 - 27378))))))));
                arr_4 [i_1] = ((15 < ((27401 ? -5850829987398172453 : 3868276637))));
            }
        }
    }
    var_14 = (((max(var_6, var_5))));
    var_15 *= (max((max((1360088217 != -27378), 18446744073709551602)), var_1));
    var_16 = (((((((max(var_0, var_4))) ? ((var_12 ? 1924705038 : 4294967293)) : (var_2 / 31)))) || (-27402 != 400051575)));
    #pragma endscop
}
