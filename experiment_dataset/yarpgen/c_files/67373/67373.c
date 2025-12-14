/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((+(((arr_0 [i_0]) ? ((0 ^ (arr_2 [i_0] [i_0]))) : (min(-2096882508921472147, (arr_2 [i_0] [i_0])))))));
        var_19 = (((2729767291439204298 == 7275943108100422707) & ((-2096882508921472147 / (arr_0 [i_0])))));
        var_20 = ((((arr_3 [i_0] [i_0]) && (arr_3 [i_0] [i_0]))) && (!2729767291439204298));
    }
    var_21 = ((((((min(var_3, var_9))) - var_2))) + var_0);
    #pragma endscop
}
