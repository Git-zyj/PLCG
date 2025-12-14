/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74556
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
    var_11 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)55339))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)11498)) && (((/* implicit */_Bool) 18446744073709551604ULL))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_12 = ((/* implicit */signed char) ((18446744073709551584ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    }
    for (unsigned short i_1 = 1; i_1 < 24; i_1 += 2) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned short)10171)), (var_7))) | (((/* implicit */int) arr_5 [i_1 - 1]))))) ? (((unsigned int) (unsigned short)46316)) : (((/* implicit */unsigned int) 264241152))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_14 *= ((/* implicit */unsigned char) ((1026165273) > (((/* implicit */int) min(((unsigned short)10197), (((/* implicit */unsigned short) var_0)))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1]))) : (1073741823ULL)))))));
                        arr_16 [i_4] [(unsigned short)22] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? ((+(((/* implicit */int) arr_14 [11ULL] [i_1 - 1])))) : (min((var_8), (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1]))))));
                        arr_17 [(unsigned char)18] [i_2] [i_1] = ((/* implicit */long long int) ((unsigned short) ((arr_9 [i_1] [i_1 + 1]) ? (((/* implicit */int) ((unsigned short) arr_14 [i_2] [i_2]))) : (((((/* implicit */_Bool) arr_7 [i_4] [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (var_8))))));
                        arr_18 [i_1] = ((/* implicit */signed char) (unsigned short)10197);
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((short) (+(9223372036854775807LL))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1395493038797357535LL))))))));
                        arr_22 [i_5] [i_3] [i_5] [(unsigned char)24] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (unsigned short)55343)) : (((/* implicit */int) (short)-27151))));
                        arr_23 [i_1] [i_1] [i_5] [8] = ((/* implicit */int) 9223372036854775807LL);
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_18 = (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) ((unsigned int) arr_15 [i_1] [i_1] [i_3] [i_6] [13] [i_3]))) : (1882141292321262703LL));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((_Bool) -2069151324)))));
                    }
                }
            } 
        } 
        arr_27 [i_1 + 1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_26 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65516)))))))), (min((((((/* implicit */_Bool) -4640334244102830771LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_10 [i_1])))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_13 [(short)18] [i_1] [9LL])), (var_4))))))));
        var_20 = ((/* implicit */signed char) arr_10 [i_1]);
        /* LoopSeq 4 */
        for (int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            arr_30 [i_7] = arr_15 [i_7] [i_7] [i_7] [i_1 - 1] [(_Bool)1] [i_1];
            arr_31 [(signed char)1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)8214)))) < (-1395493038797357535LL)));
            var_21 = ((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_1 + 1]);
            var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */short) (signed char)3)), ((short)1901))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            arr_34 [i_1] [(unsigned char)2] = ((/* implicit */signed char) ((long long int) (!((!(((/* implicit */_Bool) var_0)))))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (short)-5404))))) && (((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_10)))))));
            var_24 = ((/* implicit */unsigned short) arr_15 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [1] [i_8]);
        }
        for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            var_25 = ((/* implicit */signed char) (short)-1901);
            /* LoopSeq 3 */
            for (unsigned long long int i_10 = 2; i_10 < 24; i_10 += 4) 
            {
                arr_40 [i_1] [i_1 - 1] [i_1] [i_1] = min((((/* implicit */unsigned long long int) ((signed char) (unsigned char)11))), (min((((/* implicit */unsigned long long int) ((long long int) (_Bool)1))), (((unsigned long long int) arr_5 [i_9])))));
                var_26 = ((((/* implicit */_Bool) min(((+(3352901267U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */int) min((((/* implicit */signed char) ((_Bool) var_6))), (var_0)))) : (((/* implicit */int) (unsigned short)55361)));
                var_27 ^= ((/* implicit */unsigned int) -1395493038797357535LL);
            }
            for (int i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                var_28 ^= ((/* implicit */unsigned short) min((((/* implicit */int) ((signed char) -1026165273))), (((((/* implicit */int) (short)-6252)) ^ ((~(((/* implicit */int) (_Bool)1))))))));
                arr_45 [i_1 + 1] [(unsigned short)3] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (short)-5404)) <= (((/* implicit */int) (signed char)74))));
                /* LoopSeq 2 */
                for (signed char i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)55361), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))) != (-1395493038797357509LL))))))) ? (arr_26 [i_1] [i_1] [10U] [i_1]) : (((/* implicit */unsigned long long int) var_6))));
                    var_30 -= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (2417557244289277468LL))))) : (arr_26 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                    arr_48 [i_1] [i_9] [i_11] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) arr_25 [i_1 + 1] [i_1 + 1] [i_9] [i_9])) : (((/* implicit */int) arr_25 [i_1 + 1] [i_1] [i_11] [i_11]))))) ? (min((arr_33 [i_1 + 1] [i_1]), (arr_33 [i_1 + 1] [i_9]))) : (((/* implicit */long long int) ((unsigned int) arr_33 [i_1 + 1] [i_9])))));
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (short)1425))));
                    arr_49 [i_9] [i_11] = ((/* implicit */unsigned long long int) (signed char)-105);
                }
                /* vectorizable */
                for (signed char i_13 = 0; i_13 < 25; i_13 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */short) ((arr_44 [14] [i_9] [i_1 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 - 1] [i_1 + 1] [i_11])))));
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) 15872))));
                    var_34 = ((/* implicit */signed char) var_1);
                    arr_52 [i_13] [i_9] [i_9] [i_9] [i_1] &= (unsigned short)28139;
                }
                /* LoopSeq 1 */
                for (unsigned char i_14 = 1; i_14 < 23; i_14 += 1) 
                {
                    var_35 = ((/* implicit */signed char) min((min((((/* implicit */long long int) arr_53 [i_11] [i_1 - 1] [(signed char)8])), (1395493038797357534LL))), (min((((/* implicit */long long int) var_7)), (arr_21 [i_1] [i_1 + 1] [(unsigned char)22] [i_14 - 1])))));
                    arr_56 [i_11] [i_9] [i_14 + 1] [i_11] = ((/* implicit */long long int) ((unsigned char) (signed char)127));
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 2; i_15 < 22; i_15 += 1) 
                    {
                        arr_59 [i_1 - 1] [i_1 - 1] [i_11] [i_1 + 1] [i_9] &= ((/* implicit */unsigned short) arr_9 [i_14] [i_14]);
                        arr_60 [i_1 - 1] [i_9] [i_11] [(unsigned short)22] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 4294967282U))) ? ((-(min((-1395493038797357523LL), (((/* implicit */long long int) (unsigned char)11)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) | (-1395493038797357530LL))) >= (9223372036854775807LL)))))));
                        arr_61 [i_1] [i_11] [(_Bool)1] [i_14] [i_11] = ((/* implicit */signed char) ((unsigned short) arr_13 [i_15] [i_15] [i_15]));
                        var_36 = ((/* implicit */unsigned int) ((long long int) (+(((/* implicit */int) arr_53 [i_1 + 1] [i_15 - 1] [i_15])))));
                        arr_62 [19LL] [i_11] = ((/* implicit */_Bool) arr_43 [i_11] [i_11]);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_37 &= ((/* implicit */unsigned int) var_6);
                        var_38 &= ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */int) (signed char)108)), (((((/* implicit */_Bool) arr_25 [i_16] [i_1 - 1] [i_11] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_14 - 1])))))));
                        arr_65 [i_11] [i_9] [i_9] [i_9] [(short)3] [i_16] = ((/* implicit */long long int) arr_50 [i_1] [(unsigned short)2]);
                    }
                    for (signed char i_17 = 2; i_17 < 24; i_17 += 4) 
                    {
                        arr_68 [i_11] [i_1 + 1] = ((((((/* implicit */_Bool) (signed char)100)) && (((/* implicit */_Bool) arr_21 [i_9] [i_11] [i_14 + 1] [i_17])))) ? ((-(((/* implicit */int) arr_9 [i_14 + 1] [i_1 - 1])))) : (((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (short)32756)))));
                        var_39 -= ((/* implicit */unsigned short) min((((short) var_1)), (min((((/* implicit */short) (signed char)111)), (var_3)))));
                        arr_69 [i_11] = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [(unsigned short)15])), (min((arr_12 [i_11]), (var_10)))))) ^ (((/* implicit */int) (unsigned char)8))));
                    }
                    arr_70 [i_11] [i_11] [i_11] [i_11] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? ((((_Bool)0) ? (((/* implicit */int) arr_66 [i_1 - 1] [i_1 + 1] [i_11] [i_14])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_58 [i_14 + 2] [i_9] [i_1 + 1])), (((unsigned short) var_3)))))));
                }
            }
            for (signed char i_18 = 4; i_18 < 21; i_18 += 4) 
            {
                arr_73 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)115))));
                /* LoopNest 2 */
                for (signed char i_19 = 4; i_19 < 22; i_19 += 3) 
                {
                    for (unsigned long long int i_20 = 4; i_20 < 24; i_20 += 1) 
                    {
                        {
                            var_40 &= ((/* implicit */unsigned short) arr_7 [i_1 + 1] [(unsigned char)21] [i_1 - 1]);
                            arr_80 [i_1] = ((/* implicit */long long int) arr_11 [i_1] [i_9] [i_9] [i_1]);
                            var_41 ^= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_9)), (18446744073709551609ULL))), (((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (signed char)-51)), (arr_63 [i_1] [i_9] [i_18] [i_9] [i_9] [i_20 - 3]))))))));
                            arr_81 [i_1 - 1] [i_9] [i_1] [i_1] = ((/* implicit */short) -534452252);
                        }
                    } 
                } 
                arr_82 [i_1] [5LL] [i_18 - 2] = ((/* implicit */signed char) 3988814255957728776LL);
            }
            var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((2588276965U), (((/* implicit */unsigned int) (signed char)108))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59441)) ? (((/* implicit */int) arr_11 [i_9] [(signed char)0] [i_1] [i_1])) : (((/* implicit */int) arr_50 [i_1] [i_1]))))) ? (((/* implicit */int) arr_24 [i_9] [(unsigned char)4] [i_9] [i_1] [i_1] [i_1])) : (((/* implicit */int) ((signed char) -1LL))))) : (((((arr_75 [i_1] [i_1] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (((arr_46 [i_1 + 1] [i_9] [i_1 - 1] [i_9]) ? (((/* implicit */int) arr_28 [i_1])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_43 [i_9] [i_9]))))));
            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16062741150379305961ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))) : (2384002923330245653ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)41))))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) < (((((/* implicit */int) arr_76 [i_1 + 1] [i_1] [i_9] [i_9] [i_9])) | (((/* implicit */int) (unsigned char)0)))))))));
            arr_83 [i_1 - 1] [i_9] [15LL] = ((/* implicit */unsigned char) min((min((((/* implicit */int) (!(((/* implicit */_Bool) 16062741150379305961ULL))))), ((+(((/* implicit */int) arr_78 [i_9])))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15037))) : (arr_26 [i_9] [i_9] [i_1] [i_1])))))));
        }
        /* vectorizable */
        for (unsigned short i_21 = 0; i_21 < 25; i_21 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_22 = 2; i_22 < 24; i_22 += 2) 
            {
                for (long long int i_23 = 0; i_23 < 25; i_23 += 1) 
                {
                    {
                        arr_93 [i_1] [i_21] [i_23] [i_22] [i_23] = ((/* implicit */long long int) (unsigned char)168);
                        arr_94 [i_1] [i_21] [i_22 - 1] [i_23] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_33 [i_22 + 1] [i_1 + 1]))));
                    }
                } 
            } 
            arr_95 [i_1] [i_1] = ((/* implicit */int) (+(((18446744073709551589ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
        }
    }
    var_44 = ((/* implicit */signed char) -3742214449117576731LL);
    var_45 = ((/* implicit */long long int) var_1);
}
