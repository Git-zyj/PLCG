/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (arr_3 [i_0]);
        arr_4 [10] = (min((((arr_0 [i_0] [i_0]) >> (-1835345175 + 1835345197))), (((!(arr_0 [i_0] [i_0]))))));
        var_14 |= var_6;
    }
    var_15 = (max((max(32766, var_10)), (((1835345175 <= ((var_2 ? var_8 : var_8)))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            {
                var_16 *= (4294967266 <= var_11);
                arr_11 [4] [i_1] [i_2] &= (((arr_9 [i_2 - 1] [12] [i_2 - 1]) + ((max(1835345174, -1835345175)))));

                /* vectorizable */
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    var_17 = (-1835345175 | var_8);
                    var_18 = (arr_8 [i_2 + 1] [i_3 - 1]);
                    var_19 *= (arr_8 [i_1] [i_1]);
                }
                var_20 ^= ((max(-var_8, ((18446744073709551599 ? var_5 : 970875710761190775)))));
            }
        }
    }
    var_21 = ((-var_6 ? (--1835345189) : ((max(88, 88)))));
    #pragma endscop
}
