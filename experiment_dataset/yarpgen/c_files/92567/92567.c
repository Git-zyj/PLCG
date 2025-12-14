/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_6 / -99);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_0] = (arr_2 [i_0] [i_1]);
            arr_5 [i_0] [i_1] = ((92 > (arr_0 [i_0])));
            arr_6 [i_0 - 1] [i_0 + 4] = 8219027474745041863;
        }
        var_14 &= (!var_0);
    }
    #pragma endscop
}
