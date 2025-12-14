/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_11 = (-(((var_8 ? 64 : -22354))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 ^= max(((((max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]), var_10))) ? (-2763 * var_9) : ((-977964294 ? (arr_7 [i_0] [i_0]) : (arr_4 [i_2] [i_2]))))), ((-((752518983841133854 ? (arr_1 [i_1] [i_3]) : var_4)))));
                                var_13 = (max((((arr_12 [i_3] [i_3] [i_3] [i_3] [7] [i_3] [5]) > ((max(2763610059, (arr_3 [i_1] [i_2] [i_4])))))), ((((142 >> (-29027 + 29044))) >= (!1802393670)))));
                            }
                        }
                    }
                    var_14 *= max((((arr_1 [i_0] [i_0]) / ((-5791654757768365348 ? 5521679542138832420 : -8324520092013447484)))), ((((((!(arr_9 [i_0] [i_1])))) + (arr_5 [7] [i_1] [i_2])))));
                    var_15 -= (max((max(var_0, (arr_2 [i_0]))), 10742));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_5] [i_5] = (((((~(max((arr_7 [i_5] [i_5]), var_3))))) ? (12148466861794289074 > 9223372036854775807) : (((min(3, 32256))))));
                    var_16 = (((((((((arr_3 [3] [i_1] [i_5]) << (((arr_3 [i_5] [i_1] [6]) - 22728))))) ? var_8 : (min(4619105201239709841, (arr_14 [i_0] [i_1] [i_1] [i_5])))))) ? 8586276936680055745 : (!0)));
                    var_17 = (max(var_17, ((((min(((min(56, (arr_10 [i_0] [i_1] [i_0] [i_0] [i_1])))), (((arr_10 [i_0] [i_0] [i_0] [i_1] [i_1]) / 68))))) / (((arr_4 [i_0] [i_1]) / (arr_4 [i_0] [i_0])))))));
                }
                var_18 = ((((!(7417158619256665733 / 101)))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_19 -= ((~(arr_19 [i_0])));
                            var_20 = ((((max(-44, (min(11, 3092965883))))) / (min(((((arr_20 [i_1] [i_6] [i_7]) - (arr_2 [i_6])))), ((-11940 ? 5547385748606287047 : -7864))))));
                            var_21 = (((((((min(-8776846620472366182, -31822))) ? (!var_4) : var_1))) || ((min((arr_7 [i_6] [6]), (arr_7 [i_6] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    var_22 += -12752;
    #pragma endscop
}
