/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((max(var_7, ((((((arr_0 [i_1]) * 77))) ? (((arr_1 [i_1]) ? var_1 : (arr_3 [10] [10] [i_2 + 1]))) : ((((arr_3 [i_0] [6] [i_0]) ? var_14 : (arr_6 [i_0] [i_0] [i_1] [12])))))))))));
                    var_17 = (min(var_17, 234881024));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_18 ^= (((((arr_14 [i_3]) ^ (arr_14 [i_3])))) ? 51 : (arr_14 [i_3]));
                var_19 = 8446;
            }
        }
    }
    #pragma endscop
}
