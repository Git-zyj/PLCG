/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = -88;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [0] [i_0] = (min((-74 | -32), ((((((87 ? 1 : 3800219412361194657))) && ((!(arr_8 [i_0] [i_3] [i_3] [i_0]))))))));
                                var_17 = (min((min((arr_4 [i_3]), (min(3800219412361194646, (arr_0 [i_1]))))), (((!((min(21, -1))))))));
                                arr_14 [i_0 + 1] [i_0] [i_0 + 1] = (((-92 ? 104 : 12587)));
                                var_18 = (max((~-3800219412361194657), (arr_12 [i_0 + 1] [i_1 - 1] [i_3 - 2] [i_4 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((~(max((~var_5), (max(var_5, -3800219412361194658))))));
    var_20 = var_12;
    #pragma endscop
}
