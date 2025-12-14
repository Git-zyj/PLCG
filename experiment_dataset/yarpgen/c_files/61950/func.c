/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61950
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
    var_12 = ((/* implicit */int) ((33554431LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-10)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0]) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) (signed char)8)))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | (((/* implicit */int) (signed char)10))));
    }
    for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        var_16 = ((/* implicit */_Bool) (signed char)-10);
        var_17 = ((/* implicit */unsigned char) min((min((min((((/* implicit */short) (signed char)-10)), (var_2))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_2] [(short)5]))))))), (((/* implicit */short) ((signed char) arr_7 [i_2 + 2] [i_2 + 1])))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_2]);
        var_18 = (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2 + 2]))))) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_6 [i_2])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(4131812722U))))));
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) var_2);
                arr_15 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_8))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (33554416LL))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [(unsigned short)0] [(unsigned char)13] [(unsigned short)9])) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) var_0))));
            }
            var_22 = ((/* implicit */int) (+(255ULL)));
            /* LoopSeq 4 */
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
                arr_18 [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)21237)) ? (65535LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-15)))));
                var_24 = var_1;
                var_25 &= ((/* implicit */unsigned int) ((var_10) + (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_1))))));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) -33554416LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_1)))))));
            }
            for (short i_6 = 2; i_6 < 18; i_6 += 3) 
            {
                var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2 + 2] [i_2 + 2] [i_3 + 1])) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) var_2))));
                arr_21 [i_2] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-15)) || (((/* implicit */_Bool) arr_7 [i_3] [i_6])))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) != (469762048)))) : (((arr_10 [i_3]) / (((/* implicit */int) var_0))))));
                var_28 -= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2 + 2] [i_2 + 2] [i_2] [i_2]))))) | ((-(((/* implicit */int) arr_6 [i_2]))))));
                var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                var_30 = ((/* implicit */short) var_4);
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_31 = ((/* implicit */int) (-(-5728175153282296659LL)));
                /* LoopSeq 4 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    var_32 = ((/* implicit */_Bool) (~((-(-2652387976119937950LL)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 4; i_9 < 17; i_9 += 4) 
                    {
                        var_33 = ((/* implicit */long long int) max((var_33), ((+(((((/* implicit */_Bool) var_2)) ? (-33554416LL) : (((/* implicit */long long int) ((/* implicit */int) (short)14391)))))))));
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_8 + 1])) ? (((/* implicit */int) arr_16 [i_2 - 2] [i_8 + 1] [i_2])) : (((/* implicit */int) var_6))));
                        arr_31 [i_2] [i_3] [i_3] [i_7] [4] [i_9 - 2] [i_9] = ((/* implicit */unsigned char) ((-33554416LL) % (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
                        arr_32 [i_2] [11ULL] [i_7] [i_8] [i_9 - 4] = ((unsigned int) var_9);
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */_Bool) arr_14 [i_3 + 2] [i_3 - 1] [0ULL]);
                    var_36 |= ((/* implicit */signed char) ((_Bool) arr_12 [i_3] [i_7] [i_3]));
                }
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                {
                    var_37 = ((/* implicit */_Bool) arr_11 [i_2]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 2) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) arr_25 [i_7] [(short)15] [i_7]);
                        arr_39 [i_2] [i_3] [(short)20] |= ((/* implicit */signed char) arr_19 [i_2 + 1]);
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */int) ((signed char) var_3));
                        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */_Bool) -147783132)) ? (5728175153282296659LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7] [i_7] [i_7]))))))));
                        arr_42 [i_3] &= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_37 [20] [i_3] [(unsigned char)4] [i_11] [i_13 - 1])) : (arr_29 [i_2] [i_3 + 2] [i_7] [i_11] [i_3] [i_13])))));
                    }
                    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) arr_37 [i_2] [i_2] [(_Bool)1] [i_7] [i_2])))) : (((/* implicit */int) var_11))));
                }
                for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned long long int) (unsigned char)255);
                    arr_45 [i_2] [i_3 + 2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_7] [i_14] [(unsigned char)8] [i_2] [2ULL])) ? (((/* implicit */int) (unsigned short)22444)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_1)) : (arr_10 [i_3 - 1])));
                    var_43 = ((/* implicit */unsigned char) ((((long long int) (signed char)-117)) >= (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
                }
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_16 = 2; i_16 < 17; i_16 += 1) /* same iter space */
                {
                    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_15] [i_3] [i_15] [i_16 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))));
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 3; i_17 < 18; i_17 += 2) 
                    {
                        var_45 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                        var_46 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_34 [(short)6] [i_3] [i_16])) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) arr_12 [i_3] [(unsigned short)0] [i_3])))) | (((/* implicit */int) var_3))));
                        arr_56 [i_2] [i_3] [i_2] [i_16 + 3] [4U] = (short)21500;
                        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) var_1))))));
                        var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4032U)) ? (((/* implicit */int) arr_20 [i_2])) : (((/* implicit */int) var_9))));
                    }
                    /* LoopSeq 3 */
                    for (short i_18 = 2; i_18 < 18; i_18 += 4) 
                    {
                        var_49 = ((/* implicit */short) var_5);
                        var_50 = ((/* implicit */signed char) ((unsigned short) arr_6 [i_18]));
                    }
                    for (unsigned short i_19 = 0; i_19 < 21; i_19 += 1) 
                    {
                        var_51 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_6))));
                        var_52 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) < (((((/* implicit */_Bool) (short)-14390)) ? (((/* implicit */int) arr_41 [i_2] [i_16 + 4] [i_2])) : (((/* implicit */int) var_1))))));
                    }
                    for (int i_20 = 0; i_20 < 21; i_20 += 2) 
                    {
                        var_53 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_61 [i_20] [i_3 + 1] [i_2 + 1] [i_16] [i_16]))));
                        var_54 = ((/* implicit */short) arr_63 [i_2 + 2] [i_16 + 3]);
                    }
                }
                for (long long int i_21 = 2; i_21 < 17; i_21 += 1) /* same iter space */
                {
                    var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-14373))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)41)))) : (((int) var_6))));
                    var_56 += ((/* implicit */short) var_5);
                    var_57 = ((/* implicit */unsigned int) ((long long int) arr_6 [i_21 - 2]));
                }
                for (long long int i_22 = 2; i_22 < 17; i_22 += 1) /* same iter space */
                {
                    arr_70 [i_2] [i_3] [(signed char)19] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_2 + 2]) : (arr_10 [i_2 + 2])));
                    var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_2] [i_3] [i_2] [(_Bool)1])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (short)14373))))) : ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_50 [i_22]))))));
                }
                var_59 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)38321)) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) arr_52 [i_3]))))));
                var_60 = ((/* implicit */int) (unsigned short)38320);
                var_61 = ((/* implicit */signed char) (-(((((/* implicit */int) var_1)) - (var_8)))));
            }
            var_62 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_46 [7U] [i_3] [13LL] [i_3 - 1]))));
        }
    }
    var_63 = ((/* implicit */long long int) max((var_63), (((/* implicit */long long int) max(((~(((/* implicit */int) var_9)))), (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)29387)))), (((/* implicit */int) var_4)))))))));
}
