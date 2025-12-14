/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89188
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned short)11022)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17344))) : (12255477785436428397ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (558129398736785387LL)))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned short)23605))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_0]))) : (4418865733885799901LL))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))) : (((((/* implicit */_Bool) (unsigned short)23605)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_3]))) : (arr_8 [i_0] [i_0] [i_2] [i_2] [i_1])))));
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (arr_4 [i_1 - 2] [i_1 - 1] [i_3]) : (((/* implicit */unsigned long long int) arr_7 [i_1 + 2]))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_6 [i_0] [i_1] [i_3])))) ? (arr_6 [i_1 - 2] [i_1 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9))))));
                }
                arr_12 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 913969576591036242ULL)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)65535))))));
                var_19 = ((/* implicit */long long int) arr_10 [i_1] [i_1] [i_2] [i_0] [i_1] [i_2]);
                var_20 = ((/* implicit */unsigned int) arr_0 [i_0] [i_1 + 2]);
                var_21 = ((/* implicit */long long int) (unsigned short)5427);
            }
            for (long long int i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(arr_3 [(signed char)10] [i_1 + 2] [i_4 - 1]))))));
                var_23 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1] [i_1]))));
                arr_15 [i_0] [i_1] [i_4] = ((/* implicit */_Bool) ((int) var_14));
                var_24 = ((/* implicit */_Bool) arr_7 [i_4]);
                var_25 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2])) / (((/* implicit */int) arr_0 [i_1 - 1] [i_1]))));
            }
            var_26 = ((/* implicit */unsigned long long int) (unsigned short)41931);
        }
    }
    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((long long int) arr_16 [i_5] [i_5]));
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) arr_18 [i_5] [i_5]))))) && (((/* implicit */_Bool) (~(arr_20 [i_5]))))));
        }
        for (unsigned char i_7 = 3; i_7 < 14; i_7 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 1; i_8 < 14; i_8 += 2) 
            {
                var_29 |= arr_21 [i_5] [i_5] [i_8];
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) ((signed char) arr_22 [i_5] [i_7 - 3]))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_19 [i_5])), (arr_22 [i_8 + 1] [i_5]))))));
                var_31 = ((/* implicit */int) arr_23 [i_7 - 1] [i_8 + 2] [i_8 + 2] [i_7 - 1]);
            }
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)23605)) ? (((/* implicit */long long int) 1870189202U)) : (9223372036854775807LL)));
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) arr_22 [i_5] [i_5])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) (unsigned short)23605)))))))) ? (((/* implicit */long long int) ((int) arr_25 [i_5] [i_7 + 2] [i_9]))) : (arr_16 [i_7 + 2] [i_9])));
            }
        }
        for (unsigned char i_10 = 2; i_10 < 15; i_10 += 3) 
        {
            var_34 -= ((/* implicit */int) -9223372036854775807LL);
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_24 [i_10 - 2] [i_5] [i_10 + 1] [i_10 - 1])))) * (min((arr_23 [i_10 - 2] [i_10 - 1] [i_10 - 2] [i_10 - 2]), (((/* implicit */long long int) arr_24 [i_10 - 2] [i_5] [i_10 + 1] [i_10 + 1]))))));
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                arr_32 [i_5] [i_5] [i_11] = ((/* implicit */signed char) ((unsigned short) ((signed char) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) arr_16 [i_5] [i_5]))))));
                var_36 = ((/* implicit */unsigned char) -9223372036854775807LL);
                arr_33 [i_5] [i_5] [i_11] = ((/* implicit */unsigned char) min((arr_21 [i_10 - 1] [i_10] [i_10 - 1]), (((/* implicit */long long int) arr_18 [i_5] [i_5]))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */signed char) (-(((long long int) 6165471058103668374ULL))));
                            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (~(min((min((((/* implicit */unsigned int) arr_37 [i_5] [(unsigned short)12] [i_11] [i_11] [i_12] [i_13])), (arr_20 [(signed char)14]))), (((/* implicit */unsigned int) arr_30 [i_5] [i_10 - 1] [i_10 - 1] [i_12 - 1])))))))));
                            var_39 = ((/* implicit */unsigned int) (-(((long long int) (signed char)-126))));
                            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6191266288273123219ULL)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (unsigned short)41930))))) ? (min((arr_28 [i_12 - 1] [i_10] [i_10 + 1]), (arr_28 [i_12 + 1] [i_10] [i_10 - 2]))) : ((-(arr_28 [i_12 + 2] [i_11] [i_10 + 1])))));
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_5] [i_11] [i_13])) ? (((((/* implicit */_Bool) ((signed char) (unsigned short)65535))) ? (((((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_5] [i_10 + 1]))) : (var_5))) : (min((((/* implicit */long long int) var_9)), (arr_31 [i_5] [i_10 - 2] [i_11] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_30 [i_5] [i_5] [i_10 - 2] [i_12 - 1]), (arr_30 [i_5] [i_10 - 1] [i_10 + 1] [i_12 + 2])))))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */short) min((((((/* implicit */_Bool) -9223372036854775807LL)) ? (((-9223372036854775807LL) ^ (arr_31 [i_5] [i_10] [i_10] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)69)) / (((/* implicit */int) arr_36 [i_10 - 1] [i_5]))))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)62)), (((unsigned char) arr_34 [i_5] [i_10] [i_5])))))));
            }
        }
        for (signed char i_14 = 1; i_14 < 15; i_14 += 1) 
        {
            arr_42 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((+((-(var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46)))));
            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? ((~(((((/* implicit */_Bool) arr_23 [i_5] [i_14] [i_14 + 1] [i_14])) ? (arr_28 [i_14] [i_14] [i_5]) : (arr_21 [i_14] [i_14] [i_5]))))) : (min((min((arr_17 [i_5]), (((/* implicit */long long int) arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))), (((/* implicit */long long int) (~(((/* implicit */int) arr_41 [i_5] [i_5] [i_14])))))))));
        }
        /* LoopSeq 2 */
        for (signed char i_15 = 0; i_15 < 16; i_15 += 1) 
        {
            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) 4505516207606735674ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)255)), (arr_45 [i_5] [i_5])))) ? (((((/* implicit */_Bool) (unsigned char)89)) ? (var_7) : (-9223372036854775807LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_5] [i_5])))))))));
            var_45 = ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_5] [i_5] [i_5]))))) ? (arr_17 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5] [i_5] [i_5]))))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_37 [i_5] [i_5] [i_5] [i_5] [i_15] [i_5])))))));
        }
        for (unsigned long long int i_16 = 2; i_16 < 12; i_16 += 2) 
        {
            var_46 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_19 [i_16 + 2])))) ? (((/* implicit */int) ((((/* implicit */int) arr_19 [i_16 - 1])) < (((/* implicit */int) arr_19 [i_16 + 3]))))) : (((/* implicit */int) arr_19 [i_16 + 1]))));
            var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((((/* implicit */int) arr_36 [i_5] [i_16])) / (((/* implicit */int) arr_36 [i_5] [i_16 + 1])))))));
            /* LoopSeq 1 */
            for (unsigned char i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                var_48 = ((/* implicit */_Bool) 4477893760409264913ULL);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 4) 
                {
                    var_49 = ((/* implicit */_Bool) ((((/* implicit */int) arr_53 [i_16 + 4] [i_18])) % (((/* implicit */int) arr_53 [i_16 + 2] [i_16 + 3]))));
                    var_50 = ((/* implicit */unsigned int) ((signed char) (unsigned short)6053));
                }
                for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    arr_58 [i_5] [i_16] [i_5] [i_19] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)-26)) ^ (((/* implicit */int) (unsigned char)119))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 0; i_20 < 16; i_20 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned char) min((((/* implicit */int) var_2)), ((-(((/* implicit */int) arr_41 [i_16 + 4] [i_16 + 3] [i_16 + 3]))))));
                        var_52 = ((/* implicit */signed char) arr_48 [i_5] [i_5] [i_17] [i_17]);
                    }
                }
                for (unsigned char i_21 = 1; i_21 < 14; i_21 += 1) 
                {
                    var_53 = ((/* implicit */unsigned long long int) (unsigned short)0);
                    var_54 = ((/* implicit */unsigned int) ((((min((arr_47 [i_5]), (arr_50 [i_5] [i_5] [i_5]))) / (min((((/* implicit */long long int) (signed char)-126)), (arr_28 [i_5] [i_17] [i_21]))))) < (min((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-69)) + (2147483647))) << (((6191266288273123236ULL) - (6191266288273123236ULL)))))), (arr_48 [i_16 + 1] [i_21 + 1] [i_21 + 1] [i_21 + 1])))));
                    arr_64 [i_5] [i_5] [i_16] [i_5] [i_21] = ((/* implicit */unsigned long long int) ((arr_34 [i_5] [i_16] [i_5]) != (((unsigned long long int) arr_47 [i_16 - 2]))));
                    var_55 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) var_12))), (((((/* implicit */_Bool) arr_22 [i_21 + 2] [i_16 + 4])) ? (((/* implicit */int) arr_22 [i_21 + 1] [i_16 + 2])) : (((/* implicit */int) arr_22 [i_21 + 1] [i_16 + 2]))))));
                }
            }
            var_56 = (+(((((_Bool) arr_61 [i_5] [i_16] [i_16] [i_16])) ? ((~(((/* implicit */int) arr_53 [i_5] [i_5])))) : (((/* implicit */int) arr_44 [i_16 - 1] [i_16 + 1])))));
        }
    }
    /* vectorizable */
    for (long long int i_22 = 0; i_22 < 20; i_22 += 2) 
    {
        var_57 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
        /* LoopSeq 3 */
        for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_24 = 3; i_24 < 16; i_24 += 4) 
            {
                var_58 = ((/* implicit */signed char) ((arr_65 [i_24 + 3]) & (((/* implicit */unsigned long long int) 114234236U))));
                /* LoopSeq 1 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_66 [i_24 + 2])) ? (((/* implicit */int) arr_67 [i_24 - 2] [i_24 - 2])) : (((/* implicit */int) arr_67 [i_24 - 2] [i_23]))));
                    var_60 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2048)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (signed char)50))))) ? (((((/* implicit */_Bool) (signed char)-5)) ? (65535) : (((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) arr_66 [i_24 + 2]))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_26 = 2; i_26 < 18; i_26 += 4) 
                {
                    var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_66 [i_24 - 3])) ? (((/* implicit */int) arr_66 [i_24 + 3])) : (((/* implicit */int) arr_66 [i_24 + 3]))));
                    var_62 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_68 [i_24 + 4] [i_24] [i_24 - 1])) ? (-3685138414051695014LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20)))));
                    var_63 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)15))))) ? (((((/* implicit */_Bool) arr_66 [i_22])) ? (((/* implicit */unsigned long long int) 6U)) : (1333562059546675908ULL))) : (((/* implicit */unsigned long long int) arr_72 [i_24] [i_24 + 2] [i_24] [i_26 + 2] [i_26]))));
                }
                for (unsigned int i_27 = 0; i_27 < 20; i_27 += 1) 
                {
                    var_64 = ((/* implicit */short) ((unsigned int) (signed char)-69));
                    var_65 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)24314)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24314))) : (5649242949426772049ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189)))));
                    var_66 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-24314)) ? (12797501124282779567ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27)))));
                }
                for (signed char i_28 = 1; i_28 < 16; i_28 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_29 = 0; i_29 < 20; i_29 += 3) 
                    {
                        var_67 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (18211554688837841453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))));
                        arr_86 [i_29] = ((/* implicit */short) ((arr_85 [i_28 + 1] [i_28 + 1] [i_24] [i_28] [i_24] [i_24 - 3]) / (arr_85 [i_29] [i_28 - 1] [i_28] [i_28 + 2] [i_28] [i_24 + 2])));
                        var_68 = ((/* implicit */unsigned char) ((1497560849040834710ULL) | (((/* implicit */unsigned long long int) -6604394307535253828LL))));
                        var_69 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3685138414051695014LL))));
                    }
                    for (int i_30 = 0; i_30 < 20; i_30 += 2) /* same iter space */
                    {
                        var_70 = ((/* implicit */unsigned char) ((signed char) 6U));
                        var_71 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_80 [i_24 + 2]))));
                        var_72 = ((/* implicit */unsigned int) arr_71 [i_23]);
                    }
                    for (int i_31 = 0; i_31 < 20; i_31 += 2) /* same iter space */
                    {
                        arr_93 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned int) arr_71 [i_22]);
                        var_73 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_77 [i_22] [i_24] [i_24] [i_24])) ? (arr_77 [i_22] [i_22] [i_24 - 1] [i_28 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                    }
                    for (unsigned long long int i_32 = 0; i_32 < 20; i_32 += 2) 
                    {
                        var_74 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_89 [i_22] [i_22] [i_22]))) ^ (((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */unsigned long long int) arr_73 [i_24 - 1] [i_24 - 1] [i_24 + 3] [i_24])) : (arr_87 [i_22] [i_23] [i_24] [i_24])))));
                        arr_97 [i_22] = ((/* implicit */unsigned short) (-(6U)));
                    }
                    var_75 = ((/* implicit */unsigned short) 9U);
                    var_76 = ((/* implicit */unsigned int) ((signed char) arr_96 [i_24 + 1] [i_24 + 1] [i_24] [i_24 + 1] [i_24 + 2] [i_24 - 3] [i_28 + 4]));
                    var_77 = ((/* implicit */unsigned int) min((var_77), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_92 [i_24 - 1] [i_28 - 1])))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_33 = 4; i_33 < 18; i_33 += 4) 
                {
                    for (long long int i_34 = 1; i_34 < 19; i_34 += 2) 
                    {
                        {
                            var_78 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)8442)) : ((+(((/* implicit */int) (signed char)-27))))));
                            arr_105 [i_23] [i_24] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64200))) * (arr_76 [i_34] [i_33 - 2] [i_33 - 2] [i_33 - 2])));
                        }
                    } 
                } 
            }
            var_79 = ((/* implicit */int) -2530194068052338619LL);
        }
        for (unsigned int i_35 = 1; i_35 < 17; i_35 += 3) 
        {
            var_80 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)123)) ? (arr_68 [i_35 + 2] [i_35] [i_35 + 3]) : (arr_68 [i_35 + 1] [i_35] [i_35 + 3])));
            var_81 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_72 [i_35 - 1] [i_35] [i_35] [i_35] [i_35 + 2]))));
        }
        for (unsigned int i_36 = 2; i_36 < 17; i_36 += 1) 
        {
            var_82 = ((/* implicit */unsigned long long int) ((arr_70 [i_36 - 2] [i_36 - 1] [i_36 + 2]) < (arr_77 [i_36 + 2] [i_36 + 2] [i_36 + 2] [i_36])));
            var_83 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_104 [i_36 + 3] [i_36 + 1] [i_36 + 3] [i_36 - 1] [i_36])) || (((/* implicit */_Bool) arr_71 [i_36 + 2]))));
        }
    }
    var_84 = ((/* implicit */unsigned int) var_4);
}
