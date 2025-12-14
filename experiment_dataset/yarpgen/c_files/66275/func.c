/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66275
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)395)) && (((/* implicit */_Bool) var_9))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */_Bool) 1834552308);
                                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (-(((var_9) / (((/* implicit */long long int) 1834552320)))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) -1834552316))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            var_13 = var_5;
            var_14 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 1834552302)) ? (16777215LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16875))))) > (((/* implicit */long long int) min((1651022288), (((/* implicit */int) arr_6 [i_5] [i_0] [i_0]))))))) ? (((/* implicit */int) ((_Bool) min((21U), (((/* implicit */unsigned int) (_Bool)0)))))) : (((/* implicit */int) max((var_7), (((/* implicit */short) var_4)))))));
            var_15 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned int) 1834552312)), (((((/* implicit */_Bool) var_9)) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_5] [i_0]))))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        for (long long int i_7 = 3; i_7 < 22; i_7 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_8 = 3; i_8 < 23; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 21; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (unsigned short)18627);
                                arr_32 [i_6] [i_6] [4] [i_9] [6U] [i_10] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_27 [i_7 - 3] [(unsigned char)19] [i_8 + 1] [i_9] [i_7 - 3] [i_9 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_7 + 2] [i_7 + 2] [i_8 - 3] [11U] [i_9 + 3] [i_9 - 1])) && (((/* implicit */_Bool) -1834552329))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) (~(((/* implicit */int) arr_20 [i_6] [i_6]))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 3; i_11 < 23; i_11 += 2) 
                    {
                        for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            {
                                arr_37 [(short)2] [(short)2] [i_8] [i_8] [i_8] [12LL] [(_Bool)1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (-1834552323)))) ? (max((16349072983869649710ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 3422898960U)))))));
                                var_18 = ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) 9411267585482948240ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) + (((/* implicit */int) (_Bool)0))))));
                                arr_38 [i_8] [(_Bool)1] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(439959930)))) ? (((/* implicit */int) arr_25 [i_8])) : (((/* implicit */int) (unsigned short)33286)))) >> (((min((((/* implicit */long long int) var_7)), (arr_22 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_7 - 3]))) + (8444911754479878479LL)))));
                                var_19 -= ((/* implicit */_Bool) (~(4294967251U)));
                            }
                        } 
                    } 
                    arr_39 [(unsigned char)6] [(_Bool)1] &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((7484299350080386182LL) == (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)41278))))))))));
                }
                for (signed char i_13 = 2; i_13 < 20; i_13 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        for (unsigned char i_15 = 1; i_15 < 23; i_15 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), ((signed char)-48)));
                                var_21 = ((/* implicit */unsigned int) arr_18 [i_7 + 1] [i_7 + 1]);
                                var_22 += min((((/* implicit */long long int) (~(((/* implicit */int) ((signed char) -10)))))), (max(((-(var_9))), (((/* implicit */long long int) ((unsigned char) 4294967295U))))));
                                arr_46 [i_14] [(unsigned short)14] [i_14] &= ((/* implicit */short) ((((/* implicit */int) var_10)) != (1831610935)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        for (int i_17 = 3; i_17 < 23; i_17 += 2) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((min((((/* implicit */int) (short)11748)), (1834552331))), (((((/* implicit */int) (unsigned short)41278)) << (((700956269) - (700956263)))))))) & (45422439U)));
                                var_24 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_49 [i_13 + 3] [i_13])), (arr_22 [i_17 + 1] [i_13 + 2] [i_7 - 2] [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_25 [i_13])) != (((/* implicit */int) var_7))))) ^ ((~(((/* implicit */int) (short)22112))))))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 1834552323)) : (144080003703767040LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)41283))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_18 = 1; i_18 < 23; i_18 += 2) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 24; i_19 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_3))));
                                arr_56 [i_13] = ((var_6) > (min((((/* implicit */long long int) ((unsigned short) 2177673865535964654LL))), (var_6))));
                                arr_57 [i_6] [i_19] [i_7] [i_13 + 2] [i_7] [i_6] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)45882)) ? (((/* implicit */int) arr_36 [18U] [i_6] [i_6] [i_7 + 2] [i_18 + 1])) : (((/* implicit */int) arr_17 [i_7 + 1] [i_13 + 4])))) > (((((/* implicit */_Bool) ((((/* implicit */long long int) 1834552321)) ^ (-5333182506734305538LL)))) ? (((/* implicit */int) arr_42 [i_7] [i_7 + 2] [i_7 + 2] [i_13 - 2])) : (min((-1236963934), (-1834552312)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_20 = 1; i_20 < 21; i_20 += 3) 
                    {
                        for (int i_21 = 2; i_21 < 22; i_21 += 4) 
                        {
                            {
                                arr_63 [i_6] [i_13] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (~(((unsigned int) (!((_Bool)1))))));
                                arr_64 [i_13] [i_6] [i_7] [i_13] [i_20 + 2] [i_20] [i_21] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_58 [i_6] [(_Bool)1] [(_Bool)1] [i_13] [i_6]))) > (3807061692824545258LL))) ? (((arr_51 [i_6] [i_7 - 3] [i_13] [9LL]) - (((/* implicit */unsigned int) 1834552323)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)254)))))));
                                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) 1834552312))));
                                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_42 [i_6] [i_7 - 3] [i_6] [i_6])) : (((/* implicit */int) arr_20 [i_6] [i_6])))), ((-(((/* implicit */int) (short)-25172))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24262)) ? (min((((/* implicit */long long int) (unsigned short)34521)), (-9154836244529631515LL))) : (((((/* implicit */long long int) var_1)) | (var_6)))))) : (7363035065635861435ULL)));
                            }
                        } 
                    } 
                }
                var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-25158)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) arr_29 [4U] [i_7 - 1] [i_7 - 2])) : (1834552320)))) : (min((arr_48 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */long long int) arr_44 [i_6] [(short)14] [i_6] [i_6] [i_7 - 1]))))));
                /* LoopSeq 1 */
                for (short i_22 = 2; i_22 < 23; i_22 += 4) 
                {
                    var_30 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (-1834552323) : (8)))) : (((unsigned int) (short)-17530))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (var_2)))));
                    arr_68 [i_6] = ((/* implicit */int) (((((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_3)))) == (min((((/* implicit */int) var_10)), (arr_34 [i_22]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) 9223372036854775795LL))))) ? ((~(arr_59 [i_6] [i_6] [i_22] [i_22] [(unsigned short)16] [i_22]))) : (((/* implicit */long long int) ((/* implicit */int) (short)-25172))))))));
                    var_31 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1834552320)) ? (((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned short)38453)) : (arr_40 [i_6]))) : (((((/* implicit */int) (unsigned short)0)) * (-1834552320)))))), (min((min((((/* implicit */unsigned long long int) (unsigned char)233)), (arr_24 [i_6] [i_7] [i_22]))), (((/* implicit */unsigned long long int) 4027589961U))))));
                }
                var_32 = ((/* implicit */unsigned short) 7229479958305900391LL);
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (int i_24 = 0; i_24 < 24; i_24 += 4) 
                    {
                        {
                            arr_75 [(_Bool)1] [i_23] [i_23] [i_23] [i_23] = ((/* implicit */signed char) 1834552329);
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_25 = 1; i_25 < 21; i_25 += 4) 
                            {
                                var_33 = ((/* implicit */_Bool) max((var_33), ((_Bool)1)));
                                var_34 = ((/* implicit */int) ((4027589961U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_7 + 1] [i_7 - 3])))));
                                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (((~(((/* implicit */int) var_7)))) | (1834552312))))));
                            }
                            for (unsigned char i_26 = 0; i_26 < 24; i_26 += 4) 
                            {
                                var_36 += max((-7229479958305900392LL), (((/* implicit */long long int) (signed char)-101)));
                                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -1834552306)) : (min(((~(-9154836244529631515LL))), (((((/* implicit */_Bool) (unsigned short)55866)) ? (-7229479958305900388LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_27 = 0; i_27 < 24; i_27 += 4) 
                            {
                                var_38 = ((unsigned short) var_10);
                                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (~(2147483636))))));
                                var_40 = ((/* implicit */unsigned short) (((-(7229479958305900391LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2004012727)) || (((/* implicit */_Bool) (short)511))))))));
                            }
                            var_41 = ((/* implicit */short) max((var_41), (var_7)));
                        }
                    } 
                } 
            }
        } 
    } 
}
