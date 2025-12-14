/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_14 ? ((var_2 * (arr_1 [i_0]))) : ((((((arr_2 [5]) & var_14))) ? (arr_0 [i_0]) : (((var_4 <= (arr_1 [i_0]))))))));
        var_16 += (min(((((var_13 > (arr_1 [i_0]))) ? (var_2 % var_12) : (max(var_11, (arr_2 [9]))))), (min(((1772993880 ? (arr_0 [i_0]) : (arr_2 [i_0]))), (arr_1 [i_0])))));
        var_17 += ((!((max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_18 += var_13;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_19 += (min((min((min(var_11, (arr_4 [i_1]))), (-1796297859 >= 1796297858))), ((((((var_5 >> (var_1 - 9989106221711840488)))) ? (!var_10) : (var_8 / 1))))));
        var_20 ^= (max((var_0 / var_11), ((-31342 ? var_11 : var_5))));
        var_21 = 98;
        arr_7 [i_1] [i_1] = min(((-(arr_4 [i_1 - 1]))), ((min(48, -38))));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_22 += (arr_1 [1]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                {
                    arr_15 [i_2] [11] [11] [i_2] = ((((((arr_4 [i_2 - 1]) >= (arr_4 [i_2 + 2]))))) >= (min((arr_4 [i_2 - 1]), (arr_1 [i_2 + 1]))));
                    var_23 = (((((-(arr_1 [i_4 - 3])))) ? ((15165745530313635641 ? (arr_2 [i_2 + 1]) : var_8)) : (((max(var_11, (!var_8)))))));
                    var_24 = ((((min((!16313484490588211517), (!var_6)))) * (arr_14 [i_2 + 2] [i_4 - 3] [i_4] [i_4])));
                }
            }
        }
        var_25 ^= (((((arr_14 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]) & (arr_14 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) << (((((~var_1) ^ (arr_9 [i_2]))) - 8457637851997711118))));
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_26 = ((((((~var_10) ? (2133259583121340099 != var_4) : ((((arr_18 [i_5] [i_5]) && var_15)))))) && var_10));
        var_27 = (min(var_27, ((((((~((((arr_14 [2] [i_5] [2] [i_5]) > var_9)))))) || (arr_1 [13]))))));

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_28 += (!((max((min(var_11, var_2)), (arr_19 [i_5 + 2])))));
            var_29 = ((2374094929 == (arr_21 [i_6] [i_6])));
            var_30 ^= (max(((((arr_8 [i_5 + 2]) != (arr_8 [i_5 + 1])))), (min((arr_8 [i_5 + 1]), (arr_8 [i_5 + 1])))));
            var_31 = (((arr_13 [14]) ? (arr_8 [i_5]) : ((((min(var_1, var_7))) ? ((min((arr_16 [i_5] [i_6]), var_0))) : (((arr_8 [i_5]) + var_3))))));
            var_32 = max((min(-var_15, (((var_3 / (arr_20 [i_5] [i_5])))))), (min(((841009480950365809 / (arr_6 [0] [0]))), (((var_10 - (arr_9 [i_5])))))));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_33 ^= (arr_18 [i_5] [i_5 - 1]);
            var_34 ^= (min((arr_5 [i_5] [1]), ((-(1 % var_8)))));
            var_35 = (min((((var_12 ? 1796297858 : var_12))), 28654));
            var_36 = (arr_10 [i_7]);
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 4; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    arr_37 [i_10] [i_8] = ((~(max((arr_28 [i_8]), ((((arr_33 [i_8] [i_8] [i_9 - 2] [i_10]) ? -1796297858 : (arr_33 [i_8] [i_9] [i_9] [i_10]))))))));
                    var_37 = var_15;
                    var_38 = 1;
                }
            }
        }
    }
    #pragma endscop
}
