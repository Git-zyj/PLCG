/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((+-8580), (((((var_12 ? var_1 : 14940))) ? (((min(var_5, 63706)))) : (max(712611286835706148, var_11))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 &= ((((-(arr_2 [i_0] [i_0 + 3]))) - (((max(16926, 14940))))));
        var_17 = (arr_1 [i_0]);
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (--2538483627264615639);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    {
                        var_18 ^= (arr_11 [4] [i_2] [i_1] [i_1]);
                        arr_13 [8] [i_2] [i_2] [16] [8] &= (((((((-23217 / (arr_7 [i_1] [i_1] [i_3])))) ? (((arr_5 [16]) / (arr_7 [i_1] [i_2] [i_1]))) : (((2765861324798633188 ? 4 : (arr_2 [i_2] [i_3])))))) % ((((((21792 ? var_2 : 38648))) ? 34 : ((max(-103, (arr_1 [i_4])))))))));
                    }
                }
            }
        }
        arr_14 [i_1] = ((21792 ? -253 : ((((890536109 - (arr_2 [i_1] [i_1 - 3]))) << (38247 - 38247)))));
        var_19 = (((max((arr_10 [i_1] [i_1]), -12986))));
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = ((((~(arr_16 [i_5 - 1]))) >= ((-117 ? (arr_16 [i_5 - 1]) : (arr_16 [i_5 + 2])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    arr_25 [i_7 - 1] [i_5] [i_7] = ((((!((((arr_17 [i_6]) ^ 37))))) ? ((12638819124737646047 ? ((13140 ? var_2 : var_6)) : ((var_8 ? var_2 : -8625413026057408282)))) : (((((var_5 ? (arr_21 [i_5] [i_6] [i_6]) : 38267))) ? (max((arr_23 [i_7] [i_6] [i_7] [17]), (arr_20 [i_5] [i_5]))) : (((-21792 % (arr_19 [i_5]))))))));
                    arr_26 [i_5] [i_6] [i_7] = ((var_1 | (max((var_7 ^ var_2), -var_11))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_29 [i_8] = ((-29 ? ((((min((arr_20 [1] [i_8]), 2880994935083769646))) ? -1846666044232580823 : 50596)) : ((min(0, -56565)))));
        arr_30 [i_8] = ((-(arr_5 [i_8])));
    }
    #pragma endscop
}
