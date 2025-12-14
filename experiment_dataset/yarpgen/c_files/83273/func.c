/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83273
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
    var_19 &= ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_6)), (4294967295U))) >> (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) ((((/* implicit */int) (signed char)83)) <= (((/* implicit */int) (_Bool)1))))))))));
    var_20 -= ((/* implicit */int) ((var_9) <= ((-(var_15)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)-65)))));
        var_22 += ((/* implicit */long long int) var_7);
        var_23 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)219)) != (((/* implicit */int) var_11))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) ((_Bool) min((1U), (((/* implicit */unsigned int) var_3)))))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((((/* implicit */int) var_6)), (var_15))) * (((/* implicit */int) min((var_6), (var_4))))))) ? (((max((arr_5 [i_4]), (((/* implicit */unsigned int) var_14)))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_5), (((/* implicit */short) (_Bool)1)))))))) ? (min((min((var_10), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) ((var_17) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_2] [0U] [i_1])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (signed char)58))))) <= (((((/* implicit */_Bool) (~(var_13)))) ? (var_15) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))))));
                            var_28 = ((/* implicit */_Bool) (+(var_10)));
                        }
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) arr_9 [i_6] [i_4] [i_4] [i_2]);
                            var_30 -= ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */unsigned long long int) 1206151908)) : (11270812181099606600ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_3]))))))), (((/* implicit */unsigned long long int) var_10))));
                            var_31 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])) ? (arr_9 [0] [i_1] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((unsigned char) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_17))))) : (min((((/* implicit */int) var_7)), (max((var_9), (var_15)))))));
                        }
                        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned char) (((~(-398452329))) >> (((arr_4 [i_1] [(short)6] [i_1]) - (8368421031551019778ULL)))));
                            var_33 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_14 [i_1] [i_1] [i_1] [i_2] [i_1] [i_4] [i_4]), (((/* implicit */unsigned short) var_3)))))));
                            var_34 = ((/* implicit */_Bool) ((var_4) ? (max((((long long int) arr_10 [6ULL] [i_4])), (((/* implicit */long long int) ((((/* implicit */_Bool) -398452340)) ? (2648466079U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7] [i_4] [i_3] [i_2] [i_1] [i_1])))))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_3] [i_4] [i_7])) : (var_9)))), (((((/* implicit */_Bool) 13697885514130204961ULL)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            var_35 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_8] [i_8])) ? (((/* implicit */int) var_14)) : (var_16)))) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) var_12)))) : (((((/* implicit */int) (_Bool)1)) | (-541661942)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_10 [i_1] [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_3] [i_4] [i_8]))) : (max((var_13), (((/* implicit */unsigned int) var_7)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))));
                            var_36 = (unsigned short)64393;
                            var_37 = ((/* implicit */unsigned int) max((((/* implicit */int) var_7)), (((((/* implicit */int) max(((unsigned char)36), (((/* implicit */unsigned char) (_Bool)1))))) >> (((/* implicit */int) (unsigned char)10))))));
                        }
                        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((4194240) % (((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_39 ^= ((/* implicit */_Bool) ((var_10) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_15) : (max((var_9), (((/* implicit */int) var_11)))))))));
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((((_Bool)1) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((int) var_7))) >= (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_17))))))) : (((((/* implicit */_Bool) arr_10 [i_2] [i_4])) ? (arr_1 [i_2] [i_1]) : (((/* implicit */unsigned int) var_9))))));
                            var_41 = ((/* implicit */unsigned char) var_5);
                            var_42 = ((/* implicit */signed char) ((((/* implicit */int) max(((signed char)83), (((/* implicit */signed char) (_Bool)1))))) >> (((((/* implicit */int) min(((short)-32432), (((/* implicit */short) (unsigned char)39))))) + (32433)))));
                        }
                        for (int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                        {
                            var_43 = (-(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_8))));
                            var_44 = ((((/* implicit */_Bool) (signed char)127)) ? (4294967275U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3897))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
                        {
                            var_45 *= ((/* implicit */unsigned char) ((int) 1639631837));
                            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((1452193557) >> (((((/* implicit */int) (unsigned char)60)) - (36))))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_16)) ? (1979799537U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_4] [(_Bool)1]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_3] [(_Bool)1] [i_12])))));
                            var_48 = ((/* implicit */short) (~(((/* implicit */int) arr_24 [i_4]))));
                        }
                    }
                } 
            } 
        } 
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_49 = ((/* implicit */long long int) ((((((/* implicit */int) arr_31 [i_13])) >= (((/* implicit */int) arr_31 [i_13])))) ? (max((var_9), (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) arr_30 [i_13])) ? (((/* implicit */int) arr_30 [i_13])) : (((/* implicit */int) arr_30 [i_13]))))));
        var_50 = ((/* implicit */int) ((((/* implicit */_Bool) -6555071136993280879LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_31 [i_13]), (var_7))))) : (max((((/* implicit */unsigned long long int) 4U)), (18446744073709551607ULL)))));
        var_51 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((min((var_3), (arr_31 [i_13]))) ? (max((((/* implicit */unsigned long long int) arr_30 [i_13])), (8137378284122316793ULL))) : (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)195))))))))));
    }
    for (unsigned int i_14 = 0; i_14 < 15; i_14 += 3) 
    {
        var_52 *= ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_14)), ((~(((/* implicit */int) var_12))))))));
        var_53 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_30 [i_14])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)15848))))) : (var_17)))) / (((((var_13) <= (((/* implicit */unsigned int) 1370849901)))) ? (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) (_Bool)1)) : (var_9)))) : (arr_32 [i_14]))));
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 15; i_15 += 4) 
        {
            for (long long int i_16 = 0; i_16 < 15; i_16 += 3) 
            {
                {
                    var_54 = ((var_3) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_14])) || (((/* implicit */_Bool) var_5)))))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 1133524811)) : (8137378284122316795ULL))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 1) 
                    {
                        var_55 = ((/* implicit */long long int) var_18);
                        var_56 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_15]))) : (var_8)))), (((unsigned long long int) var_2)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_14])))));
                    }
                    /* vectorizable */
                    for (long long int i_18 = 0; i_18 < 15; i_18 += 4) 
                    {
                        var_57 = ((/* implicit */long long int) ((unsigned short) arr_0 [i_18]));
                        /* LoopSeq 4 */
                        for (unsigned short i_19 = 0; i_19 < 15; i_19 += 3) 
                        {
                            var_58 = ((/* implicit */_Bool) ((arr_48 [i_14] [i_14] [i_16] [i_18] [i_19]) ? (((/* implicit */int) arr_48 [i_14] [i_14] [i_16] [i_18] [i_19])) : (((/* implicit */int) arr_48 [(unsigned short)7] [i_15] [i_15] [i_15] [i_15]))));
                            var_59 = ((/* implicit */_Bool) var_15);
                        }
                        for (short i_20 = 0; i_20 < 15; i_20 += 4) 
                        {
                            var_60 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (arr_32 [i_14])));
                            var_61 = (~(var_8));
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_62 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((7U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                            var_63 = ((/* implicit */_Bool) (+(5263220890582090315ULL)));
                            var_64 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_14] [i_14] [i_16] [i_18] [i_21])) ? (((/* implicit */int) arr_45 [i_21] [i_14] [i_16] [i_14] [i_14])) : (((/* implicit */int) arr_45 [i_21] [i_14] [i_16] [i_14] [i_14]))));
                            var_65 += ((/* implicit */int) ((unsigned char) var_7));
                            var_66 = ((/* implicit */short) 3U);
                        }
                        for (int i_22 = 0; i_22 < 15; i_22 += 1) 
                        {
                            var_67 = ((/* implicit */unsigned short) var_10);
                            var_68 = ((/* implicit */signed char) min((var_68), (((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) var_1))))))));
                            var_69 = ((/* implicit */signed char) (+(((long long int) var_14))));
                        }
                        var_70 |= ((((/* implicit */_Bool) var_17)) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))));
                        var_71 &= ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
                    }
                    /* vectorizable */
                    for (unsigned char i_23 = 0; i_23 < 15; i_23 += 1) 
                    {
                        var_72 = ((/* implicit */unsigned char) max((var_72), (((/* implicit */unsigned char) var_9))));
                        var_73 = ((/* implicit */unsigned char) (+(var_16)));
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 15; i_24 += 1) 
                    {
                        for (unsigned int i_25 = 0; i_25 < 15; i_25 += 3) 
                        {
                            {
                                var_74 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3505078345U)) ? (max((-8763768309305627010LL), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)27115)) : (-398452329)))))) : (((/* implicit */long long int) 1405651869))));
                                var_75 = ((/* implicit */short) max((var_75), (((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_11)), (arr_61 [i_15] [i_16] [i_24]))), (max((((/* implicit */unsigned long long int) var_1)), (arr_61 [i_16] [i_24] [5ULL]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_26 = 0; i_26 < 16; i_26 += 2) 
    {
        var_76 = ((/* implicit */unsigned int) ((var_1) ? (((((/* implicit */_Bool) arr_30 [i_26])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_0)) ? (arr_67 [i_26]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_77 -= ((/* implicit */_Bool) var_8);
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 16; i_27 += 1) 
        {
            for (long long int i_28 = 0; i_28 < 16; i_28 += 3) 
            {
                {
                    var_78 *= var_2;
                    var_79 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_67 [i_26]), (((/* implicit */long long int) var_16))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((short) arr_67 [i_26])))));
                    var_80 = max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (arr_67 [i_27]))), (((/* implicit */long long int) var_9)));
                }
            } 
        } 
    }
}
