/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93351
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((~(((/* implicit */int) var_3)))) + (2147483647))) << (((((/* implicit */int) (signed char)73)) - (73)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (arr_8 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_15 |= ((/* implicit */unsigned int) var_8);
                            var_16 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) && (((((/* implicit */_Bool) (unsigned char)180)) && ((_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_2]))))) >= (((var_3) ? (arr_8 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_4])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-100))))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-27471))))) ? ((~(var_0))) : (((((/* implicit */int) arr_4 [i_1])) % (((/* implicit */int) arr_4 [i_4]))))));
                            var_17 = ((/* implicit */long long int) ((min((((int) (signed char)73)), ((+(-1923000341))))) ^ ((+(((/* implicit */int) (short)15541))))));
                            var_18 &= ((/* implicit */signed char) ((unsigned long long int) arr_8 [i_3] [8] [i_0]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_0] [i_1] [i_5] [i_6] |= ((/* implicit */int) arr_8 [i_0] [i_0] [i_2]);
                            var_19 &= ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)203)) ? (3520121194U) : (var_12)))))));
                            arr_22 [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-15539))));
                            var_20 -= ((/* implicit */short) ((((unsigned int) (!(((/* implicit */_Bool) var_7))))) * (((/* implicit */unsigned int) arr_6 [i_0]))));
                        }
                    } 
                } 
                arr_23 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) || (((/* implicit */_Bool) var_5)))))) | (((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17156)))))));
            }
            var_21 += ((/* implicit */unsigned short) arr_18 [i_0] [(short)4] [i_1]);
            /* LoopSeq 3 */
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
            {
                arr_26 [i_0] [i_0] = ((/* implicit */signed char) ((arr_6 [i_0]) + (((((/* implicit */_Bool) arr_6 [i_7])) ? (arr_6 [i_0]) : (arr_6 [i_0])))));
                var_22 -= ((/* implicit */signed char) (short)-19882);
                var_23 = ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) arr_7 [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_7])))))) : (((((/* implicit */_Bool) ((((-1866848814) + (2147483647))) >> (((((/* implicit */int) (signed char)73)) - (46)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) arr_3 [i_0]))))) : (max((arr_1 [i_7] [i_0]), (((/* implicit */long long int) -1631883668))))))));
            }
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
            {
                var_24 ^= (~(((/* implicit */int) (unsigned char)231)));
                var_25 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-15542))))) ? (((/* implicit */int) ((signed char) ((1162451213U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)14621)))))))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (short)14602))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((min((((/* implicit */short) arr_18 [i_0] [i_0] [i_8])), ((short)-228))), (((/* implicit */short) arr_19 [i_8] [i_1] [i_1] [i_0] [i_0] [i_0])))))));
                var_27 = ((/* implicit */signed char) max((((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) - (((((/* implicit */_Bool) arr_8 [i_8] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (unsigned char)32))));
            }
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned long long int) arr_33 [i_0] [i_1] [i_1]);
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    var_29 *= ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17160))) : (((((/* implicit */_Bool) 3391869326370305373LL)) ? (3385912726U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18123))))))), (((/* implicit */unsigned int) (((-(8983810277204276044ULL))) < (max((((/* implicit */unsigned long long int) (signed char)-126)), (15750000476065471418ULL))))))));
                    var_30 = ((((((/* implicit */_Bool) (short)17128)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17156))) : (3515032161U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_10])) && (((/* implicit */_Bool) (signed char)125)))))))) >> (((/* implicit */int) arr_18 [i_0] [i_9] [i_9])));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 4) 
                {
                    var_31 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_20 [i_11 - 1])) ? (((var_3) ? (((/* implicit */int) (unsigned short)9181)) : (((/* implicit */int) (unsigned char)229)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)53))))))) > (min((((((/* implicit */int) arr_28 [i_0] [i_1])) >> (((-1631883668) + (1631883687))))), ((+(var_2)))))));
                    var_32 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_20 [i_11 - 2])) ? (((/* implicit */int) arr_20 [i_11 + 1])) : (((/* implicit */int) arr_38 [i_9] [i_11 - 2] [i_11] [i_11] [i_11 + 1])))));
                }
            }
        }
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                {
                    var_33 += ((/* implicit */unsigned long long int) ((min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_1 [i_12] [i_13]))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((/* implicit */int) (_Bool)1))))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)37162)) ? (((/* implicit */int) arr_42 [i_0] [i_12] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) (_Bool)1))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        for (short i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */_Bool) ((((unsigned long long int) (unsigned char)31)) / (((/* implicit */unsigned long long int) max(((-(1162451213U))), ((((_Bool)1) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                                var_35 -= ((/* implicit */signed char) (!((_Bool)1)));
                                var_36 = ((/* implicit */short) ((_Bool) (signed char)112));
                                arr_48 [i_0] [i_0] [i_0] [i_13] [i_13] [i_13] [(unsigned char)4] = ((/* implicit */_Bool) max((((unsigned long long int) arr_16 [i_15] [i_12] [i_13] [i_12] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (3703394555U)))) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_49 [i_0] [i_12] [i_13] [i_14] [i_12] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_47 [i_0] [i_12] [i_13] [i_14] [i_14])) ? (-1631883668) : (-1631883668))))) ? ((((~(arr_8 [i_0] [i_0] [i_0]))) | (((/* implicit */unsigned long long int) ((1156750234U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_12 [i_0] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_37 ^= ((/* implicit */short) var_1);
        /* LoopNest 3 */
        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 3) 
        {
            for (unsigned short i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                for (short i_18 = 0; i_18 < 11; i_18 += 2) 
                {
                    {
                        arr_57 [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) + ((-((~(9ULL)))))));
                        var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-32760)) < (((/* implicit */int) (unsigned char)24)))) ? (((/* implicit */unsigned long long int) 1289735883U)) : (18446744073709551607ULL))))));
                        arr_58 [i_17] [i_16] [i_17] [i_17] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 1631883668)) ? (((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_19 [i_0] [i_16] [i_17] [(unsigned char)6] [i_18] [i_18])))) : (((arr_39 [i_0] [i_17] [i_18]) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) (signed char)46))))))));
                        arr_59 [(_Bool)0] [i_17] [i_0] [i_16] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)6);
                    }
                } 
            } 
        } 
    }
    for (short i_19 = 0; i_19 < 24; i_19 += 3) 
    {
        var_39 = ((/* implicit */_Bool) 3645843889U);
        var_40 -= ((/* implicit */unsigned short) arr_61 [i_19] [i_19]);
    }
    var_41 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-113)))), (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) var_6)) + (3301)))))))) ? (4145658821U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
}
