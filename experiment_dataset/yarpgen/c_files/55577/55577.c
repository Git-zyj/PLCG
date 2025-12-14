/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_11 ? -9985 : 14202498099345958296);
    var_19 += var_13;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        var_20 = (((!(arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (arr_2 [14])));
                    arr_10 [i_0] = max((arr_9 [i_0]), (((((var_14 ? var_0 : -124))) ? ((1 ? (arr_6 [11] [i_1] [i_2]) : (arr_4 [i_0]))) : (arr_4 [i_0]))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_22 &= ((-4244245974363593320 * (((min((arr_6 [i_3] [i_3] [i_3]), -126)) * var_15))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 14;i_5 += 1)
            {
                {
                    arr_21 [i_3] [i_5] = ((((min(98, 117))) || (arr_18 [i_5 - 1] [i_4] [9] [9])));
                    arr_22 [i_3] [i_4] [i_3] [i_3] |= (arr_20 [i_5 + 2] [i_5 + 1] [i_5 + 1]);
                    arr_23 [i_3] [i_3] [i_3] [i_5 - 3] = var_4;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_28 [i_6] = (arr_17 [i_6]);
        arr_29 [i_6] = var_3;
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_23 ^= (arr_18 [i_8] [i_8] [i_8] [0]);
            var_24 = (max(var_24, (((((((arr_11 [i_7]) ? (arr_11 [i_8]) : (arr_11 [i_8])))) ? ((((arr_31 [i_7]) ? var_2 : var_10))) : (((((var_6 ? var_17 : (arr_31 [i_7])))) ? var_14 : ((var_5 << (((var_11 + 673788503) - 20)))))))))));
            var_25 = (min(var_4, 451993438809069149));
        }
        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            var_26 = (min(var_26, var_1));
            arr_37 [i_7] [i_9] = ((((248302332 / 23616) / ((var_8 ? 51 : -127)))));
            var_27 = var_17;
            var_28 = (var_0 && var_8);
        }
        arr_38 [i_7] = (arr_20 [i_7] [i_7] [i_7]);
        var_29 = ((-((-523005082 ? -263361898 : 10242122375267761572))));
        /* LoopNest 2 */
        for (int i_10 = 4; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    arr_44 [i_7] [i_10] [i_7] = 53339;
                    var_30 = (min(var_30, ((var_2 ? ((var_16 % ((-43 ? -126 : var_3)))) : (((10720904316644508253 ? (((arr_18 [i_7] [i_7] [i_10] [i_11]) ? 200245604 : (arr_13 [i_11]))) : (((max((arr_33 [i_10]), 32)))))))))));
                    arr_45 [i_10] [i_10] [i_10] [i_10] |= (arr_19 [4]);
                    var_31 += ((-(arr_9 [i_10])));
                }
            }
        }
        var_32 = ((!(((arr_30 [i_7]) >= var_11))));
    }
    #pragma endscop
}
