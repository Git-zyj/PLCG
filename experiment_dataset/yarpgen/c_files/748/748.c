/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = (((((arr_15 [i_2] [i_4] [i_3 + 1] [i_2]) | (arr_9 [i_3 + 2] [i_3 - 1] [i_3 + 3] [i_3 + 2])))) ? (max(((1509690952 ? (arr_14 [i_0] [i_2]) : 744572199)), 1103239555)) : (arr_6 [i_0] [2] [2]));
                                var_18 -= max((((!(arr_8 [i_3 - 1] [8] [i_2])))), (min((min(-481233895, 1980417146)), (arr_9 [i_3] [i_3 - 1] [i_3 - 1] [i_2]))));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = (((min((1980417129 <= 841248300), -1385951870))) ? ((-1385951870 | (max(-588215206, (arr_6 [i_0] [i_2] [i_3]))))) : (min((((-2147483647 - 1) % -10)), ((1631010233 ? (arr_5 [i_1] [i_3] [i_4]) : -549466779)))));
                            }
                        }
                    }
                    arr_17 [i_2] = min((((arr_14 [i_2] [i_2]) ? (arr_14 [i_2] [i_2]) : (-2147483647 - 1))), (arr_14 [i_2] [i_2]));
                    var_19 = (+(((((1631010241 ? (arr_9 [i_2] [i_2] [i_1] [7]) : 1631010238))) ? (min(2147483647, -8192)) : ((204717698 ? 636855291 : 594199535)))));
                    var_20 = ((!((((((~(arr_3 [i_0])))) ? (min(1610612736, 2036254340)) : (arr_11 [i_2] [i_1]))))));
                    var_21 = (((!(arr_11 [0] [i_1]))));
                }
            }
        }
    }
    var_22 &= -1980417136;
    #pragma endscop
}
