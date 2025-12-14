/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((1 * 21435) ? (1 || 50627) : 15697702495575690878);
        var_17 = (max(var_17, ((-961864092 ? (min(1, 1125891316908032)) : ((-111 ? 2403442994 : 18446744073709551615))))));
        var_18 -= ((!((((((-4012 ? 65523 : 15697702495575690872))) ? 21435 : 39596)))));
        arr_3 [i_0] = (min((~0), 65531));
        arr_4 [i_0] = ((~0) | 3951711087158582201);
    }
    var_19 = min(var_5, var_10);
    #pragma endscop
}
