/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [13] [13] = (min(var_16, (arr_1 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 = ((~((((arr_7 [i_3] [i_2] [i_1]) || (arr_7 [i_0] [i_2] [i_3]))))));
                            var_18 ^= (((((var_15 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_2] [i_3])))) ? (~5957167356692354954) : ((0 ? 185 : 3109239996))));
                        }
                    }
                }
                arr_10 [i_1] [i_0] = ((-(~2908810675)));
                var_19 = var_0;
            }
        }
    }
    var_20 -= ((1115462421 ? 15710 : 1));
    #pragma endscop
}
