/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min((~0), (min(var_3, var_19))))) ? (((var_19 >= var_8) ? (~42968) : -var_0)) : var_15));
    var_21 = (((((((min(var_18, var_2)) <= var_19)))) < (min((var_15 == var_7), (var_14 / 13547)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [18] [i_1] [0] &= (max((268427264 < 1), (max(-13548, ((15 ? 22567 : 22554))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_10 [i_2] [i_0] [i_0] [i_0] = (11007780572633651263 < 4294967279);
                arr_11 [i_0] [i_0] [8] |= 2262077449;
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_22 = ((((((13547 ? (arr_7 [i_0]) : (arr_5 [i_0] [i_3] [10]))) > (arr_4 [i_0]))) ? (((((0 ? 20 : 2026797798)) / (arr_8 [i_0] [i_1] [i_0] [i_3])))) : var_19));
                var_23 = (min(var_23, ((min((max(0, (((arr_13 [16] [i_1] [i_3] [i_3]) ? (arr_8 [i_0] [i_1] [i_1] [i_3]) : 255)))), ((min((arr_8 [17] [7] [i_3] [i_3]), (max(32767, (arr_0 [i_3] [i_1])))))))))));
                arr_14 [i_0] = (max(949, 13551));
            }
        }
        arr_15 [i_0] [i_0] = (min(((-((min((arr_3 [i_0]), -13547))))), (((var_4 | var_1) ? ((~(arr_5 [i_0] [i_0] [i_0]))) : (arr_0 [i_0] [i_0])))));
    }
    for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_24 = (min((max(((min(20, -949))), ((949 ? 13547 : 2430441313)))), (max((646106828 + 6727), 3648860467))));
        arr_20 [i_4] [i_4] &= ((((((var_5 / 3648860468) ? (arr_5 [i_4] [i_4] [i_4]) : var_5))) ? (~-6745) : ((-163137000 ? -25627 : 537296628))));
        var_25 = ((1 ? (arr_17 [i_4]) : (min(((min(var_0, (arr_7 [i_4])))), (arr_17 [i_4])))));
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_26 = ((((((arr_22 [i_5 + 2]) ? (arr_22 [i_5 - 3]) : (arr_8 [i_5 - 2] [i_5 - 3] [7] [i_5])))) ? (arr_3 [7]) : (arr_12 [i_5] [i_5] [i_5] [i_5])));
        var_27 = (min((-950 >= 1472), (((min(-25627, (arr_16 [i_5])))))));
    }
    var_28 = (min(var_28, (((((~(min(var_0, 8235)))) / (-var_9 - var_15))))));
    #pragma endscop
}
