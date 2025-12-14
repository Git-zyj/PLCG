/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_15 *= (min(6866342142465916941, -300705811));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_16 = (!((min(var_6, var_4))));
            arr_4 [i_0] [13] = ((-(arr_0 [14])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] [i_0] = (!var_5);
            arr_8 [i_2] = var_7;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_17 = (((~5059) ? (arr_10 [i_3]) : ((((arr_2 [i_3] [i_0]) ? 65532 : var_12)))));
            var_18 = (((!var_2) ? -6 : (arr_6 [i_3] [i_3])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_19 += var_4;
                            var_20 = (!60461);
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_21 = -17233588570674930727;
            arr_20 [i_0] = ((((min(var_5, (min(var_10, var_1))))) ? (arr_5 [i_0]) : (arr_10 [i_0])));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 20;i_10 += 1)
                {
                    {
                        var_22 = ((var_4 ? -1 : 9223372036854775807));
                        var_23 |= var_10;
                        var_24 = var_2;
                        arr_29 [i_0] [i_8] [i_9] = -63055;
                    }
                }
            }
            arr_30 [i_8] = ((var_1 ? var_10 : (arr_1 [i_0] [i_8])));
        }
        var_25 &= ((!(!-7)));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
    {
        arr_33 [i_11] = var_10;
        var_26 = (min((((!((((-2147483647 - 1) ? (arr_0 [i_11]) : var_11)))))), var_12));
        arr_34 [i_11] = (min(var_1, ((min((((165 ? (arr_2 [i_11] [i_11]) : (arr_25 [i_11] [i_11] [i_11])))), (arr_19 [i_11] [i_11] [i_11]))))));
        var_27 = var_5;
    }
    var_28 = ((58652 ? 254 : -1495793799));
    #pragma endscop
}
