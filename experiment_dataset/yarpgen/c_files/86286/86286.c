/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_20 = (max(var_20, ((min(((max((arr_3 [2] [i_0 + 3]), (arr_3 [0] [i_0 + 2])))), (arr_0 [2]))))));
        arr_4 [i_0] = ((((min(var_3, ((-(arr_0 [i_0])))))) ? (arr_1 [i_0] [i_0 + 1]) : (arr_3 [i_0] [i_0])));
        arr_5 [i_0] = ((arr_2 [i_0] [i_0]) ? ((190 ? 65535 : -3461474075971915715)) : var_4);
        arr_6 [i_0] = (min(var_9, var_12));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_10 [i_1] [i_1] = (((((arr_0 [6]) ? -3461474075971915726 : (arr_2 [i_1] [i_1]))) ^ (((var_9 ? var_4 : (arr_3 [6] [i_1]))))));
        var_21 = (arr_3 [0] [i_1]);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_22 = ((-79 ? (((((((arr_11 [i_2] [i_3]) ? var_17 : -3461474075971915715)) <= 151)))) : ((~(((arr_21 [15] [i_2] [15] [i_4] [15] [i_5]) + -3461474075971915715))))));
                        arr_24 [i_3] [i_4] [i_3] = (max(((4 ? -7333956145662083025 : -4495099536079481129)), var_1));
                        var_23 = ((32 % (((3874879767 ? 3461474075971915714 : 242)))));
                        arr_25 [i_3] [i_3] [i_5] = (+(max((242 ^ var_10), (arr_18 [i_5] [i_4] [i_3 + 2] [i_2]))));
                        arr_26 [i_2] [i_3] [8] [i_5] = (max((((var_11 == (((!(arr_23 [i_2] [i_3] [i_3] [i_3]))))))), (621772073 * 1)));
                    }
                }
            }
        }
        var_24 ^= max((arr_18 [i_2] [i_2] [i_2] [i_2]), (!242));
    }
    var_25 = (max(var_25, var_14));

    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_26 ^= (min((~-var_2), var_7));
        var_27 = (min((((((arr_18 [i_6] [i_6] [i_6] [i_6]) != var_15)))), ((+(((arr_14 [i_6]) ? (arr_13 [i_6] [i_6]) : (arr_16 [i_6] [i_6])))))));
        var_28 = ((((max(((14137708614614389823 ? var_13 : (arr_20 [i_6] [i_6]))), var_13))) ? ((var_5 ? ((((arr_19 [i_6] [i_6] [i_6]) ? var_14 : -3461474075971915733))) : (((arr_18 [12] [16] [i_6] [i_6]) ? (arr_17 [i_6] [i_6]) : (arr_11 [i_6] [i_6]))))) : ((((((arr_15 [i_6] [i_6]) == 621772056)) ? ((~(arr_14 [i_6]))) : (arr_11 [i_6] [i_6]))))));
        arr_29 [i_6] = (arr_13 [i_6] [i_6]);
    }
    var_29 = (max(var_29, (((max((2147483647 <= var_2), (max(1, var_13))))))));
    #pragma endscop
}
