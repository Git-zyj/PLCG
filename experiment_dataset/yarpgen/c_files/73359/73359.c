/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((-(min(2013953573, 251)))));
        var_10 ^= ((~(236 + 243)));
        arr_4 [i_0] = (((arr_2 [i_0]) ? ((((max(-428406901, 29856)) > ((min(11, 30)))))) : ((376 ? 243 : 31))));
        var_11 = (min(var_11, (((((((((arr_0 [i_0]) ? var_9 : (arr_2 [i_0])))) ? ((max(-1, 65143))) : 5)) + (((((47 ? var_1 : 236))) ? (((arr_2 [i_0]) ^ (arr_0 [i_0]))) : (~30))))))));
    }
    var_12 = (min(var_12, -63));
    var_13 = (max(var_8, (var_9 >= 37316)));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_14 = (min(var_14, var_9));
                    arr_13 [i_1] [i_1] [i_3] = (((!-5978) ? (arr_12 [i_3] [i_1] [i_3]) : (arr_0 [i_1])));
                    arr_14 [i_3] [12] = 1;
                }
            }
        }
        arr_15 [i_1] = (arr_5 [i_1] [i_1]);
        var_15 = (arr_1 [i_1]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {

                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            arr_29 [i_1] [i_4] [i_5] [i_5] [i_6] [i_6] = (arr_27 [i_1] [7] [i_5] [i_6] [i_7 - 2]);
                            arr_30 [i_4] [i_4] = (((arr_9 [i_7 + 1]) && (arr_9 [i_7 - 1])));
                            var_16 -= arr_23 [i_1] [i_1] [i_5] [i_6] [i_7];
                        }
                        var_17 = ((((arr_0 [i_1]) - (arr_18 [2] [2]))));
                        var_18 = (arr_23 [i_1] [i_4] [i_5] [i_6] [i_6]);
                    }
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 21;i_8 += 1)
    {
        arr_33 [18] &= ((arr_32 [i_8] [i_8]) ? ((-var_0 ? ((max(34, 236))) : ((min(var_0, 1))))) : (arr_32 [i_8] [i_8 + 2]));
        arr_34 [i_8] [i_8] = ((((max(18446744073709551615, (((393 || (arr_31 [i_8]))))))) ? ((0 ? (max(-88, 18446744073709551615)) : (((max(87, 1)))))) : ((((arr_32 [i_8] [i_8 - 3]) ? 1 : (0 | var_3))))));
        arr_35 [2] &= (max(((-((-1102955447 ? 20 : (arr_31 [10]))))), ((((1 << (((arr_31 [2]) + 14336)))) & var_8))));
        arr_36 [i_8] [i_8] = (max(((((((arr_32 [i_8] [i_8]) ? (arr_31 [i_8]) : (arr_31 [i_8])))) ? (arr_31 [i_8]) : (arr_31 [i_8]))), ((min((arr_31 [i_8]), (arr_32 [i_8 - 3] [i_8 + 2]))))));
    }
    #pragma endscop
}
