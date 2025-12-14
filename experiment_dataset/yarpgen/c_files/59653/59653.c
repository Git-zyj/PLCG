/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 += (max((~var_12), ((~((-7041 ? 2544516458 : 17777017449265052802))))));
                    var_17 = (((14790 * 1382014170) % var_0));
                    arr_6 [0] [i_2] [i_0] = (min(((max(-5837, 60359))), (min(-2912953122, ((min(var_9, var_3)))))));
                    var_18 = 62;
                }
            }
        }
    }
    var_19 = (((min((~2912953124), var_4)) << (((max(((max(var_11, 1073741823))), (1382014189 / var_8))) - 1073741778))));
    var_20 = (max(var_20, (var_5 & var_0)));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_21 = ((max(var_2, 12430770068544155840)) << (13942 || var_4));

                            for (int i_7 = 0; i_7 < 20;i_7 += 1)
                            {
                                arr_20 [i_3 - 1] [i_4] [i_4] [i_4] [i_7] = ((-(min(15078021277504980491, 32))));
                                var_22 = ((-1 | (~6015974005165395775)));
                            }
                            for (int i_8 = 1; i_8 < 19;i_8 += 1)
                            {
                                var_23 = -1192325524;
                                var_24 = (min((max((min(var_0, var_3)), (32768 * -13348))), (~9554)));
                            }
                            var_25 *= ((!(21060 | 0)));
                            var_26 = (min((min(var_1, (var_7 < var_15))), (!1382014174)));
                        }
                    }
                }
                var_27 = -215525690;
                arr_24 [i_4] [i_4] = (((~((23264 ? 60649 : var_9)))));
            }
        }
    }
    #pragma endscop
}
