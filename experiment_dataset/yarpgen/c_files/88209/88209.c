/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (402811843 | 11380563617750436341);
        var_17 = (max(((((~var_3) > (arr_2 [i_0] [i_0])))), (arr_0 [i_0])));
        arr_4 [i_0] [i_0] = (((((max((arr_2 [i_0] [i_0]), (arr_0 [i_0])))) ? (arr_2 [i_0] [i_0]) : 7066180455959115267)));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_18 = (((((+(max((arr_8 [i_1] [i_1] [5]), var_15))))) ? (((25402 % (arr_11 [i_3] [i_2] [i_3] [i_4])))) : (arr_15 [i_3 - 4] [i_3] [i_3 - 2])));
                        var_19 = (max(var_19, (((((((arr_10 [i_1]) | (arr_10 [i_3 - 4])))) ^ (((arr_10 [i_1]) ? (arr_10 [i_2]) : 7066180455959115262)))))));
                    }
                }
            }
        }
        var_20 *= (-17131 < 11380563617750436345);
    }
    var_21 = (((~-11380563617750436363) ? (((((var_1 ? var_15 : var_1)) >> (20412 - 20411)))) : 11380563617750436363));
    var_22 = var_8;
    #pragma endscop
}
