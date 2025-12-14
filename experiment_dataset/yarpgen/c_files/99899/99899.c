/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_4;
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((var_10 ? (!var_4) : (((var_5 / var_3) ? var_10 : ((max((arr_2 [i_0] [i_0] [i_1]), var_0)))))));
                arr_5 [i_0] = (max(((min(1, ((144115188075724800 ? -22435 : 13975))))), (arr_1 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = (max(((-(arr_10 [i_3] [i_3 + 1] [i_3 + 1] [i_3]))), ((-((max(var_3, var_7)))))));
                            var_15 -= (((((17592186044416 ? var_0 : ((var_0 ? 27121 : 1855769492132116497))))) ? (arr_12 [i_3] [4] [i_2] [i_1] [4] [i_0]) : ((var_5 ? var_8 : (((!(arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2]))))))));
                            var_16 = ((((~(arr_0 [i_0])))) == (max(((254 ? var_5 : (arr_8 [10] [i_1] [i_2] [i_2]))), (max(var_0, var_11)))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_1, ((((((var_1 ? var_9 : 0))) != ((var_0 ? -7 : -2251181116120692355)))))));
    var_18 = (max(-32750, (((~var_8) ? (~var_1) : var_10))));
    #pragma endscop
}
