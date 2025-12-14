/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = ((((36817 << (90804148 - 90804144)))) ? (((arr_0 [i_1] [3]) / (arr_5 [7] [i_0]))) : (((var_6 << (((arr_5 [i_1] [i_1]) + 1716230413309147077))))));
                var_15 = (((((arr_2 [i_0 - 1]) + (arr_2 [i_0 + 2]))) * 9098103156897783397));
            }
        }
    }
    var_16 -= var_3;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    arr_16 [i_2 - 1] = (min(((min((((!(arr_13 [i_2] [i_3] [i_2] [i_2])))), (arr_9 [i_3] [i_3])))), (min(((min((arr_8 [i_4]), var_13))), (min(-13981, 7075059780582567322))))));
                    arr_17 [i_2] [i_2] [i_4 + 1] = ((~(min(12718357993618867611, ((32976 ? 1646093271932888318 : (arr_10 [i_2 + 3] [i_3] [i_3])))))));

                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        var_17 = ((((min((arr_15 [i_2 - 1] [i_3] [i_4 + 1] [2]), var_2))) ? ((((var_13 <= (arr_15 [i_2] [i_3] [0] [i_5]))))) : (((arr_15 [i_5 - 1] [i_2 + 1] [i_3] [i_2 + 1]) ? (arr_10 [0] [0] [i_4 + 1]) : 8826246382468314977))));
                        var_18 = (243 != (((((-10937 ? var_1 : (arr_7 [i_2 - 1]))) != (61418 << 1)))));
                        arr_20 [i_2] [15] [i_4 + 1] [i_4 + 1] [11] = ((var_5 ? 8826246382468314977 : (arr_12 [0] [i_4 + 1] [i_5 - 2])));
                        var_19 = var_3;
                    }
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        var_20 = (min(((((((arr_23 [i_2] [i_2] [i_2] [11] [i_2] [8]) & var_5))) ? 97 : (((arr_7 [i_6 - 1]) ? (arr_23 [i_3] [4] [i_4] [i_6] [i_2] [i_3]) : -8826246382468314972)))), 3490287320));
                        var_21 = (!3624141583);
                    }
                    var_22 = (((-1 ? (((((arr_24 [i_2] [i_2] [i_2] [i_2] [13]) + 2147483647)) >> (var_12 - 1750990179))) : (arr_8 [i_3]))));
                }
            }
        }
    }
    #pragma endscop
}
