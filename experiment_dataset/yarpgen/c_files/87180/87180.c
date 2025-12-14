/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -26;
    var_14 = (min(1058533572, (max((max(107, 2980209173)), (2557687055903104494 && -2371)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = ((51554 ? ((((!(arr_2 [i_0]))))) : (((!2030036246) & (arr_0 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, (max((min(((min(var_2, var_9))), 46944)), (((var_10 == ((((arr_7 [i_2] [i_1]) ? -72 : (arr_9 [i_3 + 2])))))))))));
                            var_17 = (max(var_17, ((((((2557687055903104494 ? -5546651090350370443 : 2557687055903104502))) ? (arr_9 [i_3 + 3]) : var_11)))));

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 14;i_4 += 1)
                            {
                                var_18 = ((664789945 ? (arr_14 [i_3] [i_3 - 2] [i_3] [i_3 - 1] [8]) : (!10234)));
                                var_19 = 11462585724869685556;
                                arr_16 [i_3] [i_4 + 2] = 3236433719;
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = (((arr_5 [i_3 + 2] [16] [i_4]) ? (arr_0 [i_3 + 1]) : (arr_15 [i_0] [i_1] [i_3] [i_1] [i_4])));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_20 = (((max(6984158348839866051, (min(0, 13236800793875146319)))) | ((min((arr_8 [i_3 + 1] [14] [i_3 - 2] [0]), (arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 3]))))));
                                arr_22 [i_3] [i_3] = ((((arr_8 [i_0] [i_0] [i_3 + 2] [i_5]) + (arr_8 [i_0] [i_1] [i_1] [i_3]))));
                            }
                            var_21 = (max(var_21, var_5));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
