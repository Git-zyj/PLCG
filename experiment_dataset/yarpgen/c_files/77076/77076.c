/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = 113;
                arr_7 [i_0] [i_0] [i_1] = var_11;
                arr_8 [i_0] = (min(var_1, ((((min(261452505, 102))) ^ (0 * 12217218360252305569)))));
                arr_9 [i_0] [i_0] = (max(((max(227, 1310015292216471752))), (min(3553672042, 16804328489029262354))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 &= (min((max(var_15, (arr_11 [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_2 - 1]))), (min((arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2 + 1]), 16858274108933420121))));
                                var_17 = (max((245 == 26726), (arr_13 [i_4] [i_3] [i_4 + 1] [i_3] [i_3] [i_1 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
