/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(((var_9 ? (max(var_1, var_16)) : ((var_13 ? var_2 : var_15)))))));
    var_18 = ((var_4 ? (min(67108863, 65185)) : -var_13));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 ^= (((65172 * 0) != 1));
        var_20 &= ((~(((var_14 != ((-98 ? (arr_0 [i_0] [i_0]) : var_15)))))));
        arr_2 [i_0] [i_0] = ((((var_0 ? var_0 : (var_11 % var_4))) < (((-(arr_1 [i_0]))))));
        var_21 = ((~(((arr_1 [i_0]) & (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 = ((((-(351 || 61185))) <= (arr_4 [i_1] [i_1])));
        var_23 += var_2;

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_24 = ((var_3 ? (arr_3 [i_1]) : ((((arr_7 [i_1] [i_2] [i_2]) > (arr_7 [i_1] [i_1] [i_1]))))));
            var_25 = ((~(((var_11 || (~var_2))))));
            arr_8 [i_2] [i_1] &= (var_11 > var_9);
            var_26 ^= ((((((arr_4 [i_1] [i_2]) ? 12570262635484159964 : (arr_4 [i_1] [i_1])))) ? (((!(arr_4 [i_1] [i_2])))) : (arr_4 [i_2] [i_1])));
            var_27 = ((7542303765576744459 ? (((((-32763 ? (-9223372036854775807 - 1) : 5876481438225391652))) ? (var_13 / 1) : 330)) : 2280));
        }
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    {
                        var_28 += (arr_5 [i_1] [i_1]);
                        var_29 = (min(var_29, (-8004238811704281498 <= 345776897)));
                    }
                }
            }
            arr_15 [i_1] [i_3] = ((var_15 ? (max((((arr_13 [i_3] [11] [4] [i_1] [4]) ? (arr_6 [12] [i_3]) : var_7)), (max(var_2, (arr_10 [i_1] [i_3 + 2] [i_1]))))) : (arr_10 [i_1] [i_3 + 1] [i_3])));
            arr_16 [1] = (min((((arr_12 [i_3 - 2] [i_3 + 2] [i_3 - 1] [i_3]) % var_8)), (((var_6 != (arr_12 [i_3 + 1] [i_3] [i_3 + 2] [i_3]))))));
            var_30 &= var_12;
            var_31 += (arr_11 [i_1] [i_1] [i_1]);
        }
        arr_17 [i_1] = (max(-8436, (((var_16 < (arr_6 [i_1] [i_1]))))));
    }
    #pragma endscop
}
