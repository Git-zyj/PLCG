/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_1] = ((max(14906389762278478399, (arr_0 [i_0]))) | ((min(2342545528, (arr_4 [i_2 - 4])))));
                    var_18 += (max(((~(!var_3))), -6));
                    var_19 = (min((((!856916589) << (((min(4780663660913628503, -17)) - 4780663660913628498)))), -86));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = (min(var_20, ((min((~125), 602647002)))));
        var_21 = (min(var_21, 779935487));
        var_22 = max((max((max(439411817326198539, var_4)), ((max((-9223372036854775807 - 1), var_13))))), (min((-2147483647 - 1), var_9)));
        var_23 = min(919867031, (((((min(154222660, 2576803405))) || ((max(var_8, var_14)))))));
        var_24 |= ((!((max((arr_3 [i_3] [i_3] [1]), (arr_2 [i_3] [i_3] [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_25 = (min(var_25, 479453230));
        arr_16 [i_4] = 2499546632;
        var_26 = ((max(143974450587500544, (arr_3 [i_4] [i_4] [i_4]))));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_27 *= (max((arr_5 [i_6] [i_6] [i_5]), (((+(((arr_3 [i_5] [i_5] [i_6]) ^ (arr_3 [i_5] [8] [i_5]))))))));
            var_28 += (min(((((arr_21 [i_5 - 1] [i_5 - 1] [i_5]) ? (arr_21 [i_5 - 1] [i_5 - 1] [i_5 + 1]) : var_6))), (((arr_1 [i_5 - 1]) ? var_9 : -6834277950450176073))));
            arr_23 [i_5] [i_5] [i_6] = (((arr_3 [14] [14] [14]) | ((((0 ? 15203680479134380092 : 0))))));
        }
        arr_24 [i_5] = (max((var_3 / var_5), (((arr_20 [i_5 + 1] [i_5]) ? (arr_20 [i_5 + 1] [i_5 + 1]) : (arr_20 [i_5 + 1] [i_5 + 1])))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                var_29 = (min(var_29, var_1));
                var_30 |= (((-4577956903518162599 + 9223372036854775807) << (6333114767659748932 - 6333114767659748932)));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_31 += min(((+((9101375229564234113 ? (arr_33 [1] [8]) : -71)))), (((!((min(var_15, (arr_21 [4] [i_8] [2]))))))));
                            arr_37 [i_8] [i_8] [i_8] [i_7] = (max((arr_33 [i_7] [i_7]), -1));
                            arr_38 [i_7] [i_8] = 17179869180;
                            arr_39 [i_7] [i_8] [i_8] [2] [i_8] = (min(((max((arr_21 [i_9] [i_9 - 3] [i_9 + 1]), var_10))), (max(var_14, var_8))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
