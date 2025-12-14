/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (min((!1368857137), (min((arr_9 [i_0 + 1] [i_1 - 1] [9] [i_3]), (arr_0 [i_3])))));

                            for (int i_4 = 3; i_4 < 15;i_4 += 1)
                            {
                                var_15 ^= 62;
                                var_16 += (max(((-51 ? (arr_13 [i_0] [i_1] [12] [i_2] [i_3] [13]) : 2256591996002377489)), 4122395911176596958));
                            }
                        }
                    }
                }
                var_17 += 2130706432;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    arr_23 [i_5] [i_6] [i_7] [i_7] = 1445655902030384613;
                    var_18 = (((((((var_13 ? (arr_20 [i_5]) : 18446744073709551615)) | (((25 ? 1271810875 : 515820795)))))) ? (((((((56 | (arr_18 [i_5])))) || var_2)))) : 16));
                    arr_24 [i_5] [i_6] = (max(var_2, (arr_18 [i_5 - 2])));
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_19 = ((52 | ((((1152921504606846976 >> (((arr_21 [i_8]) - 7877207092167023539))))))));
                    var_20 = ((-(-957960262 >= 29)));

                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {

                        for (int i_10 = 3; i_10 < 23;i_10 += 1)
                        {
                            var_21 *= (arr_22 [i_9 + 3] [i_5 - 1]);
                            var_22 = (((arr_26 [i_9 + 1]) ? (arr_21 [i_5 - 3]) : (arr_26 [i_9 - 2])));
                        }
                        for (int i_11 = 3; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, ((((5521163500209726980 ? 8504499667345408885 : 1))))));
                            var_24 = (((-60 | 7507103471174208447) << ((((var_4 ? 223 : (arr_17 [i_5]))) - 172))));
                        }
                        for (int i_12 = 3; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_25 = ((-((-459791243 ? var_8 : (arr_20 [i_12])))));
                            var_26 *= ((-1906 ? 524213573 : (arr_34 [i_6] [i_8] [i_9 + 3] [i_12] [i_12] [i_12 - 3])));
                        }
                        arr_36 [i_5] [i_5] [i_5] [i_9] = (((arr_29 [i_5] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 + 1] [i_5]) | (0 || 0)));
                        arr_37 [i_5] = (((arr_27 [i_9 + 1] [i_6] [11] [i_9]) ? ((-(arr_33 [i_5] [i_5] [i_5 - 2] [i_5] [i_5] [i_5] [11]))) : 1));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            {
                                arr_44 [i_5] [i_6] [i_8] [i_13] = (((((-((max(-35, -55)))))) ? (max((((arr_28 [i_6] [i_8]) ? 1309414777 : (arr_21 [i_13]))), -3653348919)) : (((max(1, (arr_30 [i_14] [i_13] [i_8] [i_6] [i_5])))))));
                                var_27 = arr_25 [i_6] [i_13] [i_14];
                            }
                        }
                    }
                }
                var_28 *= (max((((var_0 | 3029114947) ? 82 : 2560167998)), (((((max(var_3, 73))) ? ((1 | (arr_18 [18]))) : (arr_17 [i_5]))))));
            }
        }
    }
    #pragma endscop
}
