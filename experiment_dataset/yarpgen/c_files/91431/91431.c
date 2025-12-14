/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 4095;
    var_21 |= (~4464864479362111928);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_22 = (arr_1 [i_0]);
                    arr_7 [i_1 - 1] [i_0] = 4294967292;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_23 += ((~(((arr_4 [i_0]) ? 18446744073709551609 : (arr_4 [i_0])))));
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] = (+-0);
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2] [i_0] = ((((((!230) + (arr_5 [i_0])))) ? ((((arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]) > 20824))) : (((!((((arr_4 [i_2]) ? 86 : 267144980))))))));
                    arr_14 [i_0] [i_2] [i_0] = (arr_8 [i_0] [i_0] [i_2] [i_2]);
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_24 = (min(var_24, (arr_0 [7] [5])));
                    arr_19 [i_0] [i_1] [i_0] = (arr_2 [i_1 - 1]);
                    arr_20 [i_0] [i_0] = ((((((arr_11 [i_1 + 1] [i_1 - 1] [i_5] [i_1] [9]) ? 13517652975792233944 : 1550844715))) ? (((arr_0 [i_5] [i_0]) ? (~0) : (arr_17 [12] [i_1] [i_1] [i_1 - 1]))) : ((-((~(arr_17 [11] [i_0] [i_1 + 1] [i_5])))))));
                }
                arr_21 [i_0] [i_0] = (arr_0 [i_1] [i_0]);
                var_25 *= (arr_8 [i_0] [i_0] [i_1] [1]);
            }
        }
    }
    #pragma endscop
}
