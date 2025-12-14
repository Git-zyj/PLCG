/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87624
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
    var_15 = ((/* implicit */signed char) var_2);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 4118090797U))) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)25542)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) || (arr_1 [i_0])))) : ((~(((/* implicit */int) arr_2 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                arr_8 [i_2 - 2] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) (+(794969624636647416ULL)));
                var_17 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                var_18 = ((/* implicit */long long int) arr_6 [i_1] [i_2 + 1]);
            }
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                var_19 ^= ((/* implicit */unsigned int) var_2);
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) ((11918269855611368246ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53)))))))))));
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_5);
            }
            for (unsigned int i_4 = 4; i_4 < 17; i_4 += 1) 
            {
                var_21 = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]);
                /* LoopSeq 1 */
                for (unsigned int i_5 = 1; i_5 < 16; i_5 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_14 [i_4] [i_4] [i_4] [i_4 - 4])))) ? (arr_14 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 - 3]) : (arr_14 [i_4 - 3] [i_4 - 3] [i_4 - 3] [i_4 - 4])));
                    arr_17 [i_0] [i_0] [i_4] [i_4] [i_4] [i_5 - 1] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (signed char)87))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)22))))))) ^ (((/* implicit */int) (signed char)-6)))))));
                        var_24 = ((/* implicit */long long int) arr_7 [i_4 + 1] [i_4] [i_4 - 2] [i_4]);
                        var_25 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)56925)) + (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) ^ (9556953032350940534ULL)))));
                    }
                    var_26 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                }
            }
            var_27 = ((/* implicit */signed char) arr_15 [i_0] [i_1]);
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1])) | ((-((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1]))))))));
            /* LoopSeq 4 */
            for (unsigned int i_7 = 3; i_7 < 15; i_7 += 2) 
            {
                arr_23 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_7 + 2] [i_7 + 3] [i_7 + 4])), (2144400579753839404ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17044))))) : (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) arr_13 [i_7 - 1] [i_7 + 1] [i_7 + 2])) : (((/* implicit */int) arr_13 [i_7 + 2] [i_7 + 3] [i_7 + 3]))))));
                arr_24 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7 + 4] [i_7 + 4] [i_7 + 1] [i_7 + 4])) ? (arr_14 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)89)))))) ? (((/* implicit */int) min(((unsigned short)65531), (((/* implicit */unsigned short) arr_3 [i_7 + 1]))))) : (((/* implicit */int) arr_6 [i_0] [i_0]))));
                var_29 |= ((/* implicit */unsigned short) arr_14 [i_0] [i_0] [i_0] [i_0]);
                var_30 = ((/* implicit */int) ((((/* implicit */int) (signed char)35)) > (((/* implicit */int) (unsigned short)65530))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_18 [i_0] [i_8])), (((arr_3 [i_1]) ? (((/* implicit */int) (short)20961)) : (((/* implicit */int) arr_16 [i_8]))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0]))))))) : (((/* implicit */int) ((((/* implicit */int) arr_26 [i_0])) < (((/* implicit */int) arr_26 [i_1])))))));
                var_32 += (((((_Bool)1) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (short)-8262)))) == (((/* implicit */int) arr_7 [i_8] [i_1] [i_8] [i_8])));
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) min((arr_22 [i_0] [i_0] [i_0]), (min(((signed char)-62), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_0]))))))))))));
                var_34 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_26 [i_0])), (min((arr_7 [i_8] [i_1] [i_8] [i_8]), (((/* implicit */unsigned char) (signed char)21))))))) - (((((((/* implicit */int) arr_18 [i_0] [i_0])) << (((773281744U) - (773281740U))))) * (((/* implicit */int) (unsigned short)9999))))));
            }
            for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                arr_30 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) & (((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_9] [i_9])) ? (arr_0 [i_9] [i_1]) : (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_1] [i_9]))))));
                var_35 &= ((/* implicit */unsigned int) ((((((-1459863291) % (((/* implicit */int) (unsigned short)24374)))) + (2147483647))) << (((/* implicit */int) ((signed char) min(((unsigned short)42748), (((/* implicit */unsigned short) arr_18 [i_1] [i_1]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    var_36 += ((/* implicit */short) (~(((/* implicit */int) (signed char)121))));
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
                    {
                        var_37 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_11]))));
                        arr_36 [i_11] = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_11]);
                        arr_37 [i_0] [i_1] [i_0] [i_10] [i_11] [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((arr_33 [i_0] [i_0] [i_9] [i_10] [i_11]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_9] [i_10]))))));
                        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_0] [i_1] [i_11])))))));
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_9] [i_9]))));
                    }
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                    {
                        var_40 = (i_12 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_12] [i_0])) << (((((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [i_1] [i_12] [i_1])) - (57193)))))) : (((/* implicit */signed char) ((((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_12] [i_0])) << (((((((((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [i_1] [i_12] [i_1])) - (57193))) + (40439))) - (3))))));
                        var_41 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) <= (((/* implicit */int) (signed char)-119)))))));
                    }
                    for (signed char i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) arr_22 [i_0] [i_10] [i_13]))));
                        var_44 -= arr_39 [i_0] [i_10] [i_10] [i_9] [i_1] [i_0];
                        var_45 *= ((/* implicit */_Bool) (+(arr_43 [i_1] [i_1] [i_1] [i_1])));
                    }
                    var_46 = (+(((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_1] [i_1] [i_9] [i_0])));
                }
                arr_44 [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (+(arr_0 [i_1] [i_1])))))) && (((/* implicit */_Bool) arr_31 [i_1] [i_9]))));
            }
            /* vectorizable */
            for (unsigned char i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                arr_48 [i_14] [i_0] [i_0] = (unsigned short)9980;
                var_47 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_0]))));
                var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_41 [i_14] [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                arr_49 [i_1] [i_14] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)61395))))));
                var_49 = ((/* implicit */unsigned short) (-(arr_31 [i_1] [i_14])));
            }
        }
        arr_50 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41905)) & (((/* implicit */int) (_Bool)1))));
        var_50 = ((/* implicit */unsigned short) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_0] [i_0])) + (1188529028))))));
    }
    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) 
    {
        arr_55 [i_15] = ((/* implicit */_Bool) arr_53 [i_15] [i_15]);
        var_51 *= ((/* implicit */signed char) var_2);
        arr_56 [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_0))) && (((/* implicit */_Bool) (~(1238764987))))));
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_61 [i_15] [i_16] = ((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL))));
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 1; i_17 < 8; i_17 += 3) 
            {
                arr_64 [i_15] [i_16] [i_17] [i_17 + 2] = ((/* implicit */unsigned long long int) var_13);
                arr_65 [i_15] [i_17 - 1] = max((((/* implicit */unsigned short) (unsigned char)103)), ((unsigned short)8191));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_18 = 1; i_18 < 10; i_18 += 3) 
                {
                    var_52 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_17 + 1] [i_17 + 1] [i_18 + 1] [i_18] [i_18 + 1] [i_18 + 1] [i_18 - 1])) | (((/* implicit */int) arr_20 [i_17 + 1] [i_17 + 3] [i_17 + 1] [i_17] [i_18 + 1] [i_18 + 1] [i_17 + 3]))));
                    var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) arr_28 [i_16] [i_16]))));
                }
                for (unsigned short i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
                {
                    var_54 = ((/* implicit */unsigned int) arr_20 [i_15] [i_15] [i_15] [i_15] [i_17] [i_19] [i_19]);
                    arr_73 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_17 + 3] [i_17 + 2] [i_17 + 2] [i_17 + 2] [i_17 - 1] [i_17 + 3] [i_17 + 1]))) ^ (((((/* implicit */_Bool) arr_40 [i_17] [i_17 - 1] [i_17] [i_17 + 2] [i_17 + 2] [i_17 + 2] [i_17 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_17] [i_17 + 3] [i_17 + 3] [i_17 - 1] [i_17 + 1] [i_17 + 1] [i_17 + 1]))) : (3650489760710868887LL)))));
                    var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)56055)) == (-2727430)))) == (((-2727412) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_19] [i_16])))))))));
                    var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 10732753184888184285ULL)) || ((_Bool)1)))))));
                }
                for (unsigned short i_20 = 0; i_20 < 11; i_20 += 3) /* same iter space */
                {
                    var_57 = ((/* implicit */unsigned char) ((arr_14 [i_17 - 1] [i_17 - 1] [i_17 + 3] [i_17 + 3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_17 - 1] [i_17 + 1] [i_17 + 3] [i_17 + 3])) || (((/* implicit */_Bool) arr_45 [i_17 + 1] [i_17 - 1] [i_17 - 1] [i_17 - 1]))))))));
                    arr_77 [i_15] [i_15] [i_17] [i_20] = ((/* implicit */signed char) (~(var_6)));
                    var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) var_6))));
                    var_59 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32162)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (_Bool)1))))) != (arr_43 [i_17 + 1] [i_17 + 1] [i_17 + 2] [i_17 - 1]))))) & (arr_46 [i_15] [i_16] [i_15] [i_16])));
                    var_60 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2095103328)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8729)))))) : (((min((arr_15 [i_16] [i_16]), (((/* implicit */unsigned int) var_13)))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_15] [i_15] [i_15] [i_15])))))));
                }
                for (unsigned short i_21 = 0; i_21 < 11; i_21 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_22 = 2; i_22 < 9; i_22 += 1) 
                    {
                        var_61 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)32559))));
                        arr_83 [i_15] [i_16] [i_21] [i_15] = ((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_38 [i_17] [i_17 + 3] [i_17 + 3] [i_17 - 1] [i_21] [i_17]))))));
                        arr_84 [i_15] [i_22 + 2] [i_17 + 2] [i_21] [i_21] = ((/* implicit */signed char) var_1);
                        var_62 = ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_17 + 1] [i_17 + 1] [i_17 + 3])) != (-2727429)));
                    }
                    for (unsigned short i_23 = 0; i_23 < 11; i_23 += 4) 
                    {
                        var_63 &= ((/* implicit */long long int) ((((/* implicit */int) var_10)) - ((-(((/* implicit */int) arr_63 [i_15] [i_15] [i_15]))))));
                        arr_89 [i_15] [i_21] [i_15] [i_21] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) arr_71 [i_15] [i_15])) || ((!(((/* implicit */_Bool) arr_13 [i_17 + 2] [i_17 + 3] [i_15]))))));
                        arr_90 [i_15] [i_23] [i_17 + 3] [i_21] [i_23] [i_23] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_40 [i_16] [i_16] [i_16] [i_16] [i_23] [i_17] [i_23])) << (((((/* implicit */int) arr_72 [i_16] [i_17] [i_21] [i_21])) - (11685)))))));
                        arr_91 [i_15] [i_16] [i_21] [i_21] [i_15] = ((/* implicit */unsigned long long int) 730416604);
                    }
                    var_64 += arr_76 [i_15] [i_15];
                    var_65 = ((/* implicit */int) ((unsigned int) var_12));
                    arr_92 [i_15] [i_15] [i_16] [i_15] [i_15] [i_21] = ((/* implicit */_Bool) max((min(((~(16131377166452712172ULL))), (((/* implicit */unsigned long long int) ((long long int) arr_18 [i_15] [i_21]))))), (((/* implicit */unsigned long long int) var_0))));
                }
                arr_93 [i_15] [i_16] = ((/* implicit */long long int) var_9);
                arr_94 [i_15] [i_15] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_17 + 2]))) <= (arr_31 [i_17 - 1] [i_17 + 3]))))));
            }
            var_66 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_15] [i_16] [i_16] [i_16]))))), (16131377166452712164ULL)));
            var_67 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_74 [i_16])) < ((((~(((/* implicit */int) var_8)))) / ((+(((/* implicit */int) arr_32 [i_15] [i_16] [i_16]))))))));
        }
    }
    for (short i_24 = 3; i_24 < 9; i_24 += 1) 
    {
        var_68 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((((/* implicit */_Bool) ((signed char) (unsigned char)12))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)63328)) >> (((((/* implicit */int) arr_86 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])) - (396)))))) : (4393083147725084021ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_80 [i_24] [i_24] [i_24 + 1] [i_24 + 1])) && (((/* implicit */_Bool) min(((signed char)-65), (((/* implicit */signed char) arr_81 [i_24] [4U] [i_24 - 1] [i_24 - 1] [i_24 - 3] [i_24 - 3] [i_24 - 1])))))))))));
        arr_97 [i_24 - 2] [i_24 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_60 [i_24 - 1]))) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43102))))) != (((/* implicit */int) arr_1 [i_24 + 1])))))));
    }
}
