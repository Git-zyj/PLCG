/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (-117 ^ 31);
                    var_15 &= ((((((arr_2 [i_2 + 1] [i_2] [i_2]) ? -3963 : ((512 ? var_4 : -2))))) ? (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) : (((((arr_5 [i_2 + 1] [i_1] [1] [i_0 + 1]) ? (arr_7 [6]) : (arr_2 [15] [i_1] [i_2])))))));
                    var_16 = (((arr_5 [i_2] [i_2 + 1] [i_1 + 1] [i_0 - 2]) / (((arr_5 [i_2] [i_2 + 1] [i_1 + 1] [i_0 - 2]) ? (arr_5 [0] [i_2 + 1] [i_1 + 1] [i_0 - 2]) : (arr_5 [i_2] [i_2 + 1] [i_1 + 1] [i_0 - 2])))));
                    var_17 = var_2;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_16 [i_5] [i_5] [i_5] = var_3;
                    arr_17 [i_3] [i_3] [i_3] = 12102940864284130727;
                }
            }
        }
    }
    var_18 -= ((35182224605184 ? 51 : -120));
    #pragma endscop
}
