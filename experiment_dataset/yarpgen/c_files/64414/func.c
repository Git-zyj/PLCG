/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64414
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)7)) % (((/* implicit */int) (unsigned char)100))));
    var_15 = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (14809416046256045308ULL)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)160);
        var_17 = ((/* implicit */short) ((unsigned short) ((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) var_4))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11))) : (min((-966356145754320424LL), (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned short) (signed char)0))) : (((((/* implicit */int) (short)32767)) << (((/* implicit */int) (_Bool)0)))))))));
        var_18 = ((/* implicit */_Bool) (+(min((var_11), (((/* implicit */unsigned long long int) ((int) (unsigned short)11446)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                arr_9 [i_0] = (!(((/* implicit */_Bool) arr_0 [i_0] [i_2])));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_2] [i_1])))))));
            }
            var_20 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)7)), (arr_7 [i_0] [i_0])))), (((((/* implicit */_Bool) 528583028887469388LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15404))) : (3387507715U)))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8176))) : (var_2)))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_4))) ? (((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25768))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(unsigned short)2])))))) ? (((((((/* implicit */int) (signed char)0)) << (((((/* implicit */int) (signed char)76)) - (55))))) | (((/* implicit */int) (short)-3085)))) : (((/* implicit */int) ((unsigned short) ((long long int) 282944921))))));
            arr_10 [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_1 [i_1] [i_0])), (max((max((arr_4 [i_1] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)42)))), (((var_1) ? (var_11) : (((/* implicit */unsigned long long int) 4855093232389381728LL))))))));
            var_22 ^= ((/* implicit */int) (signed char)-64);
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (0LL) : (((/* implicit */long long int) 1616227889)))) + (((/* implicit */long long int) arr_14 [i_4] [(short)4] [i_0] [i_0]))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)23958))))) ? (((((/* implicit */int) (signed char)96)) >> (((((/* implicit */int) (signed char)55)) - (38))))) : (((/* implicit */int) ((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            }
            for (unsigned short i_5 = 2; i_5 < 10; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 2; i_6 < 10; i_6 += 1) 
                {
                    arr_24 [i_3] = ((/* implicit */long long int) arr_0 [i_0] [i_5]);
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (signed char)29)))) || (((/* implicit */_Bool) ((long long int) 288107146881817963LL))))))));
                    arr_25 [i_0] [i_0] [i_6] [i_6 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [i_0] [(unsigned short)3] [i_5])) : (((/* implicit */int) arr_11 [i_5 + 1] [i_5 + 1] [i_6 + 1]))));
                }
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    arr_28 [i_0] [i_0] [i_3] [(signed char)7] [i_5 - 1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-20124)) && ((_Bool)1)))) ^ (((((/* implicit */int) arr_17 [i_5] [i_3] [i_0])) << (((var_0) - (1037662637U)))))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_5 + 1] [i_5] [i_5 - 1] [i_5 - 1])) ? (arr_14 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 2]) : (arr_14 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 2])));
                }
                var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)25)) ? (arr_19 [i_0] [i_5 - 2] [i_5 - 2] [(unsigned char)0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10718)))));
                var_28 += ((/* implicit */unsigned short) arr_5 [i_5 - 2] [i_0]);
                /* LoopSeq 1 */
                for (unsigned char i_8 = 1; i_8 < 11; i_8 += 1) 
                {
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_5 + 1] [(unsigned char)8] [11U])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned char)74))))) : (((/* implicit */int) (signed char)-106))));
                    arr_31 [i_8] [4LL] [i_5] [(unsigned char)7] = ((/* implicit */unsigned short) ((((-1250276628) - (((/* implicit */int) (short)-18069)))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_3] [(_Bool)1])) : (((/* implicit */int) (short)-8384))))));
                    var_30 = ((long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8])))));
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        arr_35 [i_9] [i_8] [i_5] [i_8] [i_0] = ((/* implicit */long long int) ((arr_15 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 1]) > (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                        var_31 -= ((/* implicit */signed char) 3004496414U);
                        var_32 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-10424))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_8 + 1] [i_8 - 1])) & (((/* implicit */int) arr_1 [i_8 - 1] [i_8 - 1]))));
                    }
                }
            }
            for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                var_34 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) 265520254031628883LL)) ^ (8813089469113857351ULL))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        {
                            arr_43 [i_0] [2LL] [2LL] [i_11] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_3))))) << (((arr_19 [i_0] [i_10] [(unsigned short)0] [i_12]) - (5936929091055636587LL)))));
                            arr_44 [i_12] [8U] [i_11] [i_11] [i_12] = ((/* implicit */int) (short)1281);
                            var_35 ^= ((/* implicit */unsigned char) (_Bool)0);
                            var_36 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_8)) & (((/* implicit */int) (signed char)108))))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) arr_21 [1]))));
                arr_45 [3U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) 0)) : (-8823094733270921150LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : ((-9223372036854775807LL - 1LL))));
                var_38 = ((/* implicit */_Bool) (((((~(((/* implicit */int) var_3)))) + (2147483647))) << ((((~(((/* implicit */int) arr_23 [i_0] [i_0])))) - (60)))));
            }
            arr_46 [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_12))) + (((/* implicit */int) ((short) arr_17 [i_0] [i_0] [i_3])))));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 16; i_13 += 4) 
    {
        var_39 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)119))));
        arr_50 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)21)) | (((/* implicit */int) (short)29482))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3988539918U)) && (((/* implicit */_Bool) 466969857)))))) : (((((var_2) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-40)) + (54))) - (14)))))));
        /* LoopSeq 3 */
        for (short i_14 = 4; i_14 < 14; i_14 += 4) 
        {
            var_40 |= ((/* implicit */short) ((arr_51 [i_14 + 2] [i_14 - 4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_11)));
            var_41 = ((/* implicit */unsigned short) arr_49 [i_14 + 2]);
            arr_53 [i_13] [i_14 + 2] [i_14 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2966570820934175885LL)) ? (((/* implicit */int) arr_49 [i_13])) : (((/* implicit */int) (short)-21445))))) ? (((long long int) (signed char)-75)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_48 [i_13])) : (((/* implicit */int) arr_51 [i_13] [i_14 - 1])))))));
            arr_54 [i_13] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)29582))))) ^ (((/* implicit */int) (short)-27618))));
            arr_55 [i_13] [i_13] [i_14] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_13)))) ? (arr_52 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_14 + 2] [i_14 - 4])))));
        }
        for (signed char i_15 = 0; i_15 < 16; i_15 += 1) 
        {
            var_42 = ((/* implicit */short) ((unsigned char) var_0));
            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_15] [i_13])) * (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_13]))) : (arr_52 [i_13])));
            arr_58 [i_13] [i_15] = ((/* implicit */long long int) var_0);
            var_44 = ((/* implicit */long long int) (unsigned short)65534);
        }
        for (unsigned short i_16 = 0; i_16 < 16; i_16 += 4) 
        {
            var_45 = ((/* implicit */short) ((long long int) -1708383492571147614LL));
            arr_62 [i_16] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_56 [i_13]) <= (arr_56 [i_16]))))) > ((~(8748272072507890342ULL)))));
            arr_63 [i_13] [i_13] [i_16] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) >= (arr_56 [i_16]))));
            var_46 *= ((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) != (((/* implicit */int) var_9)))) ? (((((/* implicit */_Bool) (unsigned short)14007)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)117))) : (1056458931372919920LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0)))))));
        }
        arr_64 [i_13] = ((/* implicit */long long int) (!(arr_61 [i_13] [i_13])));
    }
    for (unsigned short i_17 = 1; i_17 < 18; i_17 += 1) 
    {
        var_47 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_66 [i_17])) * ((-(((/* implicit */int) (unsigned char)0))))));
        arr_69 [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58239))) <= (7800196971000508872LL))))) >= (((((/* implicit */_Bool) (unsigned short)55512)) ? (-2LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55382)))))))) - (((/* implicit */int) var_4))));
    }
}
