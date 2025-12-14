/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_5 ? var_5 : ((55768 ? var_1 : var_3))))) / var_2));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (((max(((-7059045621575282475 ? 5386783443367146995 : 470319587)), ((((-9223372036854775807 - 1) ? 504 : 368711325)))))) ? (((-220 ? 84 : 3686484))) : (arr_1 [i_0] [i_0]));
        arr_2 [i_0] = ((((((((-127 - 1) && 17293214567470201866)) ? (((arr_0 [i_0]) ? 0 : 47862)) : ((102 ? var_8 : 248))))) || 4294967295));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_12 = arr_1 [0] [i_1];

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_8 [i_1] = (-127 - 1);
            arr_9 [i_1] [i_1] [i_1] = ((~(min((arr_5 [i_2] [i_1]), (64 | var_6)))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
            {
                arr_15 [i_4 + 3] [i_1] [9] = 27;
                var_13 |= (!3671800098);
                var_14 = -238;
            }
            for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
            {
                var_15 = (-15 ? 230 : 133101397);
                var_16 = (max(var_16, ((((arr_13 [i_3] [i_5 - 3] [i_5 + 3] [i_5 - 2]) / (arr_13 [13] [i_5 - 1] [i_5 - 3] [i_5 - 1]))))));
                var_17 = (((arr_19 [i_5 + 2] [i_5 + 3] [i_5 + 2] [i_5 + 2]) ? (arr_13 [i_5] [i_3] [i_3] [i_1]) : 0));
            }
            for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
            {
                var_18 = (max(var_18, (((~(arr_7 [i_6 + 1] [i_3]))))));
                arr_24 [i_3] [i_1] = (1 && 0);
            }
            var_19 = (+-365);
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_20 = (!(arr_26 [i_7]));
        var_21 = (max(var_21, ((((((var_8 ? var_4 : 3))) >= ((-0 ? (((var_6 ? -1 : var_8))) : 230)))))));
        var_22 = ((((max(var_0, var_0)))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            {
                var_23 = ((-67635034 ? ((((arr_4 [i_8]) / (arr_4 [i_9])))) : (((arr_26 [i_9]) ? ((max(1204426781, 1))) : ((-8 ? 1 : var_4))))));
                var_24 = var_9;
            }
        }
    }
    #pragma endscop
}
