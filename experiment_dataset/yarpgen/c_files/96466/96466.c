/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [2] = ((((max((max((arr_1 [i_0] [i_0]), (arr_0 [13]))), ((((arr_1 [i_0] [i_0]) != (arr_2 [i_0]))))))) ^ (max((max(1047576536, 1)), ((var_0 ? var_8 : (arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_1] [i_0] = ((((((1 ? var_10 : var_5)) != (arr_1 [i_0] [i_2]))) ? (arr_1 [i_1 - 2] [i_2 + 3]) : (arr_6 [i_2])));
                    var_18 = (((min(7222368085343146791, 80)) * ((((!((max((arr_5 [i_0] [i_0]), var_8)))))))));
                    var_19 += ((((((arr_1 [i_2 + 2] [i_1 + 1]) ? (arr_1 [i_2 + 3] [i_1 + 1]) : (arr_5 [i_1 + 2] [i_2 + 3])))) && (((((((arr_8 [i_0] [i_1] [i_2 + 3]) ? -389724151143578858 : var_9))) * var_1)))));
                }
            }
        }
        arr_10 [i_0] [i_0] = (8388352 | 54205);
        var_20 = ((288230376017494016 ? -21 : 1961053093));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            arr_16 [i_4] [i_4] [i_4] = (((arr_4 [i_3] [i_3]) || var_5));
            var_21 = ((-462610034 ? 230 : (-2147483647 - 1)));
            var_22 -= (8589930496 == 17592186011648);
            var_23 += ((var_0 ? var_14 : (arr_4 [i_4 + 2] [i_4 - 2])));
        }
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            var_24 = ((!((min((arr_14 [2]), var_3)))));
            var_25 = (max(var_25, (((var_2 && var_12) > (((((var_1 ? var_1 : (arr_15 [1] [1])))) ? ((var_13 << (13869098792861162781 - 13869098792861162770))) : (arr_17 [i_5 + 2] [i_5 + 2])))))));
        }
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            var_26 = ((1 ? ((32256 ? ((65024 ? -288230376017494016 : 2147483647)) : (arr_21 [i_3] [i_6 + 1] [i_6 - 1]))) : (((arr_13 [i_6 - 1] [i_6 - 1]) ? ((max((arr_11 [1]), var_4))) : 1416696440))));
            arr_23 [i_3] = (max(((((arr_7 [i_6 - 2]) * var_11))), (min((arr_19 [i_3]), (arr_19 [i_6 - 3])))));
            var_27 = (~-64);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_26 [i_7] = ((((arr_12 [i_3] [i_3]) ? ((max((arr_4 [i_3] [i_3]), var_9))) : ((min((arr_8 [i_7] [i_7] [i_3]), (arr_14 [i_7])))))));
            var_28 = max(((max(460265101, 4194304))), (min(-2666100005102759443, 1)));
            var_29 += ((((min((arr_14 [14]), var_5))) ? (max((arr_14 [1]), var_15)) : (((var_8 ^ (arr_14 [6]))))));
            var_30 ^= ((((min((arr_1 [i_3] [i_3]), (arr_1 [i_3] [i_7])))) ? (max(2952875168, (arr_1 [i_3] [i_7]))) : (max((arr_1 [i_7] [i_3]), 3080330728))));
            arr_27 [i_3] [i_7] [i_3] = min((((arr_4 [i_3] [i_7]) >> (arr_4 [11] [i_7]))), (((arr_4 [i_7] [i_3]) | var_4)));
        }
        var_31 = ((((min((arr_19 [i_3]), (arr_19 [i_3])))) ? (((arr_19 [i_3]) * (arr_19 [i_3]))) : (((((arr_19 [i_3]) && var_10))))));
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        arr_30 [i_8] = ((max(var_14, var_12)));
        var_32 = ((1 ^ ((var_1 & (((var_4 ? var_2 : (arr_17 [i_8] [i_8]))))))));
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        arr_34 [i_9] = (((max(var_9, (arr_6 [i_9 - 1])))));
        arr_35 [6] &= (max((arr_20 [i_9 - 1]), ((var_17 ? var_2 : 64424509440))));
    }
    var_33 = (max(var_2, var_13));
    var_34 = var_16;
    #pragma endscop
}
