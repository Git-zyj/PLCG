/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((((((100851947 | (arr_4 [i_0] [i_2])))) ? 1073741823 : 613014922)))));
                                var_15 = ((((((arr_1 [i_0] [i_0]) >= (99 * 127)))) | (~1023)));
                            }
                        }
                    }
                    var_16 = (arr_10 [i_2]);
                    var_17 = (max((max(1, (arr_2 [i_2]))), (3977138270 != 1654997612)));
                    arr_11 [i_0] [i_1] = 4294705152;
                    var_18 = (((((max((arr_7 [i_0] [i_1] [i_2] [i_0]), 1437975550)) * (((max((arr_6 [16] [i_1] [16]), (arr_5 [i_0] [i_1] [i_2] [i_0]))))))) >> (((max((arr_8 [10] [i_0] [i_1] [i_2]), (arr_8 [i_0] [i_1] [i_2] [i_0]))) + 3657610655159051167))));
                }
            }
        }
    }
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                arr_17 [i_6] = 244;
                var_20 = ((32640 ? 32640 : 12288));
            }
        }
    }
    #pragma endscop
}
