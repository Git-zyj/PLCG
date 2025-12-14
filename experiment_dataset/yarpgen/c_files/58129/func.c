/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58129
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
        {
            var_20 |= ((/* implicit */unsigned char) arr_0 [9LL]);
            var_21 = ((/* implicit */unsigned short) 5242423308824416601LL);
        }
        for (short i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
        {
            var_22 += ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_4 [i_0])))) / (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_2])))));
            arr_6 [i_0] = ((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned char)34)))), (((((/* implicit */_Bool) (unsigned short)51045)) ? (-10) : (((/* implicit */int) (unsigned char)57))))));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50198))))), (((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [1LL]))) : (5242423308824416625LL))))));
    }
    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */short) 5242423308824416616LL);
        arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3] [i_3])) / (((/* implicit */int) arr_2 [i_3]))))) ? (((/* implicit */long long int) (+(var_12)))) : (min((((((/* implicit */_Bool) 2112933309U)) ? (((/* implicit */long long int) var_16)) : (5242423308824416634LL))), (-1233143058006654602LL)))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    for (signed char i_7 = 3; i_7 < 20; i_7 += 3) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned char) ((unsigned long long int) arr_23 [(signed char)22] [(signed char)22] [(signed char)22] [i_4] [i_7]));
                            arr_24 [i_3] [i_7] = ((/* implicit */unsigned char) -5242423308824416617LL);
                        }
                    } 
                } 
            } 
            arr_25 [i_4] = ((/* implicit */short) ((unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2182033986U)) ? (((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4] [i_3] [i_3] [i_4])) : (((/* implicit */int) (signed char)-85))))) / (2305842459457880064LL))));
        }
        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            arr_28 [i_8] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_8])) ? (((unsigned int) (unsigned char)238)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_8] [i_3])))))) ? (((/* implicit */int) ((var_10) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) var_8)))))))) : (((/* implicit */int) (short)-5470))));
            var_24 = max((((/* implicit */long long int) (unsigned char)255)), (-5242423308824416626LL));
            arr_29 [i_8] = ((/* implicit */unsigned int) ((short) ((signed char) arr_9 [i_3])));
            var_25 = ((/* implicit */unsigned int) var_11);
            /* LoopSeq 2 */
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    for (long long int i_11 = 2; i_11 < 19; i_11 += 4) 
                    {
                        {
                            arr_39 [i_11] [i_8] [i_11] |= ((/* implicit */long long int) ((short) (~(((/* implicit */int) var_14)))));
                            arr_40 [i_9] = ((((/* implicit */_Bool) ((long long int) min((1233143058006654601LL), (((/* implicit */long long int) arr_22 [i_3] [i_3] [i_3] [i_3] [i_9] [i_10] [i_9])))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_11 + 4] [i_11 + 4] [i_11] [i_11] [i_11 + 2] [i_11] [i_9]))) : (((((/* implicit */_Bool) (signed char)112)) ? (-5242423308824416604LL) : (-7190615362499627075LL))))) : (((((/* implicit */_Bool) ((arr_20 [13LL] [i_8] [i_9] [7LL] [i_9]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_9])))))) ? (max((((/* implicit */long long int) (signed char)127)), (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [(unsigned char)20] [i_8] [i_8] [(unsigned char)20] [i_8] [(unsigned short)14] [i_9])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_19 [(unsigned short)4] [i_3]))))))));
                        }
                    } 
                } 
                var_26 ^= ((/* implicit */signed char) var_11);
                /* LoopSeq 3 */
                for (int i_12 = 0; i_12 < 23; i_12 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */long long int) var_14);
                    arr_44 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) arr_4 [i_12]);
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
                {
                    var_28 &= ((/* implicit */short) ((unsigned int) arr_20 [i_13] [i_9] [i_8] [i_3] [i_3]));
                    arr_47 [i_13] [i_9] [(unsigned short)7] [i_8] [i_9] [i_3] = ((/* implicit */signed char) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9] [i_8] [i_9] [i_9] [(signed char)4]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [22LL] [i_9] [i_8] [i_3]))) - (var_16)))));
                }
                for (int i_14 = 0; i_14 < 23; i_14 += 4) /* same iter space */
                {
                    arr_51 [i_9] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_3] [(signed char)15] [i_9] [i_9])) && (((/* implicit */_Bool) (unsigned short)18))))), (arr_27 [i_3] [i_3] [i_9])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_53 [i_3] [(unsigned char)5] [i_3] [i_3] [(unsigned char)5])) % (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)252))))));
                        arr_55 [i_3] [i_3] [i_3] [6] [i_14] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18))) : (arr_15 [i_15 + 2] [i_15 + 2])));
                    }
                }
            }
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_9 [i_16 + 1])), (arr_26 [i_16] [i_16 + 1] [i_16])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_35 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16] [i_8])) : (((/* implicit */int) arr_26 [i_16] [i_16 + 1] [i_16]))))) : (min((2220317212U), (((/* implicit */unsigned int) arr_53 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1]))))));
                arr_59 [i_3] [i_8] [i_8] [i_16] = ((/* implicit */unsigned char) min((2074650080U), (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (min((((/* implicit */unsigned int) (signed char)32)), (2020462164U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_16 + 1] [i_8] [i_16 + 1] [i_16] [i_16 + 1])))))));
                var_31 = ((/* implicit */unsigned char) var_15);
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (min((max((((/* implicit */unsigned long long int) (unsigned short)42141)), (arr_56 [i_3] [i_3] [i_3]))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) (signed char)28)))))))));
                var_33 += ((/* implicit */unsigned short) var_14);
            }
        }
    }
    var_34 = min((var_15), (((/* implicit */unsigned int) var_11)));
    var_35 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), ((+((~(var_0)))))));
}
