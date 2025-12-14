/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = (((((+((var_0 ? (arr_0 [i_0]) : 0))))) ? (((var_4 ? 136 : ((1 ? -3664 : 9223372036854775805))))) : (((arr_0 [i_0]) | 7))));
        arr_4 [i_0] [i_0] = -18;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                arr_12 [i_0] [i_0] = (max(26, -1));
                arr_13 [i_0] [i_1] [i_1] [i_0] = ((17665659666312663743 < (arr_1 [i_0] [i_0])));
                arr_14 [i_0] [i_1] [i_1] [i_1] = ((~((-35 ? ((((arr_8 [i_0] [i_1]) ? var_11 : var_1))) : (((arr_10 [i_0] [24] [1] [24]) ? (arr_0 [i_1]) : var_2))))));
            }
            var_16 = var_2;
            arr_15 [i_0] = ((var_3 < ((var_3 ? (((var_1 || (arr_6 [i_0] [i_1])))) : (arr_6 [i_0] [i_0])))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_17 *= (!-31);
                        var_18 = (min(var_18, ((max(17665659666312663743, 0)))));
                        var_19 = (((-22614 <= -27) ? (arr_10 [i_0] [i_1] [i_3] [20]) : (((-31 > 0) ? (var_5 * var_14) : 9))));
                    }
                }
            }
            var_20 &= (((((max(1671093576, (arr_9 [i_0] [i_1] [i_1] [15]))) ? (((arr_7 [i_0] [i_1]) ? (arr_23 [22]) : -31)) : (min(4438155185693371765, -2497776947994356621))))));
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        var_21 = ((!(arr_16 [i_5])));

        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            var_22 = ((~(arr_11 [i_6 + 1] [17] [i_6 + 1] [i_6])));
            arr_30 [i_5] [i_6 + 2] = (((var_2 < 22603) != var_4));
            var_23 *= ((((28 ? -26 : 25)) * (var_10 > var_13)));
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_24 = (((arr_5 [i_7] [16]) ? ((-1 ? 12675954752200009690 : (-127 - 1))) : (~var_12)));
            arr_34 [i_7] [12] [i_7] = var_2;
            var_25 = (2000634795 >> (14825489134607774288 - 14825489134607774267));
            var_26 = ((5770789321509541923 ? 14825489134607774288 : -35));
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
    {
        arr_39 [i_8] = (((((126 ? 27 : -10))) ? (min((arr_10 [i_8] [i_8] [i_8] [i_8]), (arr_7 [i_8] [i_8]))) : (((!(arr_7 [i_8] [i_8]))))));
        var_27 = ((((((arr_16 [i_8]) ? (arr_16 [i_8]) : 10741129786965468681))) ? (((-16 ? (-79 | 31) : (((!(arr_25 [i_8]))))))) : (((((arr_29 [i_8] [i_8]) || 2855375433)) ? 7304016747070962326 : (arr_37 [23])))));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        var_28 = (max(var_28, ((min((max((arr_35 [i_9] [i_9]), (min((arr_41 [3] [i_9]), (arr_7 [i_9] [i_9]))))), -720688185)))));
        arr_44 [i_9] [i_9] = ((((((((arr_11 [i_9] [i_9] [i_9] [i_9]) ? 127 : 7705614286744082935))) || -var_0)) ? ((((arr_42 [i_9] [i_9]) ^ var_0))) : (max((max(793028742, (arr_41 [i_9] [i_9]))), (~var_9)))));
    }
    #pragma endscop
}
