/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (max(var_5, ((min(-var_8, ((18446744073709551615 ? 105 : var_1)))))));
    var_15 = (min(var_15, (((var_7 ? var_6 : -var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = ((((min((arr_1 [i_0 + 3] [i_0 + 3]), ((-83 ? var_13 : (arr_2 [i_1] [i_0])))))) | ((105 * ((var_0 ^ (arr_2 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = (((((min(var_9, var_3))) & (((arr_7 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]) | -103)))));
                            var_18 += max((!102), (min((min((arr_4 [i_3] [i_2] [i_1] [i_0]), var_12)), (!var_4))));
                            var_19 = (min(var_19, (((((min((arr_2 [i_1 - 1] [i_0 + 3]), (arr_2 [i_1 - 3] [i_0 + 1])))) % -98)))));

                            for (int i_4 = 2; i_4 < 20;i_4 += 1)
                            {
                                var_20 ^= (((max(100, 2147483630)) >= (((((var_10 << (((arr_1 [i_2] [i_0]) + 1544960528)))) > (!4013580938704738225))))));
                                var_21 = min((((73 > 4013580938704738218) / var_4)), ((max(var_13, -14))));
                                var_22 &= (min((((arr_1 [i_1 - 2] [i_0 + 3]) ^ (arr_1 [i_1 - 2] [i_0 + 3]))), (arr_1 [i_1 - 2] [i_0 + 3])));
                            }
                            for (int i_5 = 2; i_5 < 20;i_5 += 1)
                            {
                                var_23 = (min((((min(var_9, var_11)) | (((102 << (var_0 - 853882342)))))), (arr_11 [i_5 + 1] [i_1 + 1] [i_0 + 1])));
                                arr_13 [i_0] [i_1] [i_0] [i_0] [i_5] = 4294967295;
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_24 = ((4294967287 ? (!var_1) : (arr_7 [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_1 - 3])));
                                var_25 |= (((((arr_10 [i_1 - 1] [i_0 + 3] [i_2] [i_2 + 2] [i_6] [i_6] [i_1]) == (arr_10 [i_1 + 1] [i_0 + 2] [i_2] [i_2 + 2] [i_6] [i_3] [i_2])))) >= ((575709033 ? -101 : (var_12 - 251))));
                                var_26 = (arr_3 [i_0]);
                                arr_17 [i_6] [i_3] [i_0] [i_0] [i_1] [i_0] = ((!((min((!85), var_1)))));
                            }
                            for (int i_7 = 0; i_7 < 21;i_7 += 1)
                            {
                                var_27 = var_12;
                                var_28 = (((((var_10 - var_1) && var_13)) ? (arr_21 [i_0] [i_1] [i_2] [i_3] [i_1]) : ((var_6 | (((min((arr_8 [i_7] [i_3] [i_3] [i_2] [i_1] [i_0]), 165))))))));
                            }
                            var_29 += ((((min(1, 0))) * 65520));
                        }
                    }
                }
                var_30 ^= var_3;
                var_31 = (max(var_31, var_9));
                var_32 = ((((((arr_3 [i_0 + 2]) * var_9))) ? (((arr_3 [i_0 + 2]) ? (arr_3 [i_0 + 2]) : (arr_3 [i_0 + 2]))) : (((arr_3 [i_0 + 2]) ? (arr_3 [i_0 + 2]) : (arr_3 [i_0 + 2])))));
            }
        }
    }
    var_33 = (max(var_33, var_8));
    #pragma endscop
}
