/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6653
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)48958)) > (((/* implicit */int) (unsigned short)65535))))), (var_6)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65514)))) * ((+(((/* implicit */int) (unsigned short)50505))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (long long int i_3 = 3; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_3 - 2])) ? (((/* implicit */int) arr_8 [(unsigned char)18] [(unsigned char)7] [i_0] [i_3 - 3])) : (((/* implicit */int) arr_8 [i_3] [i_3] [2LL] [i_3 + 1])))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_2] [i_3])) ^ (((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) (unsigned short)65497)) & (((/* implicit */int) var_19))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) (unsigned short)50512))))) ? (((/* implicit */long long int) 1179491651)) : (min((((/* implicit */long long int) var_15)), (arr_7 [i_0] [i_0] [i_1] [i_0]))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15053))))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_5 = 2; i_5 < 22; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_19 [i_0] [5U] [(unsigned short)18] [i_0] = ((/* implicit */signed char) arr_0 [1U]);
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 3709293074838115304LL)), (arr_9 [i_0] [i_5] [6])));
                            arr_23 [i_0] [i_0] [i_5] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) arr_14 [i_7]);
                            var_24 = ((/* implicit */unsigned short) (unsigned char)231);
                            arr_24 [(_Bool)1] [i_5] [i_5] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) + (3709293074838115309LL))) - (3709293074838115292LL)))));
                        }
                    }
                } 
            } 
            arr_25 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (unsigned short)2))) || (((/* implicit */_Bool) ((long long int) 3709293074838115304LL)))))) : (((/* implicit */int) (signed char)-118))));
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8983)) ? (arr_7 [i_0] [i_0] [i_4] [i_4]) : (((/* implicit */long long int) 1023U))))) ? (((((/* implicit */_Bool) (unsigned short)65514)) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 4294967295U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8173554341337867401ULL)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) var_13)))))))) ? (((/* implicit */int) ((unsigned char) arr_22 [3U] [i_4] [i_4] [i_4]))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (42378565U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25301))))))))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [10U] [10U] [i_8])) ? (arr_16 [(unsigned short)2] [i_8] [i_8] [(unsigned short)2]) : (arr_16 [i_0] [i_0] [i_0] [13U])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65534)) || (((/* implicit */_Bool) 8173554341337867401ULL))))) : (min((var_4), (((/* implicit */int) (short)-26788))))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0]))))) ? ((+(((((/* implicit */_Bool) var_13)) ? (3709293074838115309LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_8]))))))) : (((((arr_12 [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-5790))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)63799)) / (((/* implicit */int) (short)-26293))))) : (((((/* implicit */_Bool) arr_6 [i_8])) ? (-3709293074838115304LL) : (((/* implicit */long long int) var_3))))))));
            var_28 *= ((/* implicit */short) (!((_Bool)1)));
        }
    }
    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        arr_31 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9] [i_9])) ? (((((/* implicit */_Bool) var_9)) ? (arr_6 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50475))))) : (((/* implicit */unsigned long long int) 3709293074838115309LL))))) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) arr_14 [i_9])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_9] [18LL] [i_9]))) <= (arr_9 [i_9] [i_9] [i_9])))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-13))))))));
        /* LoopSeq 3 */
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                var_29 = ((/* implicit */int) 1884480676702830038LL);
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_12 = 1; i_12 < 13; i_12 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_13 = 1; i_13 < 12; i_13 += 3) /* same iter space */
                    {
                        arr_44 [i_9] [i_10] [i_9] [i_10] [i_10] |= (~(arr_3 [i_12 - 1]));
                        var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_17 [i_9] [i_13 + 2] [i_12 - 1] [i_12]))));
                    }
                    for (unsigned short i_14 = 1; i_14 < 12; i_14 += 3) /* same iter space */
                    {
                        arr_47 [i_9] [i_10] [4U] [i_9] [i_14] [i_12] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_39 [i_9] [i_10] [i_9] [i_14])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9] [i_10] [i_11] [i_14]))))));
                        var_31 |= ((/* implicit */unsigned long long int) (unsigned short)38323);
                    }
                    for (short i_15 = 2; i_15 < 12; i_15 += 3) 
                    {
                        var_32 = ((/* implicit */long long int) ((((/* implicit */int) var_19)) * (((/* implicit */int) (unsigned short)47412))));
                        arr_52 [i_9] [i_9] [i_12] [i_12] [i_9] [i_15] = ((/* implicit */int) ((18446744073709551615ULL) >> (((-8233862255149518736LL) + (8233862255149518771LL)))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_22 [i_12 + 1] [i_12] [i_12] [i_12 - 1])) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30255))) & (1ULL)))));
                    }
                    for (short i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        arr_55 [i_9] [i_10] [i_10] [i_16] [i_12] [i_16] [i_12] = ((((/* implicit */_Bool) arr_30 [i_12 - 1] [i_12 - 1])) ? (arr_2 [i_12 - 1]) : (((/* implicit */long long int) -789768807)));
                        var_34 = ((/* implicit */long long int) ((1743908074) < (((/* implicit */int) arr_15 [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1]))));
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (var_6) : (((((/* implicit */_Bool) (unsigned short)35280)) ? (8936572833428168974LL) : (((/* implicit */long long int) arr_1 [i_9]))))));
                        var_36 = ((/* implicit */_Bool) ((arr_38 [i_9] [(unsigned short)4] [i_11] [i_12]) - (arr_38 [i_9] [i_9] [i_9] [i_12 - 1])));
                        arr_56 [8LL] [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) 291690710756118047ULL)) ? (arr_39 [(unsigned char)13] [i_12 + 1] [i_12 - 1] [i_12 - 1]) : (arr_39 [i_12 - 1] [i_12] [i_12 + 1] [i_12])));
                    }
                    arr_57 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_11] [i_11] [i_12 + 1] [i_12 - 1])) ? (((((/* implicit */_Bool) -2628200183640328356LL)) ? (var_14) : (-6297666142111974778LL))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (_Bool)1)))))));
                }
                /* vectorizable */
                for (long long int i_17 = 2; i_17 < 10; i_17 += 3) 
                {
                    var_37 -= ((/* implicit */unsigned int) (unsigned short)33324);
                    var_38 = ((/* implicit */long long int) min((var_38), (((((/* implicit */_Bool) (unsigned short)59408)) ? (8233862255149518747LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5790)))))));
                    var_39 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((291690710756118047ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40880)))))) ? (((/* implicit */int) arr_5 [(unsigned short)23] [i_10] [i_11])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9)))))));
                    var_40 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (((((/* implicit */_Bool) -6297666142111974778LL)) ? (9120515734183106988ULL) : (((/* implicit */unsigned long long int) 1391186078U))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (short)-5790))));
                        var_42 -= ((/* implicit */unsigned short) arr_58 [i_9] [(unsigned short)2] [i_11] [i_9]);
                    }
                    for (unsigned short i_19 = 0; i_19 < 14; i_19 += 1) 
                    {
                        arr_67 [i_19] = ((((/* implicit */int) arr_51 [i_19] [i_17] [i_17 - 2] [i_17 - 1] [i_17 + 2])) | (((/* implicit */int) arr_15 [i_17 + 2] [i_17 - 2] [i_17 + 4] [i_17 + 2])));
                        var_43 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_54 [i_19] [i_17 + 4] [i_17 - 2] [i_17 + 4] [i_17])) / (((/* implicit */int) (unsigned char)255))));
                    }
                }
            }
            for (long long int i_20 = 0; i_20 < 14; i_20 += 4) 
            {
                arr_72 [i_9] [i_10] [i_20] = ((unsigned short) (+(arr_2 [i_9])));
                var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)31)), (-1133211189)))) ? (((/* implicit */int) arr_30 [i_9] [(unsigned short)2])) : (((((/* implicit */int) (short)-5790)) * (((/* implicit */int) arr_36 [(unsigned short)2] [i_10] [i_20]))))))))))));
                arr_73 [(unsigned short)8] [(unsigned short)8] [i_9] = ((/* implicit */unsigned short) ((int) (unsigned short)15));
                arr_74 [i_20] [i_10] [i_9] = ((/* implicit */unsigned char) var_17);
            }
            var_45 -= ((((/* implicit */_Bool) (unsigned short)10824)) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35909))));
        }
        /* vectorizable */
        for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 3) /* same iter space */
        {
            var_46 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12288)) ? (((/* implicit */int) arr_8 [i_9] [i_21] [i_21] [i_9])) : (((/* implicit */int) var_0)))))));
            arr_79 [i_21] [i_21] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8233862255149518725LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)5804))))) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [17U] [i_9])))));
            var_47 += ((/* implicit */short) (+(((((/* implicit */_Bool) (short)5774)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-3708698747207625960LL)))));
        }
        /* vectorizable */
        for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 3) /* same iter space */
        {
            var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)48605)))))));
            var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_9] [i_9] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_9] [i_9] [i_22])))))));
        }
        arr_84 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5830))) : (((((/* implicit */unsigned long long int) var_17)) & (9120515734183106987ULL)))));
    }
}
