/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_2;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        var_17 = (((min((~62687), var_11)) + (((-10771 % (arr_8 [i_2] [i_2 - 1] [i_2] [i_3 + 3]))))));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_18 = 4294967295;
                            var_19 = 17335582262426226469;
                            var_20 = (min((((51244 && (var_9 >= 14291)))), 43));
                            var_21 ^= ((((max((arr_6 [i_1]), var_12))) >> ((((max((arr_11 [i_0] [i_1] [i_2 + 1] [i_3] [i_4 - 1]), -104))) - 65405))));
                        }
                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_1] [i_3 + 3] [i_2] [i_2] = var_12;
                            arr_15 [i_0] [i_3] [i_3] [i_3] [i_5 + 2] [i_3] [i_1] = (((((((max(14291, 1))) && (!var_14)))) << (var_0 - 38488)));
                            var_22 = ((((min(var_9, var_10))) ? (min(4398046511103, (arr_1 [i_1]))) : ((min(var_9, var_2)))));
                        }
                        var_23 = var_11;
                    }
                    var_24 = (max(var_24, ((((min(((5003 ? (arr_7 [i_2]) : var_10)), (arr_8 [i_2] [i_1] [i_1] [i_0]))) <= (-12 - -1))))));
                    var_25 = max(var_7, ((max((arr_0 [i_2]), var_5))));
                    arr_16 [i_0] [i_1] [i_0] = (min((max((var_11 || var_3), (var_4 / 60))), ((min((arr_8 [i_2 - 1] [i_2] [i_2] [i_2 + 1]), var_0)))));
                    var_26 = (((((min(16, var_11)) * ((0 / (-127 - 1))))) > ((((!var_12) >> ((((-(arr_7 [i_0]))) + 925)))))));
                }
            }
        }
        arr_17 [i_0] = ((51244 ^ 13912848595571973443) ? 0 : (min((arr_3 [i_0]), 1581919773)));
    }
    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        var_27 = (max(var_27, 4136735027670756237));
        var_28 ^= ((-((97 / (arr_18 [i_6 + 3])))));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_29 ^= (!var_11);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 12;i_9 += 1)
            {
                {
                    var_30 ^= 65070;
                    var_31 = -123;
                    arr_27 [i_8] [i_9] = (var_3 != -92);
                    var_32 = ((min((arr_18 [i_9 - 1]), var_0)));
                    var_33 = ((-((var_6 * (0 && 24505)))));
                }
            }
        }
        var_34 = (min(var_34, ((((((((var_14 ? var_1 : 0)) | ((max(43457, 27004)))))) | (((arr_19 [6] [i_7]) ? (var_5 ^ -1) : (min(2257170316, var_5)))))))));
        var_35 = ((min(3898460915, (max(var_9, var_15)))));
    }
    #pragma endscop
}
