/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_11 = arr_3 [i_0] [i_2];
                            var_12 -= 926721764564449480;
                        }
                    }
                }
                arr_10 [i_0] = var_10;
                arr_11 [i_0] [i_1] [i_1] = (((((((!(arr_5 [i_0] [i_1]))) ? 3624052331 : (max((arr_4 [10] [i_1] [i_1] [i_0]), var_10))))) ? (((~var_1) ^ (arr_5 [i_0] [10]))) : 190));
                arr_12 [i_0] [i_1] = (((arr_4 [i_0] [i_0] [i_0] [i_1]) ? ((((max(0, 0))) * (arr_7 [i_1]))) : (arr_2 [i_0] [i_1])));
            }
        }
    }
    var_13 = ((-((-26210 ? 386047614 : 1))));
    #pragma endscop
}
