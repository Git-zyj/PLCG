/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((((var_0 <= 103) | (((var_6 + 9223372036854775807) >> 1)))) ^ (((-5725430488690034926 | var_3) | ((5725430488690034940 ? -5725430488690034910 : var_0))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_12 += (((0 ? 5725430488690034941 : (arr_2 [i_0] [i_0]))));
        var_13 *= 1478112645542347859;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_14 *= ((1723064681 ? (max((arr_1 [i_1] [i_1]), -5725430488690034915)) : ((((arr_3 [i_1]) ? var_8 : (3301173105199017245 || 83067942161183762))))));
        arr_7 [i_1] &= (max((!var_6), (((((var_3 ? 5725430488690034926 : 0))) ? 1641194956074141633 : ((238 ? (arr_0 [i_1]) : 1))))));
        var_15 = ((((max((arr_0 [i_1]), var_9))) ? (~11051496860397263763) : (~-1032607890)));
        var_16 &= ((((-(arr_4 [i_1]))) - (var_9 != 16281894109660851010)));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_17 *= (!((min(var_2, ((var_9 ? 255 : -9))))));
            var_18 = (min(var_18, (((13 ? (var_3 * 220) : (1 - var_4))))));
        }
        var_19 = ((~((200 >> (!1)))));
        var_20 = (min(var_20, (~52)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((var_7 ? (11034666908399067509 > 1) : (arr_1 [i_4] [i_4]))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_22 += (arr_26 [i_4] [i_5] [i_6] [i_4] [i_8]);
                                var_23 -= (((var_0 | -1935966528) ^ (arr_4 [i_5])));
                            }
                        }
                    }
                    var_24 *= 3581583730;
                    var_25 = (max(var_25, (var_0 <= 547414966)));
                    var_26 = (max(var_26, 1596017852806439507));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_27 ^= ((6937870551861343590 ? 35 : 0));
                                arr_31 [i_5] [i_5 + 1] [i_6] [i_9] [i_5] = (((arr_21 [i_5] [i_5 - 1] [11] [i_5]) ? (arr_21 [i_5] [i_5 - 1] [i_5] [i_5]) : 65529));
                            }
                        }
                    }
                }
            }
        }
        var_28 = (min(var_28, (((var_4 * (arr_15 [i_4]))))));
    }
    #pragma endscop
}
