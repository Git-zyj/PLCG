/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_20 = ((2147483647 ? 2147483644 : 19881));
            var_21 = ((1 ? ((((arr_0 [1]) && 740960443))) : ((~(arr_4 [i_1] [18] [i_1])))));
        }
        arr_5 [i_0] = (((4193280 | -1265776505) | (((((10413987252127683256 ? (arr_1 [5]) : 19881))) ? (((4294967285 ? (arr_3 [i_0]) : 1))) : 10669296953636755632))));
        var_22 = (max(var_22, (arr_3 [i_0])));
    }
    var_23 = (max(((((max(var_19, 0))) ? -2147483644 : ((52 ? 0 : 109)))), ((max((-2147483647 > -740960443), 2147483647)))));
    var_24 ^= var_0;
    #pragma endscop
}
