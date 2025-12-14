/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_9 ? (~var_1) : (min(var_5, 7936207851244517380))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((161977811 ? ((-161977822 ? -19 : -161977812)) : 1));
        arr_3 [i_0] [i_0] = 1;
        var_12 = (min(var_12, (((min((arr_1 [i_0 - 2] [i_0 - 2]), (arr_1 [i_0] [i_0 - 2])))))));
        var_13 *= ((arr_1 [i_0] [i_0 + 1]) >> (((arr_1 [i_0 - 2] [i_0 - 2]) - 6990)));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            var_14 = (min((((((3604700461067359429 * (arr_0 [i_1]))) > 2561053090))), (((arr_4 [i_1 - 1]) ? 2147483647 : 1733914231))));
            var_15 = (min(((-(arr_4 [i_1 - 1]))), (arr_9 [i_2 - 2] [i_1 - 1] [i_1 - 1])));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 7;i_4 += 1)
                {
                    {
                        arr_14 [i_4] [i_2] = (arr_12 [7] [i_2] [i_3] [i_4 + 2]);
                        var_16 = ((((min(335779079, 43879))) ? ((min((arr_5 [i_1 - 1] [i_1 - 1]), (arr_8 [2])))) : (arr_4 [i_1])));
                        arr_15 [i_4] [i_3 - 2] [i_2 + 1] [i_2 - 3] [i_1] |= ((((((1 + 4294967279) ? 4294967295 : (arr_11 [i_1] [i_1 - 1] [i_4 + 1])))) ? 1829122283 : ((1543091112 ? (arr_1 [i_1 - 1] [i_2 - 2]) : (arr_1 [i_1 - 1] [i_2 - 2])))));
                    }
                }
            }
            arr_16 [i_2] |= (max((((arr_11 [i_1] [i_1] [0]) ? (((!(arr_1 [i_2] [i_2])))) : ((max(-8304, (arr_7 [i_1 - 1] [i_2] [3])))))), (((-25412 ? 3322464071 : 41)))));
            arr_17 [3] = min(((~(arr_6 [i_2 - 3] [i_2 - 3] [i_2]))), (((((min((arr_12 [i_1] [i_1] [i_2] [i_2 + 1]), 7936207851244517380))) ? (arr_13 [i_2] [i_1] [i_1 - 1] [i_1 - 1]) : (min((arr_0 [9]), (arr_4 [i_1])))))));
        }
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        var_17 = ((max((arr_10 [i_6 + 2] [i_5 - 2] [i_1 - 1]), (arr_10 [i_6 + 2] [1] [i_1 - 1]))));
                        var_18 += (arr_0 [1]);
                    }
                }
            }
            var_19 = (min(1343392829, 9));
        }
        var_20 = 127;
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        var_21 = (max(var_21, ((max(((-1050714327 ? (arr_29 [i_8 - 1] [i_8 - 1]) : (arr_29 [i_8 - 1] [i_8 - 1]))), (max(-125, (arr_29 [i_8 - 1] [i_8 - 1]))))))));
        var_22 = (max(var_22, (arr_27 [i_8])));
        arr_30 [i_8] [i_8] = ((min(7765775259531926117, 1133464691)));
    }
    var_23 = -1050714327;
    var_24 += var_7;
    #pragma endscop
}
