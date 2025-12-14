/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74005
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
    var_20 = ((((/* implicit */_Bool) ((4431021090073294262ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17755)))))) ? (((/* implicit */long long int) (+(1295435129)))) : (min(((+(-2747350238256222075LL))), (((/* implicit */long long int) var_15)))));
    var_21 = ((/* implicit */unsigned long long int) ((var_18) + ((-((+(((/* implicit */int) (short)2047))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (var_3))) > (((/* implicit */long long int) arr_1 [i_0] [i_0 - 1]))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_1))));
                        arr_10 [i_0] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23703))) + (17525357416693137436ULL)))) ? (((((/* implicit */unsigned long long int) arr_4 [4LL])) + (14015722983636257371ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_3]))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) ((((0LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-15333))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1 + 2])) ? (((/* implicit */int) (short)-128)) : (((/* implicit */int) arr_8 [(unsigned char)13] [i_1] [i_0] [i_1] [i_0])))) : (((/* implicit */int) (short)18134))));
            var_25 = ((/* implicit */int) ((unsigned char) var_19));
        }
        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */long long int) ((unsigned long long int) arr_8 [i_0 - 1] [(unsigned short)10] [i_0] [i_4 - 1] [i_4 - 1]));
            var_27 = ((((/* implicit */_Bool) arr_5 [(unsigned short)6] [i_4] [(unsigned short)6])) && (((/* implicit */_Bool) arr_5 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0])));
        }
        for (unsigned char i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                arr_20 [i_0] [i_6] [i_0] = ((/* implicit */short) (~(((((/* implicit */int) (short)29544)) + (-2147483646)))));
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((unsigned long long int) 5297315087363874010LL)))));
            }
            arr_21 [i_0] [i_5] = ((/* implicit */unsigned char) ((short) (short)2047));
            var_29 = var_8;
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((long long int) 5297315087363874010LL)))));
            /* LoopSeq 4 */
            for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                arr_24 [i_7] [i_5] [i_0] [i_0] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) 7455069208260375864LL)))));
                var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)-252))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_7] [i_0])) > (var_19))))) : (arr_4 [i_0 + 1])));
                arr_25 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4459120787029181997ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27548)))))) && (((/* implicit */_Bool) (-(695193103))))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_28 [i_0 + 2] [i_5 + 1] [i_8] [6LL] &= ((/* implicit */int) (_Bool)1);
                var_32 += ((/* implicit */_Bool) var_14);
            }
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_10 = 2; i_10 < 11; i_10 += 4) 
                {
                    arr_34 [i_10 - 1] [i_5] [i_9 + 1] = arr_7 [i_0 + 2] [i_5 - 1] [i_9 + 1] [i_10];
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 1; i_11 < 13; i_11 += 2) 
                    {
                        var_33 ^= ((unsigned short) (short)-30961);
                        arr_39 [i_0] [13] [13] [i_10] [i_10 + 2] [i_11] [i_11 - 1] &= ((/* implicit */int) (~((+(var_3)))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        var_34 = ((/* implicit */int) max((var_34), (-1232277020)));
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-26498))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_10] [i_5] [i_9 + 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
                        arr_42 [i_0] [i_0] [i_0] [8] [i_10] [i_12] [i_12] |= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_37 [i_0] [i_5 + 1] [i_0] [i_0] [i_5 + 1] [i_12]))) | (((/* implicit */int) arr_29 [i_0] [i_0 + 1]))));
                        var_36 = ((((((/* implicit */_Bool) (short)127)) ? (3458764513820540928LL) : (((/* implicit */long long int) 1978649980)))) << (((((var_7) / (arr_18 [i_12] [i_5] [i_12]))) - (7LL))));
                    }
                    var_37 = ((/* implicit */unsigned char) ((short) ((917383027) + (-1525006456))));
                }
                for (short i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    var_38 = ((/* implicit */short) ((((((/* implicit */_Bool) 7)) ? (arr_22 [i_0] [11LL] [11LL] [i_0]) : (((/* implicit */int) (unsigned short)35754)))) << (((var_12) - (8211673760056239557LL)))));
                    var_39 = ((/* implicit */unsigned long long int) var_2);
                    arr_45 [i_0] [i_0] [i_9] [i_13] [i_13] [i_13] = ((/* implicit */long long int) ((((((/* implicit */int) arr_29 [i_0 + 1] [i_0])) > (((/* implicit */int) arr_30 [i_0] [i_5 - 1] [i_5 - 1])))) ? (((/* implicit */int) arr_16 [i_5 - 1] [i_9 + 1])) : (((/* implicit */int) ((short) (short)26522)))));
                    arr_46 [i_0] [i_5] [i_9 + 1] [i_13] [i_13] = ((/* implicit */_Bool) var_14);
                    arr_47 [i_0] [i_0] [i_0] [i_9 + 1] [(unsigned char)10] = ((/* implicit */unsigned char) 5272093570057587065LL);
                }
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) 
                {
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 2] [i_5 - 1] [i_9 + 1])) * (((/* implicit */int) var_0))));
                    arr_52 [i_0] [i_5 - 1] [i_9] [i_0] = ((/* implicit */_Bool) arr_26 [i_0] [i_5] [i_5]);
                }
                var_41 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5 - 1])))));
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    for (int i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */long long int) max((var_42), (-1LL)));
                            arr_58 [i_16] [i_9] [i_0] [i_9] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_9 + 1])) && (((/* implicit */_Bool) arr_3 [i_15]))));
                            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) (short)30488)) : (((/* implicit */int) (short)30494)))))));
                            arr_59 [i_9] [i_16] [i_16] [2LL] [i_16] [i_5] [i_15] = (short)-112;
                        }
                    } 
                } 
                arr_60 [i_9 + 1] &= ((/* implicit */short) 15801546108617087447ULL);
            }
            for (int i_17 = 0; i_17 < 14; i_17 += 4) 
            {
                var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) > (-4208448420897876958LL))))));
                var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)26498))) - (var_12))))));
                var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)11970)))))));
            }
        }
        for (unsigned char i_18 = 1; i_18 < 13; i_18 += 1) /* same iter space */
        {
            var_47 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_0)) % (arr_15 [i_18])))));
            var_48 += ((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (17LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16368)))))));
        }
        var_49 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)3584))) / (((((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned short)4] [i_0] [(unsigned short)4]))) * (-7134420021527401973LL)))));
    }
}
