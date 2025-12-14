/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_10 = ((!(((~(!-84))))));
        var_11 = ((-((~(!95)))));
        arr_2 [i_0] [i_0] = ((-(((!(!var_8))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = ((!(~25202)));
        var_12 = ((!(((~(~25196))))));
        var_13 ^= ((!(((~((~(arr_1 [4] [4]))))))));
        var_14 += ((!((!(!var_0)))));
    }
    var_15 = -var_0;
    var_16 ^= 7289533708131539436;
    #pragma endscop
}
