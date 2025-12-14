/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65412
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
    var_12 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (signed char)-12)) ? (arr_7 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */int) var_2)))) ^ (((/* implicit */int) var_8)))) > (((((/* implicit */int) var_7)) | (((/* implicit */int) (signed char)12))))));
                        var_13 = ((/* implicit */unsigned long long int) ((unsigned char) 18446744073709551615ULL));
                        arr_12 [i_1] [i_2] = ((/* implicit */unsigned char) var_9);
                        arr_13 [i_0] [12] [i_2] [i_3] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((var_0) >> (((arr_8 [i_0] [i_1] [i_2] [i_3] [i_3]) - (1815709829)))))) || (((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) arr_3 [i_2]))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) (_Bool)0);
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [(unsigned char)14] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 3])) > (((/* implicit */int) var_10))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            arr_20 [(unsigned char)1] [i_1] [i_1] [(signed char)10] [i_4] [i_2] = ((unsigned long long int) (signed char)6);
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_4))));
                            var_15 = ((/* implicit */unsigned short) var_4);
                            var_16 *= ((/* implicit */unsigned char) ((unsigned long long int) var_2));
                            arr_21 [i_2] [i_1] [9LL] [i_4] [i_5] = ((/* implicit */long long int) ((short) arr_6 [i_0 + 3] [i_0 - 1]));
                        }
                        arr_22 [i_0] [i_0] [(short)5] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((signed char) (!((_Bool)1))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_17 *= ((/* implicit */signed char) arr_19 [(unsigned short)10] [i_0] [i_1] [i_1] [i_1] [i_6]);
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0 + 1] [2LL] [i_0 - 3] [i_0])) << (((10543669298418951135ULL) - (10543669298418951122ULL)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_19 *= var_4;
                                arr_33 [i_0] [i_1] [0LL] [i_2] [i_8] = (!((_Bool)1));
                            }
                        } 
                    } 
                    arr_34 [i_2] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_4)))) || (((/* implicit */_Bool) var_6)));
                    /* LoopSeq 4 */
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        var_20 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1])))))));
                        arr_39 [i_0] [i_0] [i_2] [i_1] [11LL] [i_9] = ((/* implicit */unsigned short) ((_Bool) arr_19 [i_0] [i_1] [i_2] [i_9] [i_9] [i_9]));
                    }
                    for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        arr_44 [i_2] = ((((/* implicit */int) (short)-1003)) - (((((/* implicit */int) (_Bool)0)) + ((-(264390852))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            var_21 += ((/* implicit */unsigned char) max(((-(((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) -4326809707655479080LL))))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_6)))))))));
                            var_22 = ((/* implicit */unsigned long long int) ((arr_40 [i_0] [i_2] [i_1] [i_2] [4ULL] [i_1]) << (((((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_0 - 2] [i_1]))) - (63)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        arr_49 [i_0] [i_1] [i_2] [(unsigned char)0] = ((/* implicit */long long int) ((signed char) arr_46 [i_0 + 3] [i_1] [i_1] [i_2] [i_2]));
                        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                        /* LoopSeq 2 */
                        for (int i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            var_24 = ((/* implicit */int) var_11);
                            arr_52 [i_0] [i_2] [i_2] [i_2] [i_13] = ((/* implicit */long long int) var_9);
                        }
                        for (short i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            arr_55 [i_2] [8] = ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)30498))))));
                            arr_56 [i_2] [i_1] [i_2] [i_12] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) << (((((/* implicit */int) arr_41 [i_0] [i_1] [i_1] [i_2] [i_12] [i_14])) - (139)))))) && ((!(((/* implicit */_Bool) var_3))))));
                        }
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */long long int) var_0)) : (var_5))))))));
                        /* LoopSeq 3 */
                        for (long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) << (((var_9) - (17249717704801874001ULL)))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 + 3] [i_0 - 3] [i_15] [(signed char)10])))));
                            var_27 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_8)))));
                            var_28 = ((/* implicit */int) (signed char)114);
                            var_29 = ((/* implicit */unsigned int) var_11);
                        }
                        for (unsigned char i_16 = 3; i_16 < 14; i_16 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_16 - 2] [i_0])) : (((/* implicit */int) (!((_Bool)1))))));
                            var_31 = ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [(_Bool)1] [i_2] [(_Bool)1] [i_12] [i_16]))) : (var_4))) - (((/* implicit */unsigned long long int) arr_30 [i_0 - 2])));
                            var_32 = ((/* implicit */long long int) (_Bool)1);
                        }
                        for (long long int i_17 = 0; i_17 < 15; i_17 += 1) 
                        {
                            var_33 *= ((/* implicit */unsigned int) (-(var_4)));
                            arr_65 [i_0] [i_2] [12LL] [i_2] [i_12] [i_17] = ((/* implicit */unsigned char) arr_54 [i_2]);
                        }
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 3) 
                    {
                        var_34 -= ((/* implicit */unsigned long long int) arr_30 [i_2]);
                        var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_27 [i_2] [i_18]))));
                    }
                }
                for (int i_19 = 0; i_19 < 15; i_19 += 4) 
                {
                    var_36 = ((/* implicit */unsigned long long int) var_8);
                    var_37 *= ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_0] [i_19] [i_19]))));
                }
                /* vectorizable */
                for (unsigned char i_20 = 0; i_20 < 15; i_20 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned int) (((-(var_0))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_21] [(signed char)11] [i_20] [i_20] [i_0 + 1] [i_1])))));
                        var_39 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_43 [2ULL] [i_20] [i_20] [i_1])) : (((/* implicit */int) arr_43 [i_21] [i_21] [i_21] [i_1]))));
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned char) var_10);
                        var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))))));
                        var_42 = ((/* implicit */int) arr_35 [i_0] [i_1] [i_22] [i_22]);
                    }
                    arr_80 [i_0] [i_1] [i_20] = ((/* implicit */long long int) ((_Bool) (unsigned short)3993));
                    var_43 = ((/* implicit */unsigned int) ((long long int) arr_28 [i_0] [i_1] [i_1] [i_20] [i_20]));
                }
                var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1189087786)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (var_3))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_23 = 0; i_23 < 20; i_23 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_24 = 0; i_24 < 20; i_24 += 2) 
        {
            for (unsigned long long int i_25 = 1; i_25 < 18; i_25 += 4) 
            {
                for (signed char i_26 = 0; i_26 < 20; i_26 += 2) 
                {
                    {
                        arr_93 [i_23] [i_24] [i_25] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2442411990U) % (((/* implicit */unsigned int) arr_90 [i_25]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((signed char) arr_89 [i_23] [i_24] [i_25] [i_26])))))) % (var_1));
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_86 [i_24] [i_25 - 1]))))) : (((/* implicit */int) ((signed char) var_0)))));
                    }
                } 
            } 
        } 
        arr_94 [i_23] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (unsigned long long int i_27 = 0; i_27 < 22; i_27 += 4) 
    {
        arr_97 [i_27] = ((/* implicit */unsigned char) var_7);
        arr_98 [i_27] [i_27] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >> (((var_6) - (1747922592)))))), (((((/* implicit */_Bool) ((arr_95 [i_27]) + (((/* implicit */int) var_2))))) ? (max((var_0), (((/* implicit */unsigned int) arr_96 [12LL])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
        var_46 += var_8;
    }
    for (signed char i_28 = 0; i_28 < 13; i_28 += 3) 
    {
        var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) ((((((/* implicit */_Bool) (-(var_0)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((short) arr_50 [8U] [(unsigned short)0] [(unsigned char)2]))))))))));
        arr_102 [i_28] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_51 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28])) ^ (var_4))) / (max((((/* implicit */unsigned long long int) (unsigned char)218)), (12439110189031326103ULL)))))) || (((/* implicit */_Bool) ((unsigned char) ((int) (short)9049))))));
        var_48 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((unsigned short) 264390852)))) == (max((((/* implicit */int) ((-1189087792) < (((/* implicit */int) (unsigned short)65532))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (-696389383)))))));
        var_49 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_63 [i_28] [(unsigned char)14] [i_28]))))), (var_0)));
        arr_103 [i_28] = ((/* implicit */short) var_2);
    }
    var_50 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (var_9)))));
    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_5))) % (((var_11) ^ (((/* implicit */long long int) 264390867)))))) : ((-(((long long int) (_Bool)1))))));
}
