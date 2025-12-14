/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = ((((max((((var_1 ? 1251053066 : -1319337923))), (min(-4115525293125561263, var_11))))) ? (((arr_9 [i_1] [i_2] [i_3] [i_4 + 1]) * (-1363001208 | var_5))) : ((max(-31857, (arr_9 [i_4 + 2] [i_3 - 1] [i_0 + 1] [i_0]))))));
                                var_15 = (((((((arr_7 [i_0] [i_1] [i_1]) >= var_11)))) ? ((+((((arr_5 [i_0] [i_0]) < 0))))) : var_6));
                                var_16 = (((((~((var_8 ? var_9 : 0))))) ? 1898961192 : 1));
                                var_17 = (arr_11 [i_0 + 3] [i_0 + 3] [i_4] [i_3]);
                                var_18 = (((max(-var_13, -3951972472694561507)) == (((~(((arr_4 [i_1] [1]) | var_6)))))));
                            }
                        }
                    }
                }
                var_19 = (max(var_19, (((0 || ((max((max(48776, 11243912283052578152)), ((1607910014803974956 ? 14783031372229520435 : 181))))))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1] [i_5] [i_1] = (min(837105479, (((!var_1) + (61 >= var_8)))));
                            arr_19 [i_0] [8] [i_1] [i_0 + 1] = (max(15, (min((84 || 3951972472694561499), ((1 ? -102 : 1))))));
                        }
                    }
                }
                var_20 = ((((((arr_11 [i_0] [i_0] [i_0] [9]) ^ var_1))) ? (((((max((arr_5 [i_0] [i_1]), (arr_9 [3] [i_1] [3] [i_0 + 2])))) ? (max(var_8, var_7)) : ((7202831790656973463 ? 1 : 24926))))) : var_6));
            }
        }
    }
    var_21 *= var_0;
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_22 |= ((8223 + (((1319337923 < 3794720612) ? -var_13 : 22085))));
                            arr_31 [i_7] [i_7] [i_7 - 1] [i_7 - 1] = (((((-3964743362 ? var_8 : (-1319337923 <= 59)))) ? ((1 ? 1 : 0)) : ((max((arr_23 [i_8]), ((var_6 ? 43082 : var_2)))))));
                            arr_32 [i_7] [i_8] [i_8] [i_9] [i_9] [i_9] |= (((arr_28 [i_8] [i_9] [0]) ? (((arr_25 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) - 7835254418894962087)) : (min(((max((arr_23 [6]), var_8))), ((1 ? 29 : var_11))))));
                        }
                    }
                }
                var_23 *= (!(max((var_12 >= 0), 1)));
                var_24 = 3951972472694561507;
                var_25 &= (min(11243912283052578152, ((min(var_12, (1 > 1))))));
            }
        }
    }
    var_26 = (min(var_4, (-3951972472694561508 + 3968406499)));
    #pragma endscop
}
