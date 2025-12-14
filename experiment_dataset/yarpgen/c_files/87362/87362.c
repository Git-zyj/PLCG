/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_8 [i_0] = (((((1766797616156504010 ? 0 : 0)) >> (6 <= 4294967295))));
                        arr_9 [6] [i_1] [6] [i_0] = 4294967284;
                        var_19 = var_2;
                        arr_10 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 2] = -var_12;

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_20 -= ((0 << (10544 - 10535)));
                            var_21 = min((1 - 2147483647), var_1);
                            arr_13 [i_0] [i_0] [i_0] = (((((arr_12 [i_0 - 1]) <= (arr_12 [i_0 + 2]))) ? ((((arr_12 [i_0 + 1]) || (arr_12 [i_1])))) : ((((arr_12 [i_0]) <= (arr_12 [i_0 - 1]))))));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_22 = var_8;
                            var_23 = ((4294967295 ? ((max((arr_12 [1]), ((var_16 ? (arr_16 [i_0]) : 2147483647))))) : (arr_12 [i_0 + 3])));
                            var_24 = (max(var_24, 12));
                            arr_17 [i_0] [i_0] [i_0 + 1] [2] [10] = (~var_10);
                            var_25 = (((min((max(4294967295, var_3)), var_9)) >= ((((!((max(var_6, var_0)))))))));
                        }
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            var_26 = 61;
                            var_27 |= (arr_16 [i_1]);
                            var_28 += (!2899595857);
                        }
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_24 [5] [i_1] [i_1] [i_0] [i_1] = ((+((((281474976710654 <= -1) < 65535)))));
                        var_29 = -7275;
                        arr_25 [i_2] [i_0] = (min((arr_2 [i_0 + 3]), 4294967295));
                        var_30 = ((var_7 || (arr_7 [i_2] [i_1] [i_2 + 1] [i_7] [9] [i_1])));
                        var_31 = (max(var_31, (((((((arr_6 [i_0] [i_1] [i_1] [i_0]) && -2147483625))) / ((((min((arr_21 [i_1] [i_1]), 65535))) ? (var_10 && var_0) : ((0 ? -10442 : -24160)))))))));
                    }
                    var_32 = (7405700602483307297 - 2147483624);
                }
            }
        }
    }
    #pragma endscop
}
