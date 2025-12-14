/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_15;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (((((((32768 ? 1 : var_6))) ? var_15 : ((var_10 << (32784 - 32747))))) == ((((max((arr_6 [5] [i_0] [i_2] [i_2]), var_15))) ? 4395899027456 : (arr_4 [i_0 + 2] [0] [i_0 + 2] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_0] [5] [i_0] [3] = (((max(1, ((127 ? var_15 : 0)))) >> (((!(arr_2 [i_0] [0]))))));
                                var_21 = (max(var_21, (((123145302310912 & (min(18446744073709551612, 0)))))));
                                var_22 = ((~((15524355900431945596 ? (arr_11 [i_0 + 1] [i_0 + 1] [i_3] [i_3]) : (max(10637, (arr_2 [i_0] [i_3])))))));
                                arr_13 [i_4] [i_0] [i_2] [i_0] [i_0] = 32767;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_23 = -var_8;
                                var_24 = ((~((((arr_14 [3] [3] [i_0] [i_0 - 1]) > (arr_14 [8] [i_1 + 1] [i_0] [i_0 + 2]))))));
                                arr_19 [i_5] [i_5] [i_0] [i_2] [i_0] [1] [i_0 + 2] = (max(((~(arr_14 [i_6] [i_0] [i_0] [i_0]))), var_18));
                            }
                        }
                    }
                    var_25 = (arr_1 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 8;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_26 = 8960426486598005103;
                                var_27 = ((((min(3, (((arr_0 [i_8]) ? (arr_14 [i_0 + 1] [i_0] [i_8] [i_0]) : (arr_0 [i_8])))))) ? (arr_8 [i_8 - 2] [6] [i_2] [i_2] [i_8]) : (((min(32658, ((min((arr_15 [i_8]), (arr_18 [i_8] [i_1 - 1] [i_7] [i_7 - 1] [i_8 - 2]))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (((var_13 ? (var_3 / var_6) : ((min(-32, 1))))));
    var_29 = var_11;
    var_30 = var_5;
    #pragma endscop
}
