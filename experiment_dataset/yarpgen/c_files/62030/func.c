/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62030
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 |= ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)1))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_1)))) >> (((((/* implicit */int) var_7)) - (47684))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)22)) || (((/* implicit */_Bool) (short)1)))))) >= (var_4))) || (max(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) (unsigned short)65525))))))));
            var_18 = ((((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2 + 1])) || (((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2 - 3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_2] [(short)1] [i_2 + 1])) : (((/* implicit */int) var_5))))) : (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_3))));
            arr_8 [i_2] = ((/* implicit */_Bool) var_11);
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_12 [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1])) + (((((/* implicit */_Bool) (+(((/* implicit */int) (short)8))))) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) var_12))))));
            var_19 = ((/* implicit */unsigned short) (-(((((((((/* implicit */_Bool) arr_6 [i_1] [i_3])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) + (9223372036854775807LL))) >> (((/* implicit */int) var_0))))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            arr_15 [i_1] [i_1] [(_Bool)1] = ((/* implicit */short) (unsigned short)22);
            var_20 = var_4;
            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))));
            var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */int) (_Bool)1)) < (((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) (short)-8)) : (((/* implicit */int) (short)-13873))))))));
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (((((/* implicit */unsigned long long int) var_4)) % (arr_18 [13LL] [i_5])))));
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_8))));
                    arr_23 [i_1] [(unsigned char)1] [i_5] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_6] [15LL] [i_1])))))));
                    var_25 *= ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1 - 2] [i_1 - 3] [i_1 - 3] [i_1] [i_1 - 2]))) : (var_3));
                }
                for (long long int i_7 = 4; i_7 < 18; i_7 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_27 [i_7 + 1] [i_1 + 2] [i_1]))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [i_1 + 2] [i_1 - 1] [i_7 - 1] [i_7 - 1])) + (((/* implicit */int) arr_25 [i_1 + 2] [i_1 + 2] [i_7 - 1] [i_7 - 3]))));
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */int) (short)-4)) + ((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)29435)))))))));
                }
                for (long long int i_8 = 4; i_8 < 18; i_8 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) (unsigned short)23);
                    arr_31 [14LL] [15ULL] [i_5] [14LL] &= ((/* implicit */unsigned char) ((4509098548786514010LL) - (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_1] [i_1 - 2] [i_1] [i_1 + 2])) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) var_2))));
                        arr_35 [10ULL] [(unsigned short)12] [(_Bool)1] [(unsigned short)12] [(_Bool)1] = arr_29 [i_1 + 2];
                    }
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        arr_40 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65506)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_10] [i_4] [(unsigned short)15]))))) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (13352473516550771512ULL)))));
                        arr_41 [i_10] [i_8 - 4] [i_5] [(unsigned char)13] [i_1 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)12))));
                        arr_42 [(unsigned char)13] [i_4] [i_4] [i_5] [i_8 - 3] [i_8] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_1 + 2] [i_8 - 4] [i_8 + 1]))));
                        var_31 = ((/* implicit */unsigned short) var_0);
                        arr_43 [i_1] [i_4] [(unsigned char)15] [i_8] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) & (((/* implicit */int) arr_33 [i_1] [i_4] [i_5] [(unsigned char)2] [i_1] [i_5])))) | (((/* implicit */int) arr_36 [i_1] [i_4] [(unsigned char)10] [i_1 - 3] [i_10] [i_4] [i_8 - 2]))));
                    }
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1 - 2])) ? (((/* implicit */int) arr_13 [i_1 - 2])) : (((/* implicit */int) arr_13 [i_1 - 2]))));
                }
                for (long long int i_11 = 4; i_11 < 18; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 2; i_12 < 16; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) -2217660055414584373LL))));
                        arr_50 [i_1] [i_4] [i_1] [i_5] [i_11] [i_11] = ((/* implicit */unsigned short) arr_45 [i_4] [i_4]);
                        arr_51 [i_1] [i_4] [i_5] [i_4] [i_11] [i_5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & ((~(((/* implicit */int) (unsigned short)14))))));
                        var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_5))))));
                        arr_54 [i_13] [i_1 - 2] [i_1 - 1] [(_Bool)1] [i_11] = ((/* implicit */unsigned char) var_8);
                        arr_55 [i_1 - 1] [i_4] [i_11] [9ULL] [i_13] = (short)-2;
                        var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        var_37 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_20 [0LL] [i_1 + 2] [i_1 - 2] [i_11 - 1] [i_11 - 1]))));
                    }
                    var_38 = ((/* implicit */unsigned char) var_5);
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [(_Bool)1] [(unsigned char)8]))) : (var_3))) : (((/* implicit */unsigned long long int) var_9))));
                }
            }
            for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                var_40 = ((/* implicit */long long int) ((((unsigned long long int) var_3)) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                var_41 = ((/* implicit */unsigned short) ((18446744073709551583ULL) & (134217727ULL)));
            }
        }
    }
    var_42 = ((/* implicit */_Bool) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) - (var_3))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) > (min((7766814776108576692ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
    var_43 *= var_7;
}
