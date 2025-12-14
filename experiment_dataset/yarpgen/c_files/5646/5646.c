/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((~(var_0 | -12935))) >> (((max(var_7, var_1)) - 4294967237))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((((12913 + 9061139425579200435) ? (max(var_1, 9061139425579200463)) : (!9385604648130351170))) + ((((max(128, var_4))))))))));
                var_15 -= (arr_2 [i_0] [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 = ((-(((!((max(var_10, 12947))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (((max(25818, var_5))) ? (((max((arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_2 [i_0 + 2] [i_0 + 2] [i_2]))))) : (min(var_12, var_9)));
                            var_17 ^= (min(((((arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3]) >= (min(86, 2129975900))))), 25410));
                            var_18 -= var_7;
                        }
                    }
                }
            }
        }
    }
    var_19 = (!var_9);
    #pragma endscop
}
