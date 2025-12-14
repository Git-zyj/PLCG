/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = 6545717378151367668;
                arr_7 [2] [2] [2] = 37;
                arr_8 [i_0] [i_0] = 11675798437517444030;
                arr_9 [i_0] [i_0] = 0;
            }
        }
    }
    var_18 = 11675798437517444032;
    var_19 = 6770945636192107584;
    #pragma endscop
}
