/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = 12372087072070587385;
                var_11 = ((min((129 / 16000135428886303627), (~6744841257174332254))));
                var_12 = (!16000135428886303627);
                var_13 *= (251 ? 2446608644823247995 : 23333);
                arr_4 [i_1] |= (~128);
            }
        }
    }
    var_14 = var_5;
    #pragma endscop
}
