/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min(-var_9, 0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = ((!((min((arr_8 [i_0] [i_1] [i_2 + 1]), 3802686319323205877)))));

                    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_16 = var_12;
                            arr_15 [18] [14] [i_2] [i_2] [i_2] [18] [1] |= (min(((var_4 ? (((arr_5 [i_0]) ? var_4 : 1128563137)) : (-2147483647 - 1))), (max((arr_11 [7] [1] [i_0] [i_0] [i_0] [1]), ((2147483647 ? 1 : 3166404159))))));
                            var_17 += ((((max((2147483647 || 1), (max(472187072, (-2147483647 - 1)))))) || (!11055)));
                            arr_16 [i_0] = (((((((max(var_12, (arr_10 [i_0] [i_1] [i_4] [i_3] [i_0])))) ? (arr_0 [1] [i_0]) : (arr_8 [i_0] [i_1] [i_4])))) ? ((((((2543818653 ? 3676225503385636403 : 0)) <= (((4294967295 ? 1355933890 : var_13))))))) : ((-1083296650 ? (((1 | (arr_12 [20] [i_1] [i_2] [i_3] [i_4])))) : -87))));
                            var_18 &= 1717749774;
                        }
                        var_19 = ((-((((var_12 ? var_10 : var_12)) | (!-7105)))));
                    }
                    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_20 = var_5;
                        var_21 |= (((((var_11 & (!0)))) ? 127 : (((((14 / (-2147483647 - 1)))) ? (arr_7 [i_0] [i_1] [i_1]) : 0))));
                        var_22 |= -var_4;
                        var_23 = ((max((!var_5), (max(var_2, (arr_10 [i_0] [i_2 + 1] [i_2 + 1] [9] [i_0]))))) < ((((min((arr_11 [7] [7] [i_1] [i_2] [i_5] [i_5]), 417))) ? ((var_12 ? (arr_10 [i_0] [i_1] [i_5] [i_5 + 1] [i_0]) : var_12)) : 65535)));
                        arr_19 [i_0] [1] [i_2] [i_2] [i_0] [i_0] = (((!(-12244 / 9223372036854775807))));
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_6 - 1] [i_2] &= 1;
                        arr_23 [i_0] [i_1] [15] [i_6] = ((-7777165546819935472 ? 0 : 0));
                    }
                    var_24 = ((307973707 ? 7777165546819935472 : 0));
                }
            }
        }
    }
    var_25 = 0;
    #pragma endscop
}
