/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (max(var_2, (~-16)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [1] = ((var_9 ? 1464323589 : (var_15 || 14)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 ^= (arr_3 [i_1] [i_4]);
                                var_21 = (arr_2 [i_0] [i_1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_5 - 1] [i_6] = 1;
                                var_22 += (min(605188140, ((((((arr_11 [4] [i_6] [i_6] [4]) ? 2830643700 : 1464323610))) ? ((6491 ? var_13 : (arr_4 [i_0 - 2] [i_1 - 2] [i_1 - 2]))) : var_8))));
                                arr_20 [i_0] [i_5 - 1] [i_0] = 42500;
                            }
                        }
                    }
                    arr_21 [i_0] = ((!(var_6 * 2)));
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                {
                    var_23 = (+-1);
                    arr_24 [i_0 + 1] [i_1] [i_0] = (!(arr_2 [i_0] [i_1]));
                    arr_25 [i_0] [i_1] [i_7] = ((-7 && (((-(arr_14 [i_0] [i_1 - 1] [i_1 - 1]))))));
                    var_24 = (max(var_24, ((((arr_16 [i_0] [i_0] [i_0 + 2] [i_0] [0] [i_7]) < (min((~1809159570), (var_4 <= -32))))))));
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    arr_30 [i_0 - 1] [i_0] [1] [i_8] = ((206 ? 1632275991 : 1));
                    var_25 = (max(var_25, (((-1632275993 ? (3 - var_5) : (((arr_26 [i_0 - 1] [i_0 - 3]) ? (arr_4 [i_0] [i_0 - 3] [i_1 - 2]) : var_4)))))));
                    var_26 ^= (min(((-1632276012 ? (28 - 1809159573) : 1809159545)), 1464323612));
                    var_27 = (~2830643694);
                    var_28 = (((((var_6 ? -5920672254362222967 : 39734)))) ? ((~(arr_4 [18] [i_0 + 2] [i_1 - 1]))) : ((((1 ? 1 : -11)))));
                }
                var_29 = (max(var_29, ((((((((621054007 ? -1632275993 : -714460946799017240))) || var_8)) ? ((170 ? 9882 : var_2)) : (max((((31744 < (arr_15 [i_0 - 3])))), var_17)))))));
            }
        }
    }
    #pragma endscop
}
