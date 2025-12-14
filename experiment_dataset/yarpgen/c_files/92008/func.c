/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92008
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
    var_19 = ((/* implicit */unsigned char) var_13);
    var_20 = ((/* implicit */long long int) var_18);
    var_21 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))))) - (((/* implicit */unsigned long long int) 7247228625808917964LL))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_22 = var_2;
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (unsigned char)183))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10952583887704584963ULL)) ? (((/* implicit */int) (short)-11415)) : (((/* implicit */int) (short)-16558))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (short)15293)) - (15289)))))) : (((unsigned long long int) arr_4 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) var_3)) : (var_18)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) / (8568518819113145679ULL)))));
                            arr_14 [i_2] [i_0] = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (var_12))))));
                        }
                    } 
                } 
            } 
            var_25 = (((((~(7494160186004966653ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_0)) : (var_15)))))) >> (((((-5179268239837915938LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61871))))) + (5179268239837977859LL))));
        }
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
        {
            arr_17 [i_0] [i_0] = ((/* implicit */long long int) 2003898183U);
            arr_18 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_7)), (arr_2 [i_0] [i_5] [(_Bool)1])))))) ? ((+(((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(unsigned char)2] [i_0 + 1] [i_0])) ? (((/* implicit */int) (unsigned short)30016)) : (((/* implicit */int) var_4)))) <= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7))))))))));
            /* LoopSeq 3 */
            for (unsigned short i_6 = 1; i_6 < 21; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    arr_26 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((int) var_4))) : (10952583887704584959ULL)));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (+((-(((((/* implicit */int) (unsigned char)181)) >> (((/* implicit */int) (unsigned short)6)))))))))));
                }
                arr_27 [i_5] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(-4874310059176069825LL))) / (((long long int) var_6))))) ? (max((((/* implicit */unsigned int) arr_3 [i_6 - 1])), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
            }
            /* vectorizable */
            for (short i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 20; i_9 += 2) 
                {
                    for (long long int i_10 = 3; i_10 < 21; i_10 += 4) 
                    {
                        {
                            arr_37 [i_0] [i_9] [i_8] [i_5] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) (unsigned char)209));
                            var_27 = ((/* implicit */int) arr_12 [i_8] [i_5] [i_8] [i_8] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 4) 
                {
                    for (unsigned int i_12 = 4; i_12 < 20; i_12 += 1) 
                    {
                        {
                            var_28 ^= ((((/* implicit */int) (unsigned short)31)) - (((/* implicit */int) (signed char)127)));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_39 [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0 + 3])))))));
                            arr_42 [i_0] [(unsigned char)8] [i_5] [i_8] [(unsigned char)8] [i_0] [i_12 + 1] = ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]);
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
                            arr_43 [i_0] [i_5] [i_8] [i_8] [i_5] [i_0] |= ((/* implicit */int) var_7);
                        }
                    } 
                } 
                arr_44 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (17313108592376964718ULL) : (((/* implicit */unsigned long long int) ((int) var_0)))));
            }
            for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                var_31 *= ((/* implicit */unsigned int) ((((_Bool) 9878225254596405930ULL)) ? (((((/* implicit */_Bool) (unsigned short)42633)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) : (33554431LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                var_32 = ((/* implicit */_Bool) max((var_32), (((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 5302409876196459155ULL)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)53459)) || (((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20312))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12563)) && (((/* implicit */_Bool) var_1))))))))))));
                var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) == (((((/* implicit */int) var_9)) >> (((arr_32 [i_5] [i_0 + 2] [i_0 + 3] [i_0] [i_0 + 1] [i_5]) - (1200907384256169042ULL)))))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) (((~(((var_17) ^ (((/* implicit */unsigned long long int) var_0)))))) | (((((/* implicit */unsigned long long int) arr_31 [i_5])) & (5302409876196459155ULL))))))));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0 + 4] [i_0]))))) ? (((/* implicit */int) max((((/* implicit */short) var_3)), (arr_16 [i_0 + 3] [i_0])))) : (((/* implicit */int) ((_Bool) var_16)))));
                        }
                    } 
                } 
                var_36 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_5] [i_13]))) != (var_12))) ? (((((/* implicit */int) var_6)) >> (((16528917190176123867ULL) - (16528917190176123842ULL))))) : (((/* implicit */int) (unsigned char)87))))) : (((((/* implicit */_Bool) arr_50 [i_13] [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_5] [i_0 + 3] [i_5] [i_0 + 4] [i_5]))) : (14474149010657789474ULL)))));
            }
        }
        arr_52 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)63)) : (-129199713)))) || (((((/* implicit */int) (unsigned short)2)) <= (((/* implicit */int) (short)-1))))));
    }
    /* LoopNest 2 */
    for (int i_16 = 1; i_16 < 8; i_16 += 2) 
    {
        for (long long int i_17 = 1; i_17 < 11; i_17 += 1) 
        {
            {
                var_37 *= ((/* implicit */long long int) (((+(((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_8))))))) << (((var_11) ? (1005513227) : (((/* implicit */int) arr_6 [i_16] [(unsigned short)2] [i_16] [i_16 + 4]))))));
                var_38 = ((/* implicit */int) min((arr_41 [i_16 + 3] [i_16 + 3] [i_16 + 3] [i_16 + 3] [i_16 + 3] [i_16] [i_16]), (((/* implicit */unsigned short) arr_56 [i_17 + 1] [i_16]))));
                /* LoopSeq 2 */
                for (unsigned char i_18 = 2; i_18 < 10; i_18 += 1) 
                {
                    arr_61 [i_16] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)11)) < (arr_47 [i_16] [(short)5] [i_16] [i_16 - 1] [i_16 + 1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))) * (467670332U)))));
                    var_39 *= ((/* implicit */unsigned int) (((+(((int) var_10)))) << (((/* implicit */int) (_Bool)1))));
                }
                for (long long int i_19 = 0; i_19 < 12; i_19 += 1) 
                {
                    arr_64 [i_19] [i_17] [i_17] [(unsigned char)6] = ((/* implicit */unsigned int) ((max((((/* implicit */int) arr_12 [17LL] [i_17 - 1] [i_17] [i_17 - 1] [(signed char)5])), (var_18))) + (((/* implicit */int) (short)127))));
                    var_40 = ((/* implicit */_Bool) max((var_40), (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_0)) : (arr_59 [(unsigned char)10]))) == (((long long int) (~(((/* implicit */int) var_5)))))))));
                }
            }
        } 
    } 
}
