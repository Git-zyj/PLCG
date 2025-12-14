/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = arr_0 [i_0] [i_0];
                arr_6 [i_0] [i_1] = ((-(max((var_5 / 27345537), (arr_4 [i_0])))));
                arr_7 [i_0] [i_0] [1] &= (arr_0 [1] [i_1]);
            }
        }
    }
    var_18 = ((31 ? 85152450 : 1781244989));
    var_19 *= 1909479199;

    for (int i_2 = 4; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((var_14 ? ((((var_3 ? 0 : (arr_1 [i_2] [i_2]))))) : (((arr_9 [i_2 - 4]) & (arr_9 [i_2 - 4])))))));
        arr_11 [i_2] = (~3169);
        var_21 = max(((max((arr_1 [i_2] [i_2 + 2]), (arr_1 [i_2] [i_2 + 2])))), (((3060579871 || 1761260460) % 3009551764)));
        arr_12 [i_2] [i_2] = max((arr_9 [i_2]), ((var_14 ? (max(var_4, 7179100233517122600)) : (var_12 % 1737501951))));
    }
    for (int i_3 = 4; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = ((((max((((arr_2 [i_3]) ^ var_12)), (var_6 & var_8)))) ? ((((((arr_9 [i_3]) ? (arr_14 [i_3]) : 18446744073709551592))) ? ((((arr_4 [i_3]) ? 1 : var_2))) : var_12)) : (((var_2 >> (((max(9337849744966507729, 128)) - 9337849744966507704)))))));
        var_22 &= 128;
        arr_16 [i_3] = (((((((((arr_14 [i_3]) ? 1 : var_14))) ? (((!(arr_14 [i_3])))) : (((arr_14 [i_3]) ^ 48))))) ? (arr_13 [i_3]) : ((((10 + 248) <= 1285415532)))));
        arr_17 [i_3] = 83;
    }
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        arr_22 [i_4] = 3009551742;
        var_23 = (max(((((((240 || (arr_3 [i_4])))) <= -255))), ((-((1 ? 8 : 6681471487927374356))))));
        var_24 = ((((((3746321942 ? 1 : 2808918454)) ? ((3009551776 ? 1 : 4263458210)) : (arr_14 [i_4])))));
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                {
                    var_25 = (max(var_25, (((var_7 ? 3422724608 : 1392833500)))));
                    arr_31 [6] [i_5 + 1] [i_6] [i_7] = 180;
                }
            }
        }
        arr_32 [i_5] [i_5 + 1] = (~4294967295);
    }
    #pragma endscop
}
