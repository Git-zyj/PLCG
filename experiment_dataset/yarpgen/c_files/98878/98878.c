/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((13 * (!34359705600)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 |= (((((215 + (!var_11)))) ? 10415236070356014278 : ((min((arr_7 [i_0]), var_4)))));

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_18 = (min(var_18, (((!(arr_8 [i_0 + 2] [i_2] [i_4]))))));
                                var_19 *= var_7;
                            }
                            var_20 = (min((34359705580 / 12), 34359705590));
                        }
                    }
                }
                var_21 += (((34359705563 > (arr_0 [i_0 + 3]))) ? 36356 : (((arr_0 [i_1]) ^ (arr_0 [i_1]))));
                arr_18 [i_1] [i_1] [i_1] = (((arr_13 [i_0] [1]) | ((((arr_9 [i_0 + 3] [8] [i_0 - 2] [i_1]) > -1497620731)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_22 ^= ((((!((0 || (arr_15 [i_6] [i_6] [i_0] [i_5] [i_1] [i_0]))))) ? (arr_9 [i_0] [2] [i_0 + 2] [i_0]) : ((+(((arr_6 [i_0] [i_5] [i_0]) % (arr_12 [i_6] [i_5] [i_5] [i_1] [i_0])))))));
                            var_23 = (arr_11 [i_0] [i_0] [i_1] [i_1] [i_6]);
                        }
                    }
                }
                arr_24 [i_0] [i_1] = ((((~((max(var_15, var_7))))) > 65531));
            }
        }
    }
    var_24 = var_13;
    var_25 -= var_3;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 23;i_8 += 1)
        {
            {
                var_26 &= 0;
                var_27 *= arr_27 [1];
                var_28 &= (((~(arr_28 [14]))));
            }
        }
    }
    #pragma endscop
}
