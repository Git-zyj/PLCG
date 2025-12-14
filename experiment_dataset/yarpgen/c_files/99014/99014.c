/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = (min(((((max(3775127374, var_10))) | (3775127374 ^ 18446744073709551604))), var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (-(3775127373 / var_10));
                    var_16 += (((-var_1 ? ((3775127348 << (1156592499 - 1156592489))) : var_5)) - (min(519839922, var_1)));
                    var_17 = (((var_10 <= (var_0 + 17824039959644315244))) ? (min(16, 13745702501675777497)) : (arr_0 [i_0]));
                }
            }
        }
    }
    var_18 = (min(var_18, (min(((((max(var_11, var_2))) ? ((max(3964358710, 16))) : (min(var_4, var_6)))), (((var_7 ? var_10 : (4294967294 != 12872265804651932605))))))));
    #pragma endscop
}
