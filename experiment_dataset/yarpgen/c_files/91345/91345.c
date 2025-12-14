/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (min(var_1, (min(var_4, (-87 / 38843)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (((arr_0 [i_0]) + (max((arr_1 [i_1 - 1] [i_1 + 1]), (arr_4 [i_1 + 1] [i_1] [i_1 - 1])))));
                var_12 = (arr_3 [i_1] [i_1]);
                arr_5 [i_1] = -9223372036854775801;
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_10 [6] &= ((((((arr_7 [i_2]) / 32369))) * (((4294967295 | -860809281) ? ((((arr_9 [i_2]) % 23))) : ((4294967295 ? 0 : (arr_8 [i_2])))))));
        var_13 = ((((((arr_7 [i_2]) + (arr_7 [i_2])))) ? (arr_7 [i_2]) : ((min((arr_7 [i_2]), (arr_7 [i_2]))))));
        var_14 = (-921694156 | 255);
        arr_11 [i_2] [i_2] = (4294967295 + (min((arr_6 [i_2] [i_2]), (arr_9 [i_2]))));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_15 = ((((-7141842731392987513 / (arr_7 [i_3])))) && (((arr_8 [i_3]) && (arr_12 [i_3]))));
        arr_14 [i_3] = 183;
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((((((arr_7 [i_4]) ? (3223236337 + -27242) : (((arr_12 [i_4]) ? (arr_13 [i_4] [i_4]) : (arr_9 [i_4]))))) + 7)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                {
                    var_17 *= (((arr_16 [i_6 - 1]) ? (arr_16 [i_4]) : (17 || 2233905697)));
                    var_18 = ((((32369 ? (arr_19 [i_4] [i_4] [i_6 - 1]) : -24853)) % (179 % -27242)));
                    var_19 = (max(var_19, (((((((-28899 && (arr_7 [i_5]))))) % (arr_21 [i_5]))))));
                    var_20 = (32396 / -67);
                    var_21 = (17 * -69);
                }
            }
        }
        var_22 = (((((((arr_17 [i_4]) || (arr_20 [i_4] [i_4] [i_4])))) + 36028)) * (((arr_20 [i_4] [i_4] [i_4]) % (((28898 || (arr_15 [i_4] [i_4])))))));
        var_23 = (arr_21 [i_4]);
    }
    var_24 = var_7;
    #pragma endscop
}
