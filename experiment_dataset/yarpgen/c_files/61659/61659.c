/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_9 [1] [i_1] [i_3] [i_3 - 1] = (((((~(arr_7 [i_0] [1] [i_0] [1] [i_0] [i_0])))) ? ((((var_1 << (((arr_8 [i_0] [i_1] [i_2] [i_1]) - 49364)))) | (var_7 && 0))) : (((!((((arr_7 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1]) ? 173 : (arr_1 [i_1])))))))));
                            var_11 = (max(254, (arr_4 [i_0] [i_1] [i_2] [i_3])));
                        }
                    }
                }
                arr_10 [6] = ((((arr_1 [i_1 + 2]) * 18446744073709551615)));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [6] [6] [i_5] = (min(-196, (arr_15 [i_0] [i_1] [i_0])));
                            var_12 = ((((((-9223372036854775807 - 1) & ((((arr_12 [i_0] [5] [i_0] [i_0]) ? var_4 : (arr_1 [i_4]))))))) ? var_9 : 224));
                        }
                    }
                }
            }
        }
    }
    var_13 = var_0;
    var_14 = var_4;
    var_15 = var_0;
    #pragma endscop
}
