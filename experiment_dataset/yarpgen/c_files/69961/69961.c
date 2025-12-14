/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (min((min((var_12 && var_15), var_2)), (min((!5672208357437623619), var_7))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((max((arr_7 [i_1 - 1] [i_0 + 1]), 26511)));
                arr_8 [i_0] = ((((min((arr_6 [i_0 + 4]), (max((arr_4 [i_0]), 0))))) ? ((((max(172, (arr_1 [i_1 + 3])))) ? (arr_5 [i_0] [i_1] [i_1 + 2]) : (max(18446744073709551615, 5672208357437623619)))) : (((-(arr_2 [i_0 - 1]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_18 = (((arr_2 [i_2]) != (((min(5672208357437623619, 2294447902)) >> (((arr_3 [20]) - 31151))))));
        arr_12 [i_2] = var_4;
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_19 &= (((2294447902 / (arr_15 [i_3] [i_4]))) + (arr_13 [i_3]));
            var_20 = ((13224486363271324604 % (arr_15 [i_3] [i_4 - 1])));
            var_21 |= 12998971676593758283;
        }
        arr_17 [i_3] = max((((max(0, (arr_15 [i_3] [i_3 - 1]))))), ((-((3096613049855484410 ? (arr_15 [i_3] [i_3]) : 23208)))));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        arr_21 [i_5] = (max(-180617192, 180617192));
        arr_22 [i_5] [i_5] = (arr_14 [i_5 + 1] [i_5 + 1]);
        var_22 = (((arr_4 [i_5]) ? (((var_9 ? (arr_14 [i_5] [i_5]) : var_1))) : ((((12774535716271927997 || ((((arr_2 [i_5]) ? 3722876807 : (arr_15 [i_5] [i_5]))))))))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        var_23 = ((!(arr_23 [i_6] [i_6 + 2])));
        arr_27 [i_6] = var_11;
    }
    #pragma endscop
}
