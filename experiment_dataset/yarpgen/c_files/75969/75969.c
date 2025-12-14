/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((((min((arr_2 [i_0 - 3] [i_0] [i_1]), (arr_2 [i_0 - 3] [i_2] [i_0 - 3])))) ? 255 : (min(((-9202 ? -9206 : 9203)), (((-9222 + 2147483647) << (((arr_5 [i_0 + 2] [i_1] [i_2]) - 29873)))))))))));
                    var_19 = (((((((var_11 ? -9204 : (arr_6 [i_0] [i_0] [i_0])))) ? (max(1177782754, 140737486258176)) : ((((!(arr_4 [i_0 + 3] [i_1 - 1] [i_2]))))))) == (((((18446744073709551615 ? var_13 : (arr_6 [i_0] [2] [i_0]))) + (((min((arr_7 [i_2] [i_1 - 2] [i_0]), (arr_6 [i_0] [i_0] [i_0]))))))))));
                }
            }
        }
    }
    var_20 = ((((min((4901877728363832866 && var_0), ((-9222 ? var_0 : 10471))))) / ((-(max(-9202, var_11))))));
    #pragma endscop
}
