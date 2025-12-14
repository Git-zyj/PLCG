/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97205
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
    var_20 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)62015)) - (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [(unsigned short)10] = ((/* implicit */short) ((((/* implicit */_Bool) (+(-959577037)))) ? (((((/* implicit */int) var_7)) + (-959577037))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) (short)9110)))))));
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(arr_2 [i_0])));
                arr_10 [i_0] [i_0] [4ULL] [i_1] |= ((/* implicit */_Bool) ((var_3) >> (((/* implicit */int) arr_1 [i_1]))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_4 = 2; i_4 < 10; i_4 += 4) 
                    {
                        var_22 ^= ((/* implicit */short) (_Bool)1);
                        arr_15 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_2])) ? (((unsigned long long int) (-9223372036854775807LL - 1LL))) : (17597675214025773421ULL)));
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((unsigned char) arr_0 [i_1]));
                        var_24 = ((/* implicit */signed char) arr_12 [i_0] [i_0] [5U] [i_0] [i_0] [i_0]);
                    }
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((((/* implicit */_Bool) 2912713763U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27797))) : (arr_14 [i_0] [i_1] [i_1] [i_3] [i_1]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_0)))))))))));
                }
                for (short i_6 = 1; i_6 < 9; i_6 += 4) 
                {
                    arr_21 [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) ((_Bool) (+(-959577037))));
                    arr_22 [i_2] [i_2] [i_2] [(unsigned char)8] = ((/* implicit */_Bool) ((arr_17 [i_0] [i_1] [i_2] [i_2] [i_6 + 1]) % (3662138484204445639ULL)));
                }
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) 959577036);
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_27 = -959577060;
                            arr_30 [i_1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)16889)) ? (((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) arr_11 [(unsigned short)2] [(unsigned short)2] [i_7] [i_8] [i_0] [(unsigned short)2])) : (959577045))) : (((/* implicit */int) var_9))));
                        }
                    } 
                } 
            }
            for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                arr_33 [i_0] [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (-959577060) : (((/* implicit */int) (_Bool)1))));
                var_28 = ((/* implicit */long long int) ((arr_29 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [(unsigned short)2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0])))));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                arr_37 [i_0] [i_0] [i_11] = ((/* implicit */_Bool) (-(var_4)));
                /* LoopSeq 2 */
                for (unsigned int i_12 = 1; i_12 < 10; i_12 += 4) 
                {
                    arr_40 [i_11] [i_12] [i_12] [(unsigned short)9] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48643))))))));
                    arr_41 [i_11] [i_1] [i_11] [(unsigned short)6] = ((signed char) 959577036);
                    arr_42 [i_0] [i_1] &= ((/* implicit */long long int) ((_Bool) (signed char)-126));
                }
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((arr_27 [i_11] [i_11] [8] [i_11 - 1] [(_Bool)1] [i_11]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14465))))))));
                    arr_46 [i_11] [i_1] [i_1] [i_13] [i_11] = ((/* implicit */signed char) (unsigned short)16880);
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)59026)) || (var_5)));
                        var_31 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16889))) + (arr_29 [i_11 - 1] [i_11 - 1] [i_11 - 1] [10LL] [i_11 - 1] [(unsigned short)8] [i_11 - 1])));
                    }
                    for (short i_15 = 3; i_15 < 9; i_15 += 4) 
                    {
                        arr_52 [i_0] [i_0] [i_1] [i_1] [i_11] [i_13] [i_13] = ((/* implicit */short) (_Bool)1);
                        arr_53 [i_0] [i_11] [i_11] [i_13] [i_15] = ((/* implicit */_Bool) (signed char)(-127 - 1));
                        var_32 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_34 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48655))) : (((unsigned long long int) arr_36 [i_1] [i_1]))));
                    }
                    arr_54 [i_0] [i_0] [i_0] [i_0] [i_11] = ((unsigned int) arr_24 [i_11 - 1] [i_11 - 1] [i_11]);
                    var_33 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
                }
            }
        }
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((959577060) - (((/* implicit */int) (unsigned short)6510)))))));
    }
    for (short i_16 = 1; i_16 < 11; i_16 += 1) 
    {
        var_35 = ((/* implicit */long long int) max((((int) (unsigned short)0)), (var_2)));
        /* LoopSeq 1 */
        for (unsigned char i_17 = 1; i_17 < 11; i_17 += 2) 
        {
            /* LoopNest 2 */
            for (short i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_36 -= ((/* implicit */_Bool) ((short) (_Bool)0));
                        var_37 = arr_57 [(short)4] [i_16];
                        var_38 = ((/* implicit */short) arr_57 [i_16] [i_16]);
                        var_39 = ((/* implicit */short) (-((~(((/* implicit */int) ((short) 4265210660U)))))));
                        arr_65 [i_16] [i_17] [i_18] [i_16] [i_18] = ((/* implicit */_Bool) var_17);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 13; i_20 += 1) 
            {
                for (short i_21 = 4; i_21 < 11; i_21 += 1) 
                {
                    {
                        arr_71 [(unsigned short)5] [i_17 + 2] [i_17 + 1] [i_16] [i_17] = ((/* implicit */_Bool) (+(1622399280)));
                        arr_72 [i_16] [i_16] [i_20] [i_17] [i_16] [i_17] = ((/* implicit */unsigned short) (unsigned char)3);
                    }
                } 
            } 
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_61 [i_17 + 1] [i_16]))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (1622399267))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_23 = 0; i_23 < 13; i_23 += 1) 
                {
                    for (unsigned int i_24 = 3; i_24 < 12; i_24 += 2) 
                    {
                        {
                            arr_82 [i_16] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)59026)) ? (-4491137959175013600LL) : (-8237835759610689595LL)));
                            var_41 = ((/* implicit */long long int) 10088143924629253543ULL);
                            var_42 &= ((/* implicit */unsigned short) ((short) 18108578234444497982ULL));
                        }
                    } 
                } 
                arr_83 [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22514)) ? (arr_56 [i_16] [i_17]) : (((/* implicit */unsigned long long int) var_16))))) ? ((~(((/* implicit */int) (signed char)126)))) : (((/* implicit */int) (((-(((/* implicit */int) var_14)))) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)4955)) != (((/* implicit */int) (unsigned short)5934)))))))));
                /* LoopNest 2 */
                for (short i_25 = 0; i_25 < 13; i_25 += 4) 
                {
                    for (short i_26 = 0; i_26 < 13; i_26 += 4) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)4980)))))))) - (((((/* implicit */_Bool) ((int) 7523385424443429977LL))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) var_18))))));
                            arr_89 [i_16] [i_22] [i_22] &= 4265210679U;
                            arr_90 [(short)10] [i_17] [(signed char)5] [i_16] = ((/* implicit */_Bool) ((unsigned short) 0U));
                        }
                    } 
                } 
                var_44 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) (unsigned short)16906))), (arr_73 [i_16] [i_16] [i_22])));
            }
        }
        arr_91 [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_79 [i_16] [i_16] [11U] [i_16] [i_16])) : (((/* implicit */int) arr_86 [12] [1ULL] [i_16] [i_16])))) - ((-(-959577060)))));
    }
    var_45 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) 6111683960322502049LL)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) (_Bool)0)))));
}
