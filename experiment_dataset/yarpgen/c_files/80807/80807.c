/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((1 ? (min(-29880, ((29897 ? 3094590001 : -29864)))) : 3094590001));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_1] [i_2] [i_2] = ((~(~var_6)));
            var_20 = ((((arr_8 [i_1] [i_2] [i_1]) ? -31369 : var_11)));
        }
    }
    var_21 = ((~(~var_11)));
    var_22 = 3094590001;
    var_23 = -var_18;
    #pragma endscop
}
