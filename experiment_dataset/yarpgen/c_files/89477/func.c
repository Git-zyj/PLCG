/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89477
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_12), (var_12)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 0ULL)) ? (var_1) : (((/* implicit */int) (short)-1))))))) : (((((/* implicit */_Bool) ((var_9) * (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) (-(964661881)))) : (((((/* implicit */_Bool) 3457029263796550475LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-3457029263796550475LL))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 1])) ^ (((/* implicit */int) arr_3 [i_0 - 1]))))) ? ((~(((/* implicit */int) (unsigned char)83)))) : (((/* implicit */int) var_13))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) (short)-16092))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3457029263796550475LL)))))) : (max((3324098677U), (((/* implicit */unsigned int) var_4))))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */_Bool) 3834902938U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (460064357U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
            var_16 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_3 [i_0]))))) + (max((((/* implicit */long long int) arr_6 [i_0] [i_0 - 1] [i_1])), (3457029263796550474LL))))));
            var_17 = ((/* implicit */short) max(((~(9223372036854775807LL))), (min((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_0 + 1])))));
        }
    }
    for (long long int i_2 = 3; i_2 < 21; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                {
                    arr_14 [i_2 - 1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) && (((arr_7 [i_2 - 1] [i_2 - 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)255))))))));
                    var_18 = var_1;
                    arr_15 [i_4] = ((/* implicit */unsigned short) var_13);
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (min((((((/* implicit */_Bool) arr_10 [4ULL] [i_2] [i_2])) ? (arr_7 [i_3 - 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) 1634660390)))), (((/* implicit */unsigned long long int) ((1006632960) | (((/* implicit */int) (signed char)-79))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2 - 3])) ? (((var_1) & (((/* implicit */int) var_10)))) : (((/* implicit */int) ((_Bool) 2097120U))))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (((((~(((((/* implicit */long long int) ((/* implicit */int) (short)15360))) ^ (var_9))))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_13 [i_2 - 2])) + (((/* implicit */int) var_13)))) - (2012))))))));
            arr_19 [i_5] [16U] [i_5] = (((+(((((/* implicit */_Bool) -3457029263796550480LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (1265528908638209110ULL))))) >= (((/* implicit */unsigned long long int) -3457029263796550476LL)));
            var_21 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (16322256694050843106ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 - 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))) : (((((/* implicit */_Bool) -3457029263796550467LL)) ? (34359738367LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_2 - 2])))))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((((/* implicit */_Bool) 127U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4336457827436418653ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-34)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (arr_10 [i_2] [i_5] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_9 [(unsigned char)20]))))))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
        {
            arr_24 [18LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2] [(unsigned short)8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_21 [i_2 - 2]))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) & (arr_12 [(short)18] [i_6] [i_6])))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)108)) : (812827784))))))));
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [13U] [i_2 + 1])) ^ (((/* implicit */int) (_Bool)0)))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) 16777214LL);
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
        {
            var_27 -= ((/* implicit */unsigned int) var_7);
            var_28 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)187))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) : (9862387801537432107ULL)));
        }
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (short)-32758))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_9 = 2; i_9 < 20; i_9 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_10 = 2; i_10 < 18; i_10 += 3) /* same iter space */
            {
                arr_37 [i_10] [17] [(unsigned char)18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1)))))) : (((((/* implicit */_Bool) 8726748347821673796ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_35 [i_10])))));
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    arr_41 [i_10] [i_10] [i_9] [i_10] = ((/* implicit */unsigned char) (+(var_5)));
                    var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_2 - 1])) ? (8584356272172119509ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_11)))))));
                }
            }
            for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 3) /* same iter space */
            {
                arr_45 [i_12 + 3] [i_12 + 4] [i_12] = ((/* implicit */unsigned int) var_6);
                arr_46 [i_2] [i_12] = ((/* implicit */_Bool) ((arr_36 [i_9 - 2] [i_12 + 1] [(_Bool)1]) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)6144))))) : (((-1LL) & (0LL)))));
            }
            for (unsigned short i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                arr_49 [i_2] [i_13] [(unsigned char)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_34 [i_13] [i_13] [i_9] [i_13])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) >= (var_9)))) : (-1006632971)));
                var_31 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32160)) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_40 [i_13] [(unsigned char)21] [i_13])) >= (4294967295U)))) : (((/* implicit */int) (signed char)-76))));
            }
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                for (unsigned char i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    {
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (+(((/* implicit */int) arr_39 [i_9 + 2] [i_9] [i_9] [21LL] [i_9 + 2])))))));
                        arr_55 [i_2 - 2] = ((/* implicit */long long int) ((arr_38 [i_9 - 1] [(unsigned short)10] [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15)))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 1; i_16 < 21; i_16 += 1) 
        {
            for (short i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                {
                    var_33 = ((/* implicit */_Bool) max((2147483636), (((/* implicit */int) (signed char)-65))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        for (long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (16320)))) == (((/* implicit */int) ((3482146426U) >= (((/* implicit */unsigned int) -354565258)))))));
                                var_35 = ((/* implicit */int) max((var_35), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)76))))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) 1006632964))))) ? (((/* implicit */int) ((unsigned char) ((int) (_Bool)1)))) : (((((((/* implicit */int) (short)-29668)) + (2147482624))) + (((/* implicit */int) (short)(-32767 - 1)))))))));
                            }
                        } 
                    } 
                    arr_65 [i_2] [i_17] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_53 [i_16 + 1] [i_16 + 1] [i_2 - 2] [i_2 - 1] [i_2 + 1])) < (((/* implicit */int) max(((short)32749), ((short)-14125)))))))));
                }
            } 
        } 
    }
}
