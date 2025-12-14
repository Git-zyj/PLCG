/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7067
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
    for (int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0] [(unsigned char)11])) : (((/* implicit */int) arr_1 [i_0] [(unsigned char)13]))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) arr_8 [i_1] [i_3] [i_4]);
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 7738326735531774467LL))))))))));
                            var_13 = ((/* implicit */short) min((var_8), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128)))))))));
                            var_14 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_13 [i_0] [i_1] [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-7738326735531774467LL)))))))));
                        }
                    } 
                } 
            } 
            arr_14 [i_0] [i_1] = ((/* implicit */signed char) 9223372036854775807LL);
            arr_15 [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0 - 1] [(short)1])), (max((max((((/* implicit */int) arr_1 [9] [i_1])), (arr_8 [i_1] [i_1] [i_1]))), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1] [i_1])) ? (var_8) : (((/* implicit */int) arr_9 [i_1] [i_1] [(short)14] [i_1]))))))));
            var_15 -= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [(unsigned char)3] [i_1])) % (((/* implicit */int) (unsigned char)128))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [(short)9] [i_5] [i_5]))))) ? ((~(((/* implicit */int) (signed char)18)))) : (((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) arr_10 [i_5] [i_0] [i_5] [i_5])) : (((/* implicit */int) (unsigned char)197)))))))));
            arr_19 [i_5] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? ((~((+(((/* implicit */int) (short)4825)))))) : (((/* implicit */int) max(((unsigned char)191), (((/* implicit */unsigned char) arr_5 [i_0] [2U])))))));
            var_16 = arr_8 [i_5] [i_0] [i_5];
            var_17 = max((((/* implicit */unsigned short) min((arr_5 [(_Bool)1] [i_5]), (((((/* implicit */int) (unsigned short)14765)) != (((/* implicit */int) (short)31594))))))), (((unsigned short) (short)-4826)));
            var_18 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((((/* implicit */_Bool) 8649040718470984778LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)58))) : (7976279832263810818LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-4825))))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_19 ^= ((/* implicit */short) -7738326735531774467LL);
            var_20 = ((/* implicit */unsigned int) (!(arr_13 [i_0] [i_0] [i_0 + 1] [i_6])));
        }
        var_21 = ((/* implicit */unsigned long long int) (!((_Bool)0)));
        arr_23 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0])) == (((((/* implicit */_Bool) (~(arr_8 [i_0] [i_0 + 2] [i_0])))) ? ((+(-2027647531))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)142))))))));
        var_22 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1188993915)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((+(((/* implicit */int) (unsigned char)128))))))) ? (min((((((/* implicit */_Bool) -707724791875980762LL)) ? (arr_12 [i_0] [(signed char)11] [12LL] [(signed char)11] [10LL] [12LL] [12LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36470))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 246943479)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_17 [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned int) -1446311996);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_33 [i_7] [i_8] [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_7] [i_8])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_7] [i_8] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [(short)2] [i_8] [i_7]))) : (arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) % ((-9223372036854775807LL - 1LL))))));
                    arr_34 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1446311996)) ? (((((/* implicit */_Bool) 2097088)) ? (((/* implicit */int) (unsigned short)36470)) : (((/* implicit */int) (unsigned char)218)))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_8) : (1437976574)))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            {
                                arr_39 [i_7] = ((/* implicit */short) (-(-1)));
                                arr_40 [i_8] [i_7] [i_9] [i_10] [11] = ((/* implicit */int) (!(arr_9 [i_9] [i_9] [i_9] [i_9])));
                                var_23 &= ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_12 = 0; i_12 < 15; i_12 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) (+((-((+(1097780380U)))))));
        var_25 += ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-30120)))))))), (((unsigned char) (-(((/* implicit */int) arr_9 [i_12] [i_12] [i_12] [i_12])))))));
        arr_43 [i_12] = ((/* implicit */short) max((200327976), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-3708)))))))));
    }
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)66)) ? (var_9) : (((/* implicit */int) (short)126))))) : (2952603077U)));
    /* LoopNest 2 */
    for (short i_13 = 0; i_13 < 16; i_13 += 3) 
    {
        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            {
                var_27 = ((/* implicit */_Bool) 6593562463611329661LL);
                var_28 ^= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_13] [i_14] [i_14])) ? (((/* implicit */int) arr_7 [i_13] [i_14] [i_13])) : (((/* implicit */int) arr_7 [i_13] [i_14] [i_14]))))), ((+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [3U] [3U]))) : (9223372036854775782LL)))))));
                /* LoopSeq 1 */
                for (long long int i_15 = 2; i_15 < 15; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        for (long long int i_17 = 2; i_17 < 15; i_17 += 4) 
                        {
                            {
                                var_29 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43702)) >> (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_57 [i_13] [i_13] [i_14] [i_15] [i_16] [i_17] [i_16])) : (((/* implicit */int) (short)3698)))) - (25884))))))));
                                var_30 = ((/* implicit */unsigned char) ((int) (_Bool)1));
                                arr_60 [i_13] [13] [13LL] [13LL] [i_17] [13LL] = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                    arr_61 [i_15] [i_13] [i_15] = ((/* implicit */short) (-(((/* implicit */int) max((arr_3 [i_15 - 1] [i_15 - 1] [i_15 + 1]), (arr_3 [i_15 + 1] [i_15 + 1] [i_15 + 1]))))));
                    arr_62 [i_13] = ((((/* implicit */_Bool) arr_55 [9] [(unsigned char)3] [(unsigned char)3] [i_15] [i_14] [i_15 - 2])) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 1056964608)))))) : (((/* implicit */int) arr_50 [i_15])));
                }
            }
        } 
    } 
}
