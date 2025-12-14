/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6749
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_19 = min((((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) 309931798)) || (arr_0 [i_0] [i_0])))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((short) ((((/* implicit */long long int) var_10)) ^ (arr_1 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) var_8);
        arr_3 [i_0] = arr_1 [i_0];
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = ((/* implicit */signed char) 8388480LL);
            var_22 -= ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-31)), ((unsigned char)37)))), (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) var_1))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((var_16) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))) : ((-(-938022056))))))));
            /* LoopSeq 2 */
            for (signed char i_4 = 3; i_4 < 18; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 1; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-87))));
                        arr_20 [i_4] [i_4] [i_4 - 2] [i_4] [i_4] [i_1] = ((/* implicit */int) var_1);
                    }
                    for (short i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
                    {
                        var_25 -= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)-47))) - (((/* implicit */int) arr_21 [i_4 - 3] [i_4 + 2] [i_4] [i_4]))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)56)) ? (((((/* implicit */int) arr_6 [i_1])) % (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_12 [i_1] [i_3])))))));
                        var_27 = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_1]))));
                    }
                    var_28 -= ((/* implicit */signed char) ((var_16) ? (arr_9 [i_5] [i_4] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) << (((2111062325329920LL) - (2111062325329920LL)))))))));
                        var_30 += ((/* implicit */int) ((unsigned char) arr_18 [i_3] [i_4 + 1] [i_4 + 2] [i_4 - 3] [i_5] [i_8] [i_8]));
                    }
                    for (long long int i_9 = 1; i_9 < 19; i_9 += 2) 
                    {
                        arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) & (((3807193910U) & (3369928363U)))));
                        var_31 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_32 ^= ((((/* implicit */_Bool) arr_28 [i_9 - 1] [i_9 + 1] [i_4 - 3] [i_5] [i_4 + 1] [i_4] [i_4 - 1])) ? (((/* implicit */long long int) arr_28 [i_9 + 1] [i_9 - 1] [i_9] [i_5] [i_1] [i_1] [i_1])) : (arr_9 [i_3] [i_1] [i_1]));
                    }
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_33 = (_Bool)1;
                        arr_33 [i_1] [(unsigned char)2] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_6 [i_4])) % (((/* implicit */int) var_8))))));
                        arr_34 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5] [i_3] [i_1])) ? (3535708624556237078LL) : (-9223372036854775800LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : ((~(var_14)))));
                        arr_35 [i_4] [i_3] [i_4 + 2] [i_5] [i_10] = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)-60)) ? (arr_9 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))))) : (5783289831706893622LL)));
                    }
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_16 [i_4])))))));
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) -4944526205585544550LL)) ? ((+(((/* implicit */int) (unsigned char)0)))) : ((+(-2147483637)))));
                    var_36 = ((/* implicit */unsigned short) var_18);
                }
                /* LoopSeq 2 */
                for (unsigned short i_12 = 3; i_12 < 19; i_12 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_13 = 1; i_13 < 18; i_13 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_4 - 3] [i_4] [i_13 + 1])) ? (arr_27 [i_4 - 3] [i_12 - 3] [(signed char)6] [(unsigned short)4] [i_12 - 3] [i_13 + 2] [i_4]) : (arr_27 [i_4 - 3] [i_12 - 3] [i_12 - 3] [i_13] [i_13] [i_13 + 2] [i_4])));
                        var_38 ^= (unsigned char)142;
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((unsigned char) (_Bool)1)))));
                        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_13] [i_4 + 1] [i_4] [i_12] [i_13] [i_3]))) : (arr_24 [i_1] [i_4] [(_Bool)1] [i_4] [i_13] [i_12])));
                    }
                    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        var_41 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_4 - 1] [i_4 + 2])) ? (((/* implicit */int) arr_21 [i_1] [i_12] [i_12] [i_12])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_3] [i_3] [(unsigned char)8] [i_14])) && (((/* implicit */_Bool) (unsigned char)209)))))));
                        var_42 = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 2]))));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5317339208042130730LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (arr_4 [i_1])))) : (((/* implicit */int) (signed char)12))));
                        var_44 = (~(var_10));
                    }
                    /* LoopSeq 1 */
                    for (int i_15 = 1; i_15 < 18; i_15 += 1) 
                    {
                        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_15] [i_4] [i_4] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_22 [i_4] [i_12] [i_4]))));
                        var_46 = (~(((/* implicit */int) arr_16 [i_12 - 2])));
                        var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-31)))))) : ((+(var_2)))));
                        var_48 = ((/* implicit */unsigned short) ((4294967282U) == (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                        var_49 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_40 [i_4 - 1] [i_12] [i_12 - 3])) < (((/* implicit */int) ((unsigned short) (unsigned char)10)))));
                    }
                    /* LoopSeq 4 */
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 3) /* same iter space */
                    {
                        var_50 = ((((/* implicit */_Bool) arr_28 [i_3] [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 2] [i_12] [i_12 + 1])) ? (arr_28 [i_3] [i_4 + 2] [i_3] [i_4] [i_12 - 1] [i_12] [i_12 - 1]) : (arr_28 [i_1] [i_4 - 3] [13] [i_4] [i_12] [i_12] [i_12 - 1]));
                        arr_52 [18LL] [i_4 + 2] [i_16] &= ((/* implicit */long long int) arr_50 [i_1] [i_1] [i_1] [i_1] [i_1]);
                    }
                    for (signed char i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
                    {
                        var_51 = ((((arr_19 [i_4]) ^ (var_2))) << (((((((/* implicit */int) arr_42 [i_1] [i_1] [i_1])) + (17400))) - (38))));
                        var_52 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0))));
                        var_53 &= ((/* implicit */int) ((((((/* implicit */_Bool) (short)32767)) ? (7122929825091015727LL) : (((/* implicit */long long int) arr_53 [i_1] [i_1] [i_1] [i_1] [i_1])))) << (((/* implicit */int) arr_51 [i_4 - 3] [i_12] [i_12 - 1] [i_12] [i_12] [i_12 - 1]))));
                        var_54 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12509))))) ? (((/* implicit */int) (signed char)58)) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_0 [i_12] [8LL])) : (((/* implicit */int) (unsigned short)59433))))));
                        var_55 = ((/* implicit */unsigned char) ((((arr_19 [i_4]) ^ (arr_9 [i_1] [i_1] [i_1]))) * (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_17] [i_12 - 2] [i_12] [i_12 - 2] [i_4 + 2])))));
                    }
                    for (signed char i_18 = 1; i_18 < 18; i_18 += 4) 
                    {
                        var_56 = ((/* implicit */int) arr_56 [i_1] [i_4] [i_4] [(signed char)18] [(signed char)18]);
                        var_57 |= ((/* implicit */int) ((signed char) 7780166471204435331LL));
                        var_58 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_1] [i_1]))));
                    }
                    for (signed char i_19 = 2; i_19 < 19; i_19 += 3) 
                    {
                        var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_23 [i_19 - 1] [i_4] [i_4] [i_4] [i_4 + 2] [i_3]))));
                        arr_63 [i_19] [i_4] [i_12] [(unsigned short)11] [(unsigned short)11] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1594262997)) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (_Bool)1))));
                        arr_64 [i_4] = (-(((/* implicit */int) var_12)));
                    }
                }
                for (short i_20 = 0; i_20 < 20; i_20 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 3; i_21 < 17; i_21 += 3) 
                    {
                        arr_72 [i_1] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) 7918061428969170963LL))));
                        var_60 = ((/* implicit */short) ((((((/* implicit */int) arr_26 [i_20] [i_3] [i_3] [i_20] [i_1] [i_4])) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((_Bool) (signed char)-27))) : (((/* implicit */int) ((unsigned char) var_18)))));
                    }
                    var_61 += ((/* implicit */_Bool) arr_56 [i_1] [(signed char)2] [i_3] [i_4] [i_20]);
                    /* LoopSeq 2 */
                    for (int i_22 = 0; i_22 < 20; i_22 += 3) 
                    {
                        var_62 = ((/* implicit */unsigned short) 574577357);
                        var_63 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_65 [i_3] [i_3] [i_4] [i_4 - 2] [i_22]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)-16))))) : (((/* implicit */int) arr_11 [i_4 + 1] [i_4 - 1] [i_4 + 1]))));
                    }
                    for (long long int i_23 = 0; i_23 < 20; i_23 += 3) 
                    {
                        var_64 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(-233739834))))));
                        var_65 = ((/* implicit */short) ((arr_9 [i_1] [i_3] [i_4 + 2]) | (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                    }
                }
            }
            for (unsigned char i_24 = 0; i_24 < 20; i_24 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                    {
                        arr_87 [i_25] [10U] [10U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)131))));
                        var_66 = ((/* implicit */_Bool) ((short) (unsigned char)128));
                        var_67 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_67 [i_1] [i_1] [i_25] [i_25])) ? (var_2) : (((/* implicit */long long int) arr_23 [i_26] [i_25] [i_25] [i_25] [i_3] [(_Bool)1]))))));
                        var_68 = ((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))));
                        arr_88 [i_1] [i_3] [i_24] [i_25] [(_Bool)1] |= ((((/* implicit */_Bool) arr_8 [i_26 - 1] [i_3] [i_24])) ? (((/* implicit */int) arr_8 [i_26 - 1] [i_26 - 1] [i_26 - 1])) : (((/* implicit */int) (short)-3967)));
                    }
                    arr_89 [i_1] [i_1] [i_1] [i_25] = ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)1)))) < ((+(((/* implicit */int) arr_40 [i_1] [i_3] [i_1]))))));
                    var_69 = ((/* implicit */long long int) var_9);
                    var_70 += ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-99)) * (((/* implicit */int) arr_15 [i_1] [0LL]))));
                }
                for (unsigned char i_27 = 1; i_27 < 19; i_27 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_28 = 0; i_28 < 20; i_28 += 1) 
                    {
                        var_71 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) < (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) arr_4 [i_1]))))));
                        arr_94 [i_1] [i_1] [i_1] [i_24] [i_27 - 1] [(signed char)18] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1874253542)) ? (((/* implicit */int) arr_57 [i_1] [i_3] [i_1] [i_28] [i_28])) : (((/* implicit */int) (signed char)-72))))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) var_8))));
                        arr_95 [i_27] [i_27] = ((/* implicit */short) (+(((/* implicit */int) arr_50 [i_27 + 1] [i_27 - 1] [i_27 + 1] [i_27] [i_28]))));
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        var_72 = ((/* implicit */unsigned char) (_Bool)1);
                        var_73 = ((/* implicit */short) (+(((var_14) % (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_1] [i_3] [i_24] [i_27 - 1] [i_29])))))));
                    }
                    arr_98 [i_27] [i_24] [i_24] [i_27] = ((/* implicit */unsigned short) arr_44 [i_27] [i_3] [i_24] [(short)10] [i_3]);
                    /* LoopSeq 2 */
                    for (long long int i_30 = 0; i_30 < 20; i_30 += 3) 
                    {
                        var_74 = ((/* implicit */unsigned char) arr_46 [i_27] [i_27] [i_27] [i_27]);
                        var_75 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(1550732335)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)5392))));
                        var_76 = ((/* implicit */long long int) min((var_76), (((/* implicit */long long int) (!((_Bool)1))))));
                        var_77 = (signed char)-52;
                        arr_103 [i_1] [i_3] [i_24] [i_27] [i_30] [i_3] = ((_Bool) arr_50 [i_1] [i_3] [i_3] [i_27 - 1] [i_27 + 1]);
                    }
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        arr_107 [i_1] [i_1] [i_1] [i_1] [i_1] [i_27] [i_1] = ((((/* implicit */_Bool) arr_74 [i_31] [i_31] [i_31] [i_27] [i_27 + 1] [i_24] [i_24])) ? (((/* implicit */int) arr_74 [i_31] [i_31] [i_27 - 1] [i_27 + 1] [i_27 - 1] [i_3] [i_3])) : (((/* implicit */int) (short)-32762)));
                        arr_108 [i_1] [i_1] [i_3] [i_3] [i_27] [i_31] [i_31] = ((/* implicit */_Bool) var_11);
                    }
                }
                for (unsigned char i_32 = 0; i_32 < 20; i_32 += 3) 
                {
                    arr_113 [(_Bool)1] [i_3] [i_3] [i_24] [i_24] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_32] [i_24] [i_3]))));
                    arr_114 [i_32] [i_32] = ((/* implicit */short) (signed char)112);
                }
                /* LoopSeq 1 */
                for (unsigned int i_33 = 3; i_33 < 19; i_33 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_34 = 1; i_34 < 18; i_34 += 3) 
                    {
                        var_78 = ((/* implicit */unsigned short) (+(arr_13 [i_33] [i_33])));
                        arr_121 [i_1] [i_1] [i_1] [i_33] [i_34] [i_34] [i_33] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_58 [i_1] [12LL] [12LL] [12LL] [i_34 + 2]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_35 = 4; i_35 < 16; i_35 += 4) 
                    {
                        arr_125 [i_33] [i_24] [i_24] [i_3] [i_3] [i_33] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)52))) : (5794613535004328028LL)));
                        arr_126 [i_35] [i_33] [i_24] [i_33] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)1))));
                        var_79 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) || (var_0))) ? (3936832577U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))));
                        var_80 = ((arr_119 [i_1] [i_33] [i_35 - 2] [i_33] [(unsigned short)12]) >= (((/* implicit */int) arr_104 [i_1] [i_33 - 2] [i_35 - 2] [i_33 - 3] [i_35 + 1] [i_35 - 4] [i_33 - 2])));
                    }
                    var_81 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2004196315814007226LL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)208)) < (((/* implicit */int) arr_104 [i_1] [i_1] [i_3] [i_3] [i_1] [i_33] [i_33]))))) : ((+(((/* implicit */int) var_7))))));
                    /* LoopSeq 2 */
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                    {
                        var_82 = (~(((/* implicit */int) ((signed char) var_3))));
                        var_83 = ((/* implicit */int) ((long long int) ((((/* implicit */int) (signed char)-66)) + (((/* implicit */int) (_Bool)1)))));
                        arr_130 [i_1] [i_3] [i_33] [i_1] [i_36] = ((/* implicit */unsigned char) arr_61 [i_1] [i_33] [i_3] [i_33 - 2] [i_36]);
                        arr_131 [i_33] = ((/* implicit */short) var_18);
                    }
                    for (signed char i_37 = 0; i_37 < 20; i_37 += 2) 
                    {
                        var_84 = arr_77 [i_1] [i_3] [i_3] [i_24];
                        var_85 = var_2;
                    }
                }
            }
        }
    }
}
