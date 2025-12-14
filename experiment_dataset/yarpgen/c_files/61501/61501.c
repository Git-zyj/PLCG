/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-2147483647 - 1);
    var_13 = 21;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 ^= (((((((min(1, 10654))) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (7 / 650731138) : -409725435));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_15 = (arr_3 [i_0]);
            var_16 = (min(var_16, ((((((240 ? -31278 : 1))) || ((((arr_3 [i_0]) ? (arr_3 [i_1]) : -31269))))))));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
            {
                arr_12 [i_2] [i_2] = ((((~-2124691845) ? ((1 ? -409725436 : 1)) : -409725437)) | 241);
                arr_13 [i_0] [i_2] [i_2] [i_3] = (((((arr_6 [i_0]) * (((arr_11 [i_0] [i_0] [i_2] [i_3]) ? -31257 : 1)))) % 20728));
            }
            for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_17 = arr_1 [i_2];
                var_18 = (max(var_18, ((((1 < 990502310) > ((168 - (arr_2 [i_2 + 1] [i_4 + 1]))))))));
            }
            var_19 += 9843;
            var_20 = (max(31268, (arr_15 [i_0] [i_2 - 1] [i_2 - 1])));
            arr_17 [i_2] [i_2 - 1] = ((((!(((6 ? 241 : 2))))) ? ((1 ? (arr_8 [i_2 + 2] [i_2 + 2] [i_0]) : (arr_8 [i_2 + 2] [i_2 - 1] [8]))) : (((arr_11 [i_0] [i_0] [i_0] [i_2 + 1]) ? (0 != 2078656689) : (33 / 71)))));
            arr_18 [i_0] [4] [i_2] = ((((((arr_1 [i_0]) & -658))) ? ((((-409725436 && -10662) || (arr_9 [i_2] [i_2 - 1] [1])))) : 31269));
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] = (((arr_20 [i_5 - 1]) ? 48 : 2147483647));
        var_21 = (arr_20 [i_5 + 2]);
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_22 = (((((((-409725454 ? (arr_22 [i_6]) : 255))) ? 15723 : (max(25165824, (arr_23 [i_6]))))) > 20747));
        var_23 += ((((-((1 ? 1 : 211))))) ? ((174 + (arr_19 [i_6 + 2]))) : ((0 ? (arr_22 [16]) : (arr_22 [18]))));
        var_24 = (min(var_24, ((((((arr_25 [0]) ? ((1 ? 3464 : (-2147483647 - 1))) : (arr_20 [i_6])))) ? ((((max((arr_22 [12]), -14863))) ? 36 : ((-18 ? -1059760141 : 1059760121)))) : 32767))));
        var_25 += max((((arr_23 [i_6 + 2]) ? (arr_23 [i_6 + 2]) : 136)), -379505799);
    }
    #pragma endscop
}
