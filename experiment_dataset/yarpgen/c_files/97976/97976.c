/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((+(((~32704) ? ((max(-3952, 32817))) : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_14;
                var_17 ^= (((arr_2 [10]) ? (((arr_3 [i_0] [i_0] [i_0]) ? (((arr_3 [i_1] [i_1] [i_1]) % 3932160)) : (((2147483647 ? 21084 : var_9))))) : ((max(-25, 32809)))));
                var_18 = (arr_1 [i_1]);
            }
        }
    }
    #pragma endscop
}
