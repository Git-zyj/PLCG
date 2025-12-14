/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 += ((-((var_6 ? var_1 : -1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (max((arr_4 [i_0] [i_1]), ((((min(21, 184))) ? ((59367 ? var_8 : (arr_1 [i_0]))) : 18))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 -= (((arr_8 [i_4] [i_4] [i_4 - 1] [i_0 + 1]) ? (max((((arr_3 [i_1] [i_3]) | var_1)), (((arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] [i_4 - 3]) ? var_8 : 1242812335)))) : -var_7));
                                var_14 = (min(var_14, ((~((1242812338 ? 6 : 17635169815530563824))))));
                            }
                        }
                    }
                }
                var_15 ^= ((((((((2777354071 ? 184 : 0))) ? (((1108268423373679190 ? 5 : var_6))) : var_1))) ? (((+((-109 ? (arr_7 [i_0] [i_0] [i_1] [i_1]) : (arr_7 [i_0] [i_0] [i_0] [i_0])))))) : ((((max(-1698252444, (arr_6 [i_0] [i_0] [i_0])))) ? var_1 : ((((arr_11 [i_0] [i_1] [i_0] [i_0 + 1] [i_0 - 1] [i_1] [i_0 - 1]) ? -1698252444 : var_7)))))));
            }
        }
    }
    #pragma endscop
}
