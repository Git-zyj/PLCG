/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((-(9512881266246120198 || 6812))) + (((min(8575988270325390694, 8388607))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((((((-2447671875165676307 > (min(var_6, var_6))))) > ((max((arr_7 [i_1 - 1] [i_0]), (arr_7 [i_1 + 1] [i_0])))))))));
                    arr_8 [i_2] [i_0] [6] [i_2] &= (((((!var_13) & ((18446744073709551612 ? var_2 : 18446744073701162991)))) < (arr_5 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
