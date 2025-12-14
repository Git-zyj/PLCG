/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -7301708522713310016;
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_20 ^= ((((-((var_7 ? 8589934464 : 0))))) ? (--8796093022208) : (max(var_12, (((((arr_9 [i_3] [10] [i_3]) + 9223372036854775807)) << (var_1 + 5403527786897667070))))));
                            var_21 = ((var_17 ? -var_5 : ((~(arr_0 [i_0])))));
                        }
                    }
                }
                var_22 = (((((-5350949765121536076 ? -5819834455149565858 : (arr_0 [i_0]))))) ? (arr_8 [i_0] [i_1] [i_1] [i_0]) : (arr_9 [i_1] [i_1] [i_1]));
            }
        }
    }
    #pragma endscop
}
