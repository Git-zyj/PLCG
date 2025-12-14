/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8647
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) max((max(((short)-24578), (((/* implicit */short) (_Bool)0)))), ((short)-24578)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (var_10))))))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)24577))))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)112))))) - (arr_1 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    arr_11 [i_0] [i_3] [i_2] [(unsigned char)13] [(unsigned char)9] = ((/* implicit */long long int) var_3);
                    var_13 &= ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]);
                }
                var_14 = ((/* implicit */int) var_2);
                var_15 = ((/* implicit */long long int) ((arr_9 [i_1] [i_1] [i_2] [i_1]) > (arr_9 [i_1] [i_1] [i_1] [i_1])));
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((arr_7 [i_0] [i_0] [i_0] [i_4] [i_2] [i_2]) > (var_6))))));
                    var_17 = ((/* implicit */int) var_4);
                }
                for (long long int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_2] [i_5] [10LL]))))) > (((/* implicit */int) (_Bool)0))));
                    var_19 = ((/* implicit */short) ((((long long int) (_Bool)1)) > ((+(var_4)))));
                }
                var_20 -= ((/* implicit */unsigned char) ((short) -1529279882777817092LL));
            }
            arr_19 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))) : (var_9)));
            var_21 = ((/* implicit */short) (((+(arr_6 [i_0] [i_0] [i_0] [i_1]))) > (arr_7 [i_0] [i_0] [(short)11] [i_0] [i_0] [i_0])));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 14; i_7 += 2) 
        {
            for (long long int i_8 = 2; i_8 < 16; i_8 += 4) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)63))))) ? (((/* implicit */long long int) arr_21 [i_6])) : (max((((/* implicit */long long int) (unsigned char)144)), (var_5)))))) ? (var_4) : (var_4));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_9 = 2; i_9 < 13; i_9 += 2) 
                    {
                        arr_33 [10LL] [i_7] [i_6] [10LL] = var_9;
                        var_23 += ((/* implicit */unsigned char) (~(var_1)));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_1))));
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        var_25 &= (+(((/* implicit */int) (short)6)));
                        var_26 = (+(var_7));
                        var_27 = (i_6 % 2 == zero) ? (((((/* implicit */int) var_2)) >> (((arr_34 [i_7 - 1] [i_6] [i_8 - 1] [14] [14]) + (4582682022322469195LL))))) : (((((/* implicit */int) var_2)) >> (((((arr_34 [i_7 - 1] [i_6] [i_8 - 1] [14] [14]) - (4582682022322469195LL))) - (597060825919875644LL)))));
                    }
                    arr_36 [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) arr_20 [i_6]);
                }
            } 
        } 
        var_28 = arr_30 [i_6] [i_6] [i_6] [i_6];
    }
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (max(((~(var_4))), (((/* implicit */long long int) max((((/* implicit */short) (unsigned char)0)), ((short)-613)))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    /* LoopSeq 3 */
    for (signed char i_11 = 1; i_11 < 19; i_11 += 4) 
    {
        arr_39 [i_11] = ((/* implicit */short) ((unsigned char) ((long long int) arr_37 [i_11])));
        var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_11 - 1])) ? (arr_37 [i_11 + 1]) : (((/* implicit */int) (short)-24578))))) ? (arr_37 [i_11 + 1]) : (((((arr_37 [i_11 + 1]) + (2147483647))) >> (((var_9) - (6845496886396480913LL))))));
        /* LoopNest 3 */
        for (signed char i_12 = 1; i_12 < 16; i_12 += 1) 
        {
            for (unsigned int i_13 = 4; i_13 < 18; i_13 += 1) 
            {
                for (int i_14 = 1; i_14 < 19; i_14 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_12] [i_11])) ? (max((max((((/* implicit */long long int) arr_50 [15LL] [i_12] [i_13] [i_14] [i_15])), (arr_42 [i_11]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_11] [i_12] [i_11] [17LL])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_51 [i_11] [i_12] [i_13] [11LL] [(short)2] [i_13]))))))) : (((/* implicit */long long int) var_6))));
                            arr_54 [i_15] [i_15] [i_11] = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) arr_46 [i_11] [i_11] [i_11])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_11])))))) ? (((long long int) arr_49 [i_11 + 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_46 [i_12 + 3] [i_11] [i_15])))) ? (((/* implicit */int) max(((short)-24578), (((/* implicit */short) (unsigned char)95))))) : (((/* implicit */int) ((_Bool) -8028490634367551866LL))))))));
                            var_32 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) arr_48 [i_11] [(short)0] [i_11] [8ULL])) ? (562881233944576LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28286))))), (min((arr_48 [i_11] [i_11] [7] [i_14]), (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) min((((arr_49 [i_12]) ? (((/* implicit */int) arr_53 [i_11] [i_11] [i_13 - 4] [i_11] [i_15])) : (arr_38 [i_11 - 1] [i_11]))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_49 [i_12])) : (((/* implicit */int) var_3)))))))));
                            arr_55 [14] [i_11] [i_11] = ((/* implicit */long long int) max((((/* implicit */short) ((_Bool) var_8))), (min((((/* implicit */short) arr_51 [2ULL] [i_14 + 1] [i_13] [(unsigned char)1] [i_11] [(unsigned char)1])), (var_3)))));
                        }
                        for (signed char i_16 = 0; i_16 < 20; i_16 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) var_8))))))));
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_52 [i_12 + 4] [14LL] [i_13 - 1] [i_12 + 4] [i_14 - 1])))))))));
                            var_35 = ((int) ((((((/* implicit */_Bool) 4055911101047726323ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_57 [(_Bool)1] [i_12]))) > (((/* implicit */long long int) var_6))));
                        }
                        for (signed char i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
                        {
                            arr_63 [i_12] [2ULL] [10LL] [2ULL] [i_12] |= var_4;
                            arr_64 [i_11] = ((/* implicit */int) (((~(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-3483459860707174704LL))))) & (((/* implicit */long long int) max((((/* implicit */int) min(((short)-21299), ((short)-21299)))), ((~(((/* implicit */int) var_0)))))))));
                        }
                        arr_65 [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_56 [i_11] [(unsigned char)1] [i_11] [(unsigned char)1] [i_14])))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_18 = 1; i_18 < 12; i_18 += 1) 
    {
        var_36 = ((/* implicit */int) arr_32 [i_18]);
        arr_70 [i_18] = ((/* implicit */short) min((((/* implicit */long long int) (+(arr_37 [i_18 + 2])))), (((((/* implicit */_Bool) max((var_5), (var_9)))) ? (arr_42 [i_18]) : (((((/* implicit */_Bool) 568714336)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 1) 
        {
            var_37 = ((/* implicit */long long int) ((short) max((((var_1) ^ (var_1))), (((/* implicit */unsigned int) arr_68 [i_18])))));
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1529279882777817092LL)) ? (min((((/* implicit */long long int) arr_71 [11LL] [i_18] [i_18])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_4))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)115)) ^ (((int) var_0)))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (int i_21 = 4; i_21 < 14; i_21 += 4) 
                {
                    for (short i_22 = 0; i_22 < 16; i_22 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_22] [i_18] [13ULL] [(short)5] [(unsigned char)3])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 549755682816LL)))))) : ((-(var_5))))))));
                            arr_84 [i_18] [1] [i_20] [i_21] [i_22] = ((/* implicit */int) ((((arr_75 [i_18 + 3] [i_21 + 2] [i_21] [3ULL]) > (((/* implicit */int) var_2)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */long long int) var_1)), (var_7))))))));
                            var_40 = ((/* implicit */unsigned char) (-((-(arr_79 [i_21 + 1] [i_21 + 1] [i_20] [i_18])))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_23 = 0; i_23 < 16; i_23 += 1) 
                {
                    arr_87 [(unsigned char)14] [(unsigned char)14] [i_18] = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                    var_41 = ((/* implicit */int) var_0);
                    var_42 = ((/* implicit */unsigned char) var_3);
                }
                for (int i_24 = 3; i_24 < 12; i_24 += 3) 
                {
                    arr_92 [i_18] [i_18] [(short)5] [i_18] = ((/* implicit */unsigned char) -549755682816LL);
                    var_43 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
                }
                for (unsigned long long int i_25 = 0; i_25 < 16; i_25 += 3) 
                {
                    arr_96 [i_25] [(short)12] [i_18] [i_18] [(signed char)14] [i_18 + 3] = ((/* implicit */unsigned char) var_2);
                    var_44 = -549755682816LL;
                    var_45 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_81 [10ULL] [i_18 + 2] [i_18 + 3] [i_18 + 2])) >> (((/* implicit */int) ((((/* implicit */int) arr_81 [(unsigned char)10] [i_18 + 1] [i_18 + 1] [(unsigned char)10])) > (((/* implicit */int) arr_81 [i_18] [i_18 + 2] [i_18 + 2] [i_18])))))));
                }
                for (long long int i_26 = 0; i_26 < 16; i_26 += 4) 
                {
                    var_46 = ((/* implicit */int) (-(((arr_82 [i_18 + 3] [i_18] [i_18] [i_18]) ^ (arr_82 [i_18 + 3] [(signed char)7] [14LL] [i_18])))));
                    arr_100 [i_18] [i_18] [i_26] = ((/* implicit */short) (~((~(-3875099782819060180LL)))));
                    var_47 -= ((/* implicit */unsigned char) ((int) min((arr_45 [i_18 + 4] [19LL] [i_18 + 4] [i_18 + 4]), (arr_45 [i_18 + 1] [i_18 + 3] [i_18 + 1] [i_18 + 1]))));
                }
            }
            for (unsigned char i_27 = 0; i_27 < 16; i_27 += 4) 
            {
                var_48 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_90 [i_18] [i_18 + 1] [i_18 + 4] [i_18] [i_18] [i_18]) & (arr_90 [i_18] [(_Bool)1] [i_18 + 4] [i_18] [i_18] [i_18])))) ? (min((((/* implicit */unsigned int) var_6)), (arr_90 [1LL] [i_18 + 2] [i_18 + 4] [(unsigned char)14] [i_18] [i_18 + 2]))) : (arr_90 [(unsigned char)9] [i_18] [i_18 + 4] [i_18] [i_18 + 4] [i_18])));
                arr_103 [i_19] [i_18] [i_27] [i_19] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_82 [i_18 + 3] [(unsigned char)5] [i_18 + 3] [i_18])) ? (((/* implicit */int) arr_68 [i_18])) : (((/* implicit */int) arr_68 [i_18])))) ^ (((/* implicit */int) arr_51 [i_19] [i_19] [18] [1LL] [i_27] [1LL]))));
            }
            /* vectorizable */
            for (unsigned char i_28 = 0; i_28 < 16; i_28 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_29 = 1; i_29 < 15; i_29 += 1) /* same iter space */
                {
                    var_49 |= ((/* implicit */signed char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (short)11584))));
                    var_50 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_28]))))))));
                }
                for (unsigned int i_30 = 1; i_30 < 15; i_30 += 1) /* same iter space */
                {
                    var_51 = ((/* implicit */signed char) ((unsigned int) arr_79 [11] [(unsigned char)7] [i_18 + 2] [i_18]));
                    var_52 = ((/* implicit */signed char) arr_73 [i_18] [i_18] [i_28] [14]);
                }
                for (unsigned char i_31 = 0; i_31 < 16; i_31 += 1) 
                {
                    var_53 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_50 [i_18] [i_18] [i_19] [i_28] [i_31])) ? (549755682809LL) : (-549755682816LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10))))));
                    /* LoopSeq 1 */
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        var_54 = var_4;
                        var_55 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_104 [i_18 + 1] [i_18 + 4] [i_18 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_104 [i_18 + 3] [i_18 - 1] [i_18 + 2])));
                        var_56 = ((/* implicit */signed char) ((short) (-(2616245979658289155LL))));
                    }
                    arr_117 [i_18] [i_18] [i_28] [i_31] = ((((/* implicit */_Bool) arr_32 [i_18 + 3])) ? ((+(562881233944558LL))) : (((arr_86 [11U]) / (((/* implicit */long long int) arr_107 [i_18] [i_18 - 1] [i_18] [(unsigned char)8] [(signed char)15])))));
                    arr_118 [(_Bool)1] [(_Bool)1] [i_18] [i_18] [i_18] [12] = ((/* implicit */int) -7429348292899944066LL);
                }
                arr_119 [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)106))))) ? (((/* implicit */long long int) arr_22 [i_18 + 2])) : (((((/* implicit */_Bool) (unsigned char)106)) ? (arr_48 [i_18] [i_19] [2U] [i_18]) : (((/* implicit */long long int) arr_66 [i_18]))))));
                var_57 = ((/* implicit */long long int) min((var_57), ((+(((((/* implicit */_Bool) (unsigned char)115)) ? (arr_60 [16] [2] [i_18] [i_18] [(short)19]) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [1] [i_19] [i_19] [11U])))))))));
                /* LoopSeq 1 */
                for (unsigned char i_33 = 0; i_33 < 16; i_33 += 4) 
                {
                    var_58 = ((/* implicit */long long int) var_0);
                    /* LoopSeq 2 */
                    for (unsigned int i_34 = 0; i_34 < 16; i_34 += 1) 
                    {
                        arr_126 [i_18] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_109 [i_18] [i_18] [i_33] [i_34])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_109 [i_18] [i_18] [i_28] [i_33]))))) : (arr_42 [i_18])));
                        var_59 = ((/* implicit */short) ((((/* implicit */_Bool) 1451761632U)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (short)8707))));
                        var_60 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_2)))) ? (((arr_45 [i_18] [i_19] [i_28] [i_33]) ^ (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_99 [i_28] [i_28] [(signed char)6] [i_28])) ? (((/* implicit */long long int) arr_38 [(signed char)4] [i_33])) : (-3875099782819060193LL))))));
                        var_61 = arr_109 [i_18] [i_18] [i_34] [i_33];
                    }
                    for (signed char i_35 = 0; i_35 < 16; i_35 += 4) 
                    {
                        var_62 = arr_107 [i_18 + 3] [i_19] [i_28] [i_33] [i_35];
                        var_63 = ((/* implicit */int) min((var_63), (((arr_22 [i_18 + 4]) ^ (((/* implicit */int) arr_40 [i_18 + 4]))))));
                        arr_130 [i_35] [i_35] [i_35] [i_18 + 1] [i_35] [i_18] = ((/* implicit */signed char) arr_20 [9U]);
                    }
                }
            }
        }
    }
    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
    {
        arr_135 [i_36] = ((/* implicit */signed char) var_6);
        var_64 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(min((var_9), (((/* implicit */long long int) var_0)))))))));
    }
}
