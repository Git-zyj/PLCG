/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = ((-127 ? 169 : ((var_4 ? ((max(-81, -90))) : var_11))));
                                var_19 += ((~((((1 ? 1 : 64)) << (((~1) + 22))))));
                            }
                        }
                    }
                    var_20 = (((min(8128, (arr_3 [i_0]))) - ((((var_0 ? (arr_13 [16] [i_1] [i_2] [1] [i_1] [20]) : 1023))))));
                }

                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_21 = ((1 ? ((-(~var_14))) : (min(-1023, (((var_10 == (arr_2 [1]))))))));
                                var_22 = ((min(var_12, -9223372036854775798)));
                                var_23 |= (((((~(!var_12)))) ? (219 >= -1016) : var_2));
                                var_24 &= (!120);
                            }
                        }
                    }
                    var_25 = ((((-4814724406764416805 + ((1 ? 130048 : var_7)))) == (((-64 ? 216172782113783808 : 139)))));
                    var_26 &= min((-4294967295 - 4), ((min(-89, 15))));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_27 = (((((4294967285 ? var_1 : (arr_12 [i_0] [i_0] [4] [i_8])))) || ((((arr_12 [i_0] [i_1] [i_0] [21]) ? 1 : (arr_12 [i_0] [17] [i_8] [i_8]))))));
                    arr_24 [11] [i_1] [14] = (~1);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_31 [13] [i_9] [i_8] [i_0] [i_0] |= ((!((max(138, (arr_0 [i_10 - 2] [i_10 + 2]))))));
                                arr_32 [13] [i_9] [1] [16] [7] [7] [12] &= (((~192) ? (((((~var_5) + 2147483647)) << (var_1 - 93))) : (!37)));
                                var_28 += (((var_9 % var_16) ? (var_14 > 1) : (((((max(27, 1))) >= ((var_16 ? 67 : var_8)))))));
                            }
                        }
                    }
                    arr_33 [1] [1] [i_8] = -2694061621818375970;
                }
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    arr_36 [i_0] [1] [1] = 66;
                    var_29 = max((((((-6262393395937267360 ? 1 : 12))) / 3739120854230368814)), (((28 ? -1013 : (((var_9 >> (1531989240 - 1531989236))))))));
                }
            }
        }
    }
    var_30 = ((!(((1 ? 116 : 66)))));
    var_31 = (var_2 / -var_10);
    #pragma endscop
}
