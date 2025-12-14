/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_2 ? ((max(var_3, var_12))) : (min((var_1 ^ var_4), var_10)));
    var_20 = ((var_16 ? (-13741 == var_10) : (((var_18 > var_6) ? var_14 : (max(var_5, var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((((((((~(arr_2 [7] [i_0] [3]))) | (-317200612914595898 || -27652)))) ? (arr_2 [i_0] [i_0] [i_0]) : ((~(arr_1 [i_1 + 4] [i_0 - 3]))))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_1] [i_0] = (((((0 ? 4294967279 : 0))) ? ((11809 ? (arr_5 [i_0 - 3] [i_1 + 3] [i_1 + 3]) : (arr_6 [i_0 - 1] [i_1] [i_2]))) : var_9));
                    arr_8 [i_0] [i_1] [i_2] = (((max(((var_1 ^ (arr_0 [i_1]))), var_0)) ^ (((16164117050806549875 || var_3) ? (min((arr_4 [i_0] [i_0] [i_0]), -317200612914595898)) : (155057266 * 0)))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_1] [i_1] [i_0] &= ((~((3 ? -7490718555839546751 : 2282627022903001731))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] [i_4] [i_3] [i_1 + 4] [i_0] = ((var_2 > ((((max((arr_11 [i_0 + 1] [i_1]), (arr_2 [i_3] [i_1] [i_0])))) ? (max(var_8, (arr_18 [i_0] [i_1] [i_3] [4]))) : 4427163703398143586))));
                                var_22 = (max(var_22, -63));
                            }
                        }
                    }

                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        var_23 = (((((-2779260852414419689 ? (26025 || -7490718555839546737) : ((max(63, 125)))))) || ((((7065 ? 8453326938229252472 : 63))))));
                        arr_22 [i_6] [i_6] = (((((60558 ? 0 : (((max((arr_5 [i_0 - 2] [i_0] [i_0 - 2]), -121))))))) ? (((-2901 >= 38542) ? (max(-68, 1382560516)) : (((0 && (arr_5 [i_0] [i_0] [i_6])))))) : (((!(arr_15 [i_1 - 2] [i_1 + 3] [i_1 + 3] [i_1]))))));
                        var_24 |= (max((((var_18 & 29336) ? (min((arr_18 [i_1] [i_1] [i_3] [i_1]), (arr_21 [2] [2] [i_3] [i_3] [i_6]))) : ((((-9223372036854775807 - 1) | 55169))))), ((((~1835290148479235565) & -124)))));
                        var_25 = (max(var_25, (((~(((((~(arr_4 [i_0] [i_0] [i_3]))) == -1))))))));
                    }
                    var_26 = (var_17 || 52578992);
                    arr_23 [i_0] [i_1] = 7096;
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_27 ^= (min(-38211744, (arr_12 [i_0 - 2])));
                                var_28 = (max(var_28, (arr_18 [i_0 - 1] [i_8 - 1] [i_7] [i_7])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = ((((((var_16 ? 6243815206318203943 : var_2)) >= var_15)) || 17077));
    #pragma endscop
}
