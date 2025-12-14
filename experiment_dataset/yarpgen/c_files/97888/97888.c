/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (var_6 % var_5);
        var_17 = var_13;
        arr_3 [i_0] [i_0] = var_15;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_18 = (min(var_18, (var_4 != 9)));

                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_19 = var_13;
                        var_20 += var_12;
                        arr_13 [5] [i_4] [i_2] [i_4] [i_1] = (((var_1 + 2147483647) >> (2700190912 - 2700190885)));
                        arr_14 [i_4] [i_4] [i_4] [i_1] = ((-((var_15 ? var_11 : 18446744073709551606))));
                    }
                    var_21 = (max(var_21, (~var_13)));
                    var_22 = (max(var_22, var_1));
                    var_23 |= 18446744073709551606;
                }
            }
        }
        var_24 = 879762773;
        var_25 = var_1;
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 15;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_26 = (((--3415204522) * var_7));
                            arr_30 [8] [14] [i_5] = ((~(((min(var_13, var_2)) & ((min(var_8, var_14)))))));
                            var_27 = 598176079;
                            arr_31 [i_5] [i_5] [i_5] [i_7] [i_8] [i_8] [i_5] = (max(11452825047191325601, 879762773));
                            arr_32 [i_5] [i_5] [i_5] [i_5] = ((-(min((~255), var_8))));
                        }
                        for (int i_10 = 1; i_10 < 14;i_10 += 1)
                        {
                            var_28 = 12983676996789368707;
                            arr_37 [0] [4] [4] [i_8] |= 255;
                            var_29 = 22433;
                            var_30 ^= (((var_14 + var_13) ? var_12 : (min(((var_14 ? var_5 : var_0)), (max(12983676996789368707, 1508700064))))));
                        }
                        arr_38 [i_6] [i_5] [i_5] [i_5] = ((((((!(!var_2))))) & (max(var_11, var_9))));
                        arr_39 [i_5] = var_8;
                    }
                }
            }
        }
        var_31 += (min(18446744073709551606, ((var_9 ? (min(18040445751235625919, 4539184328557581808)) : (max(var_9, 406298322473925697))))));
    }
    var_32 = ((74 ? (min(1046745218, 1)) : (!var_9)));
    #pragma endscop
}
