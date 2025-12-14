/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_2 || 23);

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_17 -= (arr_0 [i_0]);
        var_18 = -6092016159027984608;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_19 = (32767 & 215187293);
        arr_7 [i_1] = (arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_12 [20] = ((arr_11 [i_2]) ^ ((((arr_4 [i_2] [i_2]) || 7936))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_24 [i_2] [i_2] [i_3 - 1] [i_2] [i_5] |= (max((237666563793397698 || 64), ((~(((arr_20 [i_2] [i_2] [i_2]) % -1169318559))))));
                        var_20 = (max(var_20, (((~(((arr_13 [i_2] [i_4 - 2] [i_2]) & (arr_13 [i_2] [i_4 - 2] [i_2]))))))));
                        arr_25 [i_3] [i_2] [i_2] [i_3] = ((-(arr_23 [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4 + 1] [i_4])));
                        var_21 = (min(var_21, (((((((arr_18 [i_3] [i_3] [i_3 + 4]) ? (arr_2 [i_3 - 1] [i_3 + 3]) : 32752))) || -9061)))));
                        arr_26 [i_2] [i_3 + 3] [i_4] [i_3] = 3;
                    }
                }
            }
        }
        var_22 = (max(var_22, (!4267408910)));
    }

    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_33 [i_7] = -32767;
            arr_34 [i_7] = (~1);
            arr_35 [7] [i_7] [i_6] = ((0 * (arr_16 [i_6] [i_7] [4])));
            arr_36 [i_6] [i_7] [i_7] = ((+((min((arr_19 [3]), (arr_27 [i_7]))))));
            arr_37 [13] [i_6 + 1] [i_6 + 1] = (((-9223372036854775807 - 1) != 2705395317));
        }
        var_23 |= ((((((((14 ? 6549 : 159451961))) / 2))) > (arr_6 [i_6 + 1] [i_6])));
    }
    #pragma endscop
}
