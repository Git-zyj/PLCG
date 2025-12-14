/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = max((arr_0 [i_0]), (max(270871328, 1240597048)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = arr_0 [i_2];
                    var_20 -= arr_1 [i_0];
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_21 = (max(var_21, (((-(max((arr_3 [i_3 - 2] [i_3 - 2] [i_3 + 1]), -1240597048)))))));
                    arr_12 [i_4] [i_4] = ((((((arr_3 [i_0] [i_0] [i_4]) ? 1240597080 : (~1240597048)))) ? ((((((-1240597047 ? -517928715 : (-2147483647 - 1)))) ? (arr_9 [i_3 + 1] [i_3 + 3] [i_4] [i_3 - 1]) : 1790084197))) : (~1629367340)));
                    var_22 = 1237571587;
                    var_23 = 4294967287;
                    var_24 = ((((((879097639 ? 695803883 : (arr_8 [i_0] [i_3])))) || 1422280174)) ? ((((!(arr_5 [i_3 + 4] [i_3 + 4]))))) : (min(1240597074, ((520093696 ? 3224176210 : -648794021)))));
                }
            }
        }
    }
    var_25 = 1240597030;
    var_26 ^= -39631907;
    var_27 = var_1;
    #pragma endscop
}
