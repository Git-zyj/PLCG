/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74329
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
    var_12 = ((/* implicit */short) ((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_13 = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) <= (4294967268U)))) >= (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) (unsigned char)70)) - (57))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (signed char i_3 = 3; i_3 < 12; i_3 += 4) /* same iter space */
            {
                arr_10 [i_2] = ((/* implicit */long long int) (+(((((/* implicit */int) (short)32767)) * (((/* implicit */int) (unsigned char)185))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        arr_15 [(short)8] [i_1] = ((((/* implicit */int) ((_Bool) 2721838937706073677LL))) - (((/* implicit */int) (unsigned char)22)));
                        var_14 = ((((/* implicit */_Bool) ((((/* implicit */long long int) 4294967275U)) * (0LL)))) ? (((/* implicit */int) (unsigned short)17715)) : (((((/* implicit */int) (unsigned char)209)) - (((/* implicit */int) (unsigned char)31)))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((8980610451935722118ULL) <= (6560232424555570527ULL)))) : (((((/* implicit */_Bool) -1541667328299526957LL)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (short)12904)))))))));
                        arr_18 [i_1] [i_1] [(short)1] [(short)1] [i_4] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)65525)) | (((/* implicit */int) arr_14 [i_6] [i_4] [i_3] [i_3] [i_3] [i_1] [i_1])))) * (((/* implicit */int) ((arr_8 [i_2] [3LL] [i_2] [(unsigned char)3]) == (((/* implicit */unsigned long long int) arr_12 [i_1] [i_2] [i_2] [i_2] [i_6] [i_3])))))));
                        var_16 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_6])) ? (((/* implicit */int) (unsigned short)0)) : (arr_11 [i_1] [i_2] [i_3] [i_1] [i_3] [i_2]))));
                        arr_19 [i_6] [i_4] [12ULL] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */int) ((arr_3 [i_1] [i_3 + 1]) ? (((((/* implicit */_Bool) (unsigned short)10)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_4])) > (((/* implicit */int) arr_9 [i_3] [i_3] [i_3]))))))));
                        arr_20 [i_4] [i_3 - 2] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    arr_21 [i_1] [(signed char)12] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_1] [i_3] [4ULL])) ? (((/* implicit */int) (short)-25812)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65525)) > (((/* implicit */int) (unsigned short)65525)))))));
                    arr_22 [(_Bool)1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (~(4659435270178648264ULL)));
                }
            }
            for (signed char i_7 = 3; i_7 < 12; i_7 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_7] [i_7] [i_7] [i_7 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (3892822796524057470LL)))) ? (1303462051U) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))))));
                var_18 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_1 [i_1])))) <= ((-(((/* implicit */int) (unsigned short)0))))));
                arr_25 [i_1] [i_1] = (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            }
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                arr_28 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */unsigned long long int) arr_6 [i_2])) : (13730538426031842995ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                arr_29 [i_1] [i_8] [i_8] = ((/* implicit */short) -4351921963149775989LL);
                arr_30 [i_1] [i_1] [i_8] = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) arr_26 [(signed char)6] [i_2] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))) + (((((/* implicit */_Bool) arr_7 [i_8] [4U] [i_1])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) (unsigned char)44))))));
                arr_31 [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((3U) + (((/* implicit */unsigned int) arr_11 [i_1] [(short)1] [(short)1] [i_2] [(short)1] [(short)12])))) >= (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_4 [i_2])))))));
                arr_32 [i_1] [i_8] [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) 259680867)) & (4294967292U))));
            }
            for (unsigned char i_9 = 1; i_9 < 12; i_9 += 1) 
            {
                arr_37 [i_1] [i_9] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) (unsigned short)21343)) : (((/* implicit */int) (unsigned short)65472))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44202)) ? (((/* implicit */int) (short)-9580)) : (2147483647)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51955))) : (4321874486926059847LL)));
                arr_38 [i_1] [i_2] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_33 [i_1] [8LL] [i_1] [6])) ? (((/* implicit */int) arr_17 [i_1] [(_Bool)1] [i_9] [i_9] [i_9 + 1])) : (((/* implicit */int) arr_14 [i_1] [(short)9] [(short)9] [i_2] [i_2] [i_2] [i_9])))) | (((((/* implicit */_Bool) (unsigned char)9)) ? (arr_6 [i_1]) : (((/* implicit */int) (short)32766))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6792803652117753345LL)) ? (arr_8 [i_1] [i_1] [i_9] [i_9 - 1]) : (arr_8 [i_9] [i_9] [i_9 + 1] [i_9 - 1])));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4321874486926059847LL)) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)1023))))))))));
            }
            /* LoopSeq 3 */
            for (short i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_0 [15])) - (11482)))))) ? (((arr_1 [i_1]) ? (((/* implicit */int) arr_24 [i_1])) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) (_Bool)1))));
                arr_41 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_23 [i_1] [i_2] [i_2] [i_10]) > (((/* implicit */unsigned int) 845204638)))))) - ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13580))) : (arr_33 [i_1] [i_2] [i_10] [i_10])))));
            }
            for (short i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) arr_35 [i_1] [i_2] [i_1])) & (((/* implicit */int) arr_35 [i_1] [i_2] [i_11])))))));
                arr_44 [i_1] [i_2] [i_11] [i_11] = 4294967288U;
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) (_Bool)1);
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    var_25 = ((unsigned char) (-(arr_34 [2])));
                    arr_49 [i_1] [(unsigned short)4] [(unsigned char)6] [i_12] [i_12] [(unsigned short)4] &= arr_4 [i_2];
                    arr_50 [i_1] [3] [i_12] [i_12] &= ((/* implicit */unsigned char) ((arr_13 [i_1] [i_1] [i_1] [i_1] [1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_26 = ((((/* implicit */long long int) 8160)) / (-1355942037809023239LL));
                }
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)132)))) : (11581195096557472810ULL)));
            }
            arr_51 [i_1] = ((/* implicit */short) 234881024U);
            arr_52 [i_1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1]))));
            var_28 = ((/* implicit */_Bool) 3707535312U);
        }
        for (short i_14 = 4; i_14 < 10; i_14 += 1) 
        {
            arr_55 [i_14] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_14])) ? (377303051) : (((/* implicit */int) arr_45 [i_1] [i_14 + 3] [i_1]))));
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_54 [(unsigned short)4] [(unsigned short)4]))))) ? (((/* implicit */int) ((short) (unsigned short)44200))) : (((/* implicit */int) ((815363853441254406LL) == (8589934592LL))))));
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) ((_Bool) arr_40 [i_1]))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (4198471394225794586LL)))))))));
            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned short)21343))))))))));
            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) 2419198789457118234LL)) ? (2419198789457118221LL) : (2419198789457118221LL))))));
        }
        for (unsigned char i_15 = 1; i_15 < 11; i_15 += 4) 
        {
            var_33 = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
            arr_60 [i_15] = ((((/* implicit */_Bool) (unsigned char)29)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)));
            arr_61 [i_15] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8589934594LL)) ? (2051498718) : (((/* implicit */int) arr_5 [i_1] [i_15] [i_1]))))) ? (((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (18013544420201275133ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 845175850)) ? (arr_43 [4U] [i_15] [i_1] [i_1]) : (((/* implicit */int) (unsigned short)13580)))))));
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_15 + 2])) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) (unsigned short)44192)))))))));
        }
        var_35 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned int) ((arr_1 [i_1]) ? (((/* implicit */int) (unsigned short)51961)) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (4294967295U)));
        /* LoopSeq 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7230858521460078490LL)) ? (((/* implicit */int) arr_53 [i_1] [i_16])) : (arr_6 [i_16])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))) : (((-2419198789457118222LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))));
            var_37 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_36 [i_1] [i_1] [(unsigned short)6] [3LL]))));
            arr_64 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)21343)) << (((((/* implicit */int) (unsigned char)255)) - (241))))) << (((((/* implicit */int) (unsigned short)4717)) - (4716)))));
        }
        for (short i_17 = 3; i_17 < 10; i_17 += 2) /* same iter space */
        {
            arr_68 [i_1] = ((/* implicit */long long int) ((arr_16 [i_1] [i_17] [i_17 - 1]) ? (((/* implicit */int) arr_16 [i_1] [i_17] [i_17 - 2])) : (((/* implicit */int) arr_16 [9] [9] [i_17 - 2]))));
            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((65528) ^ (((/* implicit */int) (unsigned char)1))))) ? (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))))));
            arr_69 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & ((((_Bool)1) ? (((/* implicit */long long int) 317308958)) : (9223372036854775807LL)))));
            /* LoopSeq 2 */
            for (long long int i_18 = 0; i_18 < 13; i_18 += 3) 
            {
                arr_72 [(short)8] [(short)8] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -317308959)) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_1] [i_17] [i_1]))) : (7208537129223305168LL)))) ? (((/* implicit */int) arr_17 [i_17] [i_17 - 3] [i_17 - 3] [i_17 - 3] [10])) : (-1855494245)));
                var_39 = ((/* implicit */unsigned long long int) ((short) (unsigned short)28040));
            }
            for (long long int i_19 = 0; i_19 < 13; i_19 += 1) 
            {
                var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1] [i_17 - 2] [i_17 - 1])) ? ((((_Bool)0) ? (arr_46 [i_1] [i_17] [i_1]) : (((/* implicit */int) arr_59 [i_1] [i_1])))) : (((/* implicit */int) arr_71 [i_17 + 2] [(_Bool)1] [i_17 - 1] [(_Bool)1]))));
                arr_75 [i_1] [i_1] [i_19] [i_19] = ((/* implicit */short) ((arr_48 [i_17 + 2] [i_17 + 2] [i_17] [i_17 - 2]) | (((/* implicit */unsigned long long int) arr_43 [i_17 + 2] [i_17 + 2] [i_17] [i_17 + 2]))));
            }
            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_1] [i_17] [i_1])) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) arr_74 [11U] [i_17 - 1] [i_17 - 2])) : (((/* implicit */int) (signed char)-1))));
        }
        for (short i_20 = 3; i_20 < 10; i_20 += 2) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_1] [i_1] [i_20 + 3] [i_20])) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80)))));
            arr_78 [i_1] [i_20] [i_20] = ((/* implicit */_Bool) (+(262112U)));
        }
    }
    for (unsigned int i_21 = 2; i_21 < 22; i_21 += 1) 
    {
        arr_81 [i_21] [i_21] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((arr_79 [i_21 + 2]) && (arr_79 [i_21 + 2]))))));
        var_43 = ((/* implicit */long long int) arr_79 [i_21]);
    }
}
