/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83077
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_13 += ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)8])) ? (2147483647LL) : (var_1)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)32272)))))));
        arr_3 [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) (unsigned short)16383);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (unsigned short)16380)) | (((/* implicit */int) arr_11 [i_0] [i_1])))) : (((/* implicit */int) arr_8 [i_3 + 3] [i_3 + 3]))))) ? (((/* implicit */long long int) ((int) (~(var_4))))) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) arr_2 [i_4]))))) ? (min((72057594037927935LL), (-7986315513200360154LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4] [i_2])) & (((/* implicit */int) var_7)))))))));
                                arr_13 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -72057594037927935LL)) ? (72057594037927935LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_0] [(unsigned short)4] [i_2] [i_5]))));
                        arr_16 [i_0] [i_0] [(signed char)5] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_0]))) : (((((/* implicit */int) var_11)) % (((/* implicit */int) arr_1 [(unsigned char)2])))));
                        arr_17 [0LL] [i_1] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
                        arr_18 [i_1] [(short)6] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_4 [i_2] [i_1] [i_0]);
                    }
                    arr_19 [(unsigned short)1] [i_1] [i_0] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_0] [i_0]))) ? (((/* implicit */int) min(((unsigned short)31921), ((unsigned short)49150)))) : (((/* implicit */int) ((signed char) (unsigned short)16383)))))) : (var_8));
                }
            } 
        } 
        arr_20 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) var_6))) + (((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (unsigned short)16386)))))) == (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0]))) : ((~(((/* implicit */int) arr_2 [i_0]))))))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_17 = ((/* implicit */int) ((signed char) (~((-(1516308683U))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    for (unsigned int i_9 = 2; i_9 < 8; i_9 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) arr_26 [(_Bool)1] [(unsigned char)8] [i_7] [i_7] [i_7] [i_7]);
                            arr_30 [i_7] [i_8] [i_0] [i_6] [i_7] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-47))));
                            arr_31 [i_0] [2] [2] [i_7] [i_9 + 3] = ((/* implicit */unsigned char) ((int) arr_27 [i_7] [i_6] [i_0] [i_8] [(short)7] [7]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        {
                            arr_39 [i_11] [i_7] [i_7] [i_6] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) arr_14 [(signed char)0] [i_6])) : (((/* implicit */int) (signed char)-102))))) ? (((/* implicit */int) (unsigned short)49145)) : ((+(((/* implicit */int) arr_11 [i_0] [i_0]))))));
                            arr_40 [i_7] [i_6] [i_7] = ((((((/* implicit */int) var_5)) >= (((/* implicit */int) (signed char)84)))) ? (((((/* implicit */_Bool) (unsigned short)49178)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])));
                        }
                    } 
                } 
            }
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        {
                            arr_50 [i_13] [i_13] = ((/* implicit */int) ((long long int) ((850468495160488621LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))))));
                            var_19 = min((((/* implicit */int) var_6)), (((((/* implicit */int) (unsigned char)242)) - (((/* implicit */int) (unsigned char)246)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    var_20 = ((/* implicit */signed char) arr_10 [i_0] [i_6] [i_0] [i_6] [i_15]);
                    arr_53 [(unsigned char)4] [(unsigned short)2] [i_6] [(short)5] [(unsigned short)2] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15048)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_22 [i_0]))))) ? ((-(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) var_9)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        var_21 ^= ((/* implicit */int) arr_47 [i_16] [(short)5] [i_6] [i_0]);
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_51 [i_0] [i_16] [i_12] [i_16])) : (((/* implicit */int) var_9))));
                        arr_56 [i_0] [i_6] [i_12] [(short)8] [i_15] [(short)8] [(short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_21 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)16400)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_24 [i_6] [(unsigned char)2] [i_15]))))) : (((long long int) arr_38 [i_0] [i_15] [i_12] [i_15] [i_16]))));
                    }
                }
                arr_57 [6LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)96))) % (72057594037927946LL)))) ? (min((((/* implicit */long long int) arr_32 [i_12] [i_12] [i_12] [i_12] [i_6])), (var_1))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)47166)) / (((/* implicit */int) (signed char)-107)))))))) ? (((/* implicit */int) min((var_2), (var_3)))) : (min((arr_44 [i_0] [i_0] [i_12] [i_12]), (arr_44 [i_12] [i_12] [i_12] [i_12])))));
                arr_58 [i_0] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((((/* implicit */int) arr_0 [(unsigned char)5])) - (((/* implicit */int) var_5)))) : (((/* implicit */int) ((arr_52 [i_0] [i_6] [i_6] [i_0] [i_6] [(_Bool)1]) < (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_12]))))))))) ? ((+(min((2305843009213693951LL), (((/* implicit */long long int) var_2)))))) : (min((((/* implicit */long long int) ((unsigned char) var_5))), (((long long int) var_5)))));
            }
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_23 = ((/* implicit */signed char) (~(min((528077334), (((/* implicit */int) (signed char)-1))))));
                        arr_65 [i_18] [i_18] [i_17] [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2370992899U)) ? (6581952234606009221LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)55)))))) ? (((/* implicit */int) arr_48 [i_0])) : (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        }
    }
    for (signed char i_19 = 0; i_19 < 23; i_19 += 2) /* same iter space */
    {
        var_24 -= ((/* implicit */unsigned short) (~(min((((((/* implicit */long long int) ((/* implicit */int) arr_68 [(unsigned short)6]))) ^ (var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_67 [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_19]))))))))));
        var_25 *= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_66 [i_19])) : (((/* implicit */int) (unsigned char)254)))));
    }
    for (signed char i_20 = 0; i_20 < 23; i_20 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_21 = 0; i_21 < 23; i_21 += 1) 
        {
            for (long long int i_22 = 4; i_22 < 20; i_22 += 2) 
            {
                {
                    arr_75 [(_Bool)1] [i_21] [i_21] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)139)))), ((-(((/* implicit */int) var_9))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)24080)) ? (((/* implicit */int) arr_73 [i_20] [(signed char)8])) : (((/* implicit */int) var_9))))))));
                    var_26 = ((/* implicit */int) var_10);
                    /* LoopSeq 2 */
                    for (int i_23 = 0; i_23 < 23; i_23 += 2) 
                    {
                        arr_78 [i_23] [i_23] [i_21] = ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) (~(var_10))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                        var_27 -= ((/* implicit */_Bool) ((short) ((unsigned short) (unsigned char)255)));
                    }
                    for (long long int i_24 = 0; i_24 < 23; i_24 += 3) 
                    {
                        var_28 = (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_73 [i_24] [i_20]))))) : (((2836132535U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_81 [i_24] [i_21] [(short)21] [i_21] [i_20]))))))));
                        arr_82 [i_21] [i_21] [i_22 - 1] [i_24] [(unsigned char)16] [i_21] = var_9;
                        var_29 = ((/* implicit */unsigned char) ((var_1) / (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_74 [i_20] [i_21] [i_20]))))) ? (((/* implicit */int) arr_69 [i_20])) : (((((/* implicit */_Bool) arr_80 [i_20] [i_21] [i_22] [18])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))))))));
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (~(((int) (signed char)-1)))))));
    }
    var_31 -= ((/* implicit */unsigned int) ((long long int) min(((unsigned short)26532), (((/* implicit */unsigned short) (short)24080)))));
}
