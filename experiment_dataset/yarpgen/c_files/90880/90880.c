/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (!var_10);
    var_12 += ((!((!(((var_2 ? var_3 : 93)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        arr_4 [i_0] = ((!(((-(arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = (!var_0);
        var_13 -= (((~var_4) ? 5619 : (((!(~0))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_16 [i_3] = ((-((~(arr_9 [i_4 + 2] [i_3] [i_3 - 1])))));
                        arr_17 [i_1] |= (!41);
                        arr_18 [i_1] [4] [i_1] [17] [i_3] [i_4] = (!13404004499851026637);
                        arr_19 [i_1] [i_2] [i_3] [i_4] = -22667;
                    }
                }
            }
        }
    }
    #pragma endscop
}
