/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, -4865159384379761679));
                            arr_8 [i_0] [i_2] [i_2] [i_3] = (((-1335635241 * 6290335910191394533) / (((-9 ? 1 : 3256698911)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_15 += (((((min((0 < -459587959), 0)))) / 6267486939350050530));
                                var_16 |= (1 | 3);
                                var_17 += (((~-93) + -2012940397));
                                arr_17 [8] [4] [i_4 + 2] [i_5] [i_6] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    arr_27 [i_7] [i_8 - 1] [i_8] [i_7] = 1;
                    var_18 = ((2039297883 > 5318461210405379529) != 14);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_19 *= 10;
                    var_20 += (((max(12156408163518157085, (18446744073709551605 * 0))) > (!4294967287)));
                }
            }
        }
    }
    var_21 = ((-5280619796481818133 ? -12 : 1));
    #pragma endscop
}
