/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6372
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_0))))) * (((/* implicit */int) var_7)))) + (((/* implicit */int) ((signed char) var_3)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) ((short) (unsigned char)7))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_0] [i_1] = (!(((_Bool) ((unsigned long long int) var_16))));
                        arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (var_9) : (var_9))) ^ (((unsigned long long int) var_8))));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))));
                        }
                        var_19 = ((/* implicit */signed char) ((_Bool) ((unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))));
                        var_20 = ((/* implicit */unsigned char) ((var_6) | (((var_15) | (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 4; i_5 < 17; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))));
                        arr_20 [i_0] [i_2] [i_1] [i_0] [i_5] [i_5] &= ((/* implicit */unsigned long long int) (((~(var_6))) == (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        var_21 |= ((/* implicit */short) ((((((/* implicit */int) var_14)) * (((/* implicit */int) var_12)))) != (((/* implicit */int) ((unsigned char) var_8)))));
                        arr_21 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6)));
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_1] [i_2] [i_6] [i_1] [i_7] = ((/* implicit */long long int) ((((((2877780245426614065LL) << (((/* implicit */int) (_Bool)1)))) & (((((var_16) + (9223372036854775807LL))) >> (((((/* implicit */int) var_14)) + (56))))))) < ((+(((((/* implicit */_Bool) 3161810860239375869LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (517766168275389663LL)))))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))) ? (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                                arr_29 [i_0] [i_0] [i_0] [i_6] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) var_15))) == (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_0))))))) ? (min(((~(var_6))), (((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        arr_34 [i_8] = ((/* implicit */unsigned char) var_3);
        arr_35 [i_8] = ((/* implicit */int) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_9))))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_15)) ^ (var_9)))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))));
    }
    var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */unsigned long long int) var_0)), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_9)))))));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? (((var_5) >> (((/* implicit */int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5))))))) ? ((~(((((/* implicit */int) var_12)) & (((/* implicit */int) var_1)))))) : (min((((/* implicit */int) (_Bool)0)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_11 = 2; i_11 < 20; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        {
                            arr_48 [i_9] [i_10] [i_9] [i_9] = ((/* implicit */unsigned char) var_4);
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_16))) ? ((~(var_15))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_8)))))));
                            arr_49 [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((min((((/* implicit */long long int) 3968274738U)), (-2877780245426614065LL))) + (2877780245426614078LL)))));
                        }
                    } 
                } 
                var_27 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_7))))) ? (max((var_13), (var_6))) : ((+(var_15)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_15)))) : (var_13)))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (var_5))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))))));
                /* LoopSeq 2 */
                for (signed char i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) ((min((var_13), (((/* implicit */long long int) var_8)))) << (((((((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_13) : (var_2)))))) - (12660542163145254322ULL)))));
                                var_29 ^= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23100))) != (6879330552431928835ULL))))) < (18446744073709551615ULL))) ? (min((((/* implicit */unsigned long long int) var_3)), (var_9))) : (((/* implicit */unsigned long long int) (~(min((-3340164929532148857LL), (-3161810860239375869LL))))))));
                                var_30 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) (unsigned char)128)) : (1056964608)))) / (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11)))) | (var_16)))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */short) ((((((/* implicit */long long int) ((int) var_14))) + (var_15))) != (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    arr_58 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_13))))))) >= ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_15)))))));
                    arr_59 [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                }
                for (long long int i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    arr_63 [i_9] [i_9] [i_16] [i_9] = ((/* implicit */unsigned short) ((long long int) ((var_12) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_16))));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        for (signed char i_18 = 0; i_18 < 21; i_18 += 2) 
                        {
                            {
                                var_32 &= ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_11)))) ? (min((((/* implicit */unsigned long long int) var_16)), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_1)))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_0))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_1))))))))));
                                var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */int) ((_Bool) (+(var_13))))) ^ (((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_4)) - (38850))))))))));
                                arr_69 [i_9] [i_9] [i_16] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_16)))) : ((-(var_13)))));
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (var_16)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((3968274739U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62)))))), (var_4))))));
                                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) ((unsigned char) 3U))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 3) 
                    {
                        for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 2) 
                        {
                            {
                                arr_75 [i_9] [i_10] [i_16] [i_9] [i_10] [i_10] = (((+((+(((/* implicit */int) var_7)))))) / (((/* implicit */int) var_10)));
                                var_36 ^= ((((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ ((~(((/* implicit */int) var_10))))))) != ((-(-7811560384254768339LL))));
                                var_37 = ((/* implicit */unsigned short) (+(max((var_2), (((/* implicit */long long int) var_14))))));
                            }
                        } 
                    } 
                    arr_76 [i_16] [i_16] [i_9] [i_16] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13))) | (15771014797702073134ULL)));
                    arr_77 [i_9] [i_10] [i_9] [i_16] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) var_7)), (var_14)))) & (((/* implicit */int) var_3))))) != (((((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_2))))))));
                }
                arr_78 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3161810860239375880LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)23099))));
            }
        } 
    } 
}
