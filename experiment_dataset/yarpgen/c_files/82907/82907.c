/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = (max((var_2 || 9223372036854775807), var_13));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((var_4 ? ((-(max(2248587450, -1901363350585494131)))) : (127 - -127)));
        var_19 = (min(var_19, -53544048));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (arr_6 [i_1] [i_1]);
        var_21 = ((-(~65535)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 7;i_4 += 1)
                {
                    {
                        arr_14 [0] [0] [0] &= (((0 ? ((((-103 || (arr_5 [i_4])))) : (arr_8 [i_1])))));
                        var_22 = ((126 ? (arr_2 [i_4 - 2]) : (arr_7 [i_2] [i_4 - 2] [i_2])));
                    }
                }
            }
        }
    }
    var_23 = 24;
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_24 = (max(201, ((((arr_19 [i_6]) >= (arr_15 [i_5 + 2] [i_5 + 2]))))));
                var_25 &= (max(((max((arr_16 [i_5 - 1]), (arr_16 [i_5 + 2])))), (((arr_18 [i_5 - 1]) ? 4294967271 : 16113))));
            }
        }
    }
    #pragma endscop
}
