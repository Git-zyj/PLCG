/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89989
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
    var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56359))) : (max((((/* implicit */unsigned int) var_11)), (var_17)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_12), (var_12))))) : (max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) var_17)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) 0);
        arr_3 [i_0] = var_5;
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1028306004)) ? (((/* implicit */int) (unsigned short)1594)) : (((/* implicit */int) (unsigned short)56367))));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_12);
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_4 = 3; i_4 < 16; i_4 += 4) /* same iter space */
            {
                arr_14 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_6 [i_0]))));
                /* LoopSeq 2 */
                for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)18))));
                    var_22 = ((/* implicit */signed char) (~(var_6)));
                    arr_17 [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_4 - 1] [i_3] [i_4 - 1]);
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (((/* implicit */int) var_4)) : (arr_15 [i_0] [i_4 - 2] [i_4] [i_4 - 2]))))));
                    var_24 &= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-25194))));
                }
                for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                    var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) var_15))));
                }
                arr_21 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)16910)) : (((/* implicit */int) ((signed char) var_8)))));
            }
            for (long long int i_7 = 3; i_7 < 16; i_7 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-2))));
                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))) : (3354353551U)));
            }
            arr_24 [i_0] [i_3 + 1] [i_0] = ((/* implicit */signed char) var_12);
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_8] [i_8])) ? (4230195444U) : (((/* implicit */unsigned int) 3))))) : ((+(var_7)))));
                arr_30 [i_8] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)172))));
                /* LoopSeq 3 */
                for (unsigned short i_10 = 1; i_10 < 14; i_10 += 4) 
                {
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (signed char)72))));
                    var_31 &= ((/* implicit */_Bool) arr_0 [i_9]);
                    arr_33 [i_8 - 1] [i_8] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_0] [i_8 + 1] [i_9] [i_8])) - (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)9176)));
                    var_32 = ((/* implicit */long long int) ((unsigned char) (signed char)79));
                }
                for (unsigned char i_11 = 2; i_11 < 16; i_11 += 1) 
                {
                    var_33 ^= ((/* implicit */unsigned char) var_4);
                    arr_36 [i_0] [i_8] [i_8] [i_11 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_8 + 1] [i_8])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_17)) == (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (short)-4179))));
                    var_34 *= ((/* implicit */unsigned long long int) ((200778271) != ((~(((/* implicit */int) var_10))))));
                    var_35 = (~((~(((/* implicit */int) (unsigned short)56367)))));
                }
                for (long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                {
                    arr_41 [i_8] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-117)) % (((/* implicit */int) (_Bool)1))));
                    var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) var_0)))))));
                    /* LoopSeq 1 */
                    for (short i_13 = 1; i_13 < 16; i_13 += 4) 
                    {
                        var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) | (((/* implicit */int) (unsigned short)61943))))) ^ (arr_13 [i_13 - 1] [i_13])));
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) var_0))));
                    }
                    arr_44 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_4 [i_8 + 1] [i_8 - 1] [i_9])));
                }
                var_39 = ((/* implicit */signed char) ((((((/* implicit */int) var_2)) / (((/* implicit */int) (signed char)44)))) != (((/* implicit */int) var_10))));
            }
            arr_45 [i_0] [i_8] = ((/* implicit */unsigned int) ((short) (signed char)2));
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                for (long long int i_15 = 0; i_15 < 17; i_15 += 3) 
                {
                    {
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1099478073344LL) / (((/* implicit */long long int) 3851774563U))))) || ((!(((/* implicit */_Bool) var_9)))))))));
                        arr_52 [i_14] [i_14] [i_8] [i_8] = ((/* implicit */_Bool) var_11);
                        var_41 *= ((/* implicit */unsigned short) (~(200778275)));
                        arr_53 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((((/* implicit */unsigned long long int) var_14)) + (arr_25 [i_8] [i_8] [i_15]));
                        arr_54 [i_0] [i_8] [i_8] [i_15] [i_15] [i_8 + 1] = ((/* implicit */long long int) var_13);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                for (unsigned char i_17 = 4; i_17 < 15; i_17 += 1) 
                {
                    {
                        var_42 -= ((/* implicit */int) ((unsigned short) arr_37 [i_8] [i_8] [i_8] [i_8 + 1]));
                        arr_61 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_0] [i_8 - 1] [i_0]))))) : (((/* implicit */int) (short)-1))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_18 = 1; i_18 < 15; i_18 += 4) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_7 [i_18] [i_18 + 1] [i_18] [i_18])) : (arr_60 [i_18] [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) min(((signed char)72), ((signed char)-110)))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) (unsigned short)56359))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (unsigned char)98)))))) : (((((/* implicit */_Bool) (short)-17955)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (short)-1))))));
            var_44 = ((/* implicit */int) ((min((arr_22 [i_18 - 1] [i_18 - 1]), (((/* implicit */unsigned long long int) var_4)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)155), (arr_0 [i_18 - 1])))))));
        }
        arr_64 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)98))))) ? (arr_22 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 2) /* same iter space */
    {
        var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), ((+(7518692637276220257LL)))))) : (max((((/* implicit */unsigned long long int) 732997218)), ((~(13143084368456036318ULL)))))));
        arr_69 [i_19] = ((/* implicit */unsigned char) min(((_Bool)1), (min(((!(((/* implicit */_Bool) (short)-31443)))), ((!(((/* implicit */_Bool) (signed char)-2))))))));
        var_46 += ((/* implicit */int) arr_38 [i_19] [i_19] [i_19]);
    }
    /* vectorizable */
    for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 2) /* same iter space */
    {
        var_47 += ((((/* implicit */_Bool) arr_59 [i_20] [i_20] [i_20] [i_20] [i_20])) ? (((((-732997213) + (2147483647))) >> (((var_7) - (6661550227092796299LL))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_48 [i_20] [i_20])))));
        var_48 = ((/* implicit */unsigned char) var_11);
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_49 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (((!(((/* implicit */_Bool) 134152192)))) && (((/* implicit */_Bool) min((732997218), (((/* implicit */int) arr_72 [i_21]))))))))));
        var_50 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (_Bool)1))))))) + ((~(min((((/* implicit */unsigned long long int) 2017630233)), (16932213686391237224ULL)))))));
    }
    var_51 = ((/* implicit */unsigned char) var_1);
}
