/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97864
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
    var_14 = 3868937736U;
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_3)), (268435456U)));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (((unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_0 + 4])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3868937710U))))))) ? (((/* implicit */unsigned int) (-(arr_3 [i_1] [i_1 - 3])))) : ((-((+(426029585U)))))));
            var_18 = var_11;
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((long long int) min((((/* implicit */unsigned int) (short)25369)), ((-(4294967285U))))))));
                arr_11 [i_2] [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) (-((~((+(((/* implicit */int) arr_10 [i_0] [i_1] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            arr_18 [i_4] [i_3] [i_2] [i_1 - 1] [i_0 + 2] [i_0] = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) 19U))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((var_5), (((/* implicit */short) arr_4 [i_4])))))))) / (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)28672))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((long long int) arr_10 [i_0 + 3] [i_0] [i_0])))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((int) min((((/* implicit */long long int) 426029609U)), (arr_0 [i_4] [i_2]))))) : (((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (-1LL) : (((/* implicit */long long int) ((4080) * (((/* implicit */int) arr_7 [i_4] [i_0 + 2])))))))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(((long long int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [4LL] [i_2] [i_4])))))))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 3 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                arr_25 [i_6] [i_6] [0ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)36864)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))) : (min((((/* implicit */long long int) min(((short)(-32767 - 1)), (var_1)))), (-5846919117203749573LL)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    var_23 = ((/* implicit */int) ((short) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_8 [i_0] [i_6] [1ULL])) : (arr_1 [i_7])))));
                    var_24 &= min((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6] [11U]))) : (3868937710U))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-780))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-15369))) / (var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_6] [5ULL] [i_0])) ? (1508443669U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) (unsigned short)28672);
                        var_26 = ((/* implicit */unsigned int) (-(min((((long long int) -378315281587034755LL)), (min((9223372036854775807LL), (((/* implicit */long long int) arr_19 [i_0 + 1] [(short)11] [i_7]))))))));
                        var_27 = ((((/* implicit */_Bool) ((long long int) 207141605))) ? (min((-2465214474693811315LL), (((/* implicit */long long int) ((unsigned char) arr_13 [i_0] [i_5 - 2] [i_5 - 2] [i_6] [i_7] [i_8]))))) : (((/* implicit */long long int) min((arr_3 [i_0] [i_5]), (arr_3 [i_0] [i_5 + 1])))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_28 &= ((/* implicit */signed char) (~(((/* implicit */int) ((426029585U) <= (426029560U))))));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28672)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned short)36846))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_31 [i_0] [i_0] [i_9] [9LL] [i_9] [i_7] [i_0])) <= (var_12))))) : (-6060301762227967086LL)))) : (((((/* implicit */unsigned long long int) arr_26 [i_5 - 1] [i_5 - 2] [i_5 + 3] [i_5 + 3])) + ((-(3971378463527721005ULL)))))));
                        var_30 -= ((/* implicit */unsigned short) (-(((unsigned int) ((((/* implicit */_Bool) (short)8848)) ? (16256) : (var_13))))));
                    }
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned short) var_12);
                        var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) ((unsigned short) -1))) : ((-(((/* implicit */int) (unsigned short)36864))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_0 - 1] [i_5] [i_6] [i_5 - 2]))))) : (arr_28 [i_6])));
                    }
                    arr_38 [(_Bool)1] [i_5 + 3] [i_6] [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_0 + 3] [(unsigned char)4] [i_6] [i_0 + 3]))))), (((((/* implicit */_Bool) arr_28 [i_0])) ? (535822336LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_7] [i_6] [i_6] [i_0] [i_0]))) : (var_12)));
                }
                for (int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    arr_42 [i_0 + 3] [11] [11] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) : (min((arr_34 [(signed char)1] [i_5 + 1] [i_5 + 1] [i_11] [i_11]), (((/* implicit */long long int) arr_12 [i_6] [i_0] [i_6] [i_0 + 1]))))))));
                    var_33 = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-10354)) : (((/* implicit */int) (_Bool)1))))) + (((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) (short)10576)))))))));
                    arr_43 [i_0 + 3] [i_0 + 3] [1LL] [i_5] [i_0 + 3] [i_11] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 915481951)) ? (-477921469) : (((/* implicit */int) var_6))))) <= (min((((/* implicit */unsigned int) (unsigned char)91)), (arr_20 [i_5] [i_11])))))), (-7133787678816333640LL)));
                }
            }
            for (long long int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                arr_46 [i_12] [6U] [i_5 - 2] [6U] = ((/* implicit */signed char) arr_44 [(short)12] [i_0]);
                arr_47 [i_0] = ((/* implicit */long long int) var_1);
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_14 = 4; i_14 < 12; i_14 += 3) 
                    {
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((arr_6 [i_0 + 2] [i_13]), (var_0)))))) ? (min((((((/* implicit */_Bool) (unsigned short)28670)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [i_12] [i_14]))) : (1505624225241875276LL))), (((((/* implicit */_Bool) arr_15 [i_14] [i_0] [5ULL] [i_0])) ? (var_0) : (arr_36 [i_0 + 3]))))) : (((((/* implicit */_Bool) arr_19 [i_5 - 1] [i_0 + 3] [i_14 - 3])) ? (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0 + 3]) : (((/* implicit */long long int) arr_19 [i_0 + 4] [i_5] [i_0])))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_40 [i_13] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-20358))))))))))));
                        var_35 = ((((/* implicit */_Bool) var_11)) ? (min((arr_1 [i_0 + 2]), (((/* implicit */long long int) (unsigned char)233)))) : (min((min((((/* implicit */long long int) (unsigned char)69)), (var_2))), (((/* implicit */long long int) var_7)))));
                        arr_52 [i_14] [i_13] [i_12] [i_12] [i_5 + 3] [i_13] [i_0] = ((/* implicit */int) 7869199384859281139ULL);
                    }
                    for (short i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        var_36 ^= ((/* implicit */unsigned char) arr_16 [i_0] [i_0 + 3] [i_0] [i_0 + 3]);
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32743)) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-192058290910071613LL))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [0U] [i_5 + 3] [i_13]))))) ? (((arr_6 [i_0] [i_5]) + (2662598802821895395LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_7))))))) : (((/* implicit */long long int) ((arr_44 [i_0 + 2] [i_5 + 1]) / (arr_44 [i_0 + 4] [i_5 - 1]))))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        arr_58 [i_0] [i_5 + 2] [i_13] [i_13] [i_13] [i_16] = ((min((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0]))))), ((~(arr_21 [i_5] [i_0]))))) & (((/* implicit */long long int) arr_37 [i_12] [i_12])));
                        var_38 -= ((/* implicit */signed char) var_3);
                    }
                    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (short)3584)) || (((/* implicit */_Bool) (short)32758))));
                    var_40 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_15 [i_0] [4ULL] [i_5 - 1] [i_5 - 1])) ? (arr_21 [i_5 - 1] [i_5 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_5 - 1] [i_5 - 2] [i_12]))))));
                }
            }
            for (signed char i_17 = 0; i_17 < 13; i_17 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_18 = 3; i_18 < 12; i_18 += 3) 
                {
                    /* LoopSeq 4 */
                    for (int i_19 = 2; i_19 < 11; i_19 += 3) 
                    {
                        var_41 ^= ((/* implicit */unsigned long long int) arr_1 [i_0 + 2]);
                        arr_66 [i_17] [i_17] = ((/* implicit */int) var_3);
                        var_42 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((13) & (var_4)))) ^ (arr_30 [i_0 - 1] [i_0 - 1] [i_5 - 2] [11] [i_18 - 1] [i_19 + 2])));
                    }
                    for (int i_20 = 0; i_20 < 13; i_20 += 3) 
                    {
                        var_43 = ((((var_7) ? (((/* implicit */int) (short)27263)) : (((/* implicit */int) (signed char)6)))) <= (((/* implicit */int) arr_7 [i_0 + 4] [i_5 - 1])));
                        arr_69 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_5])) << (((((/* implicit */int) (short)-19234)) + (19254)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)43978)) : (((/* implicit */int) arr_2 [i_0 + 4] [i_0])))) : ((~(arr_60 [i_0] [i_17] [i_18])))));
                        var_44 = ((/* implicit */unsigned char) 15696723453129312114ULL);
                    }
                    for (int i_21 = 0; i_21 < 13; i_21 += 1) 
                    {
                        var_45 = ((/* implicit */long long int) (-(arr_44 [i_18 - 2] [i_17])));
                        var_46 = ((/* implicit */unsigned int) arr_22 [i_21] [i_5] [i_0]);
                        var_47 = ((/* implicit */short) arr_34 [i_5] [i_18 + 1] [i_5 - 2] [i_18 + 1] [i_21]);
                    }
                    for (unsigned long long int i_22 = 3; i_22 < 11; i_22 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned int) (signed char)-74);
                        var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) ((((/* implicit */int) arr_7 [i_5 + 1] [i_22 - 1])) / (477921453))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_23 = 0; i_23 < 13; i_23 += 3) 
                    {
                        var_50 = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [(short)9] [i_0 + 1] [i_18 - 3] [i_18])) * (((/* implicit */int) arr_14 [i_0] [i_0 + 3] [i_18 - 1] [i_18 - 1]))));
                        var_51 = ((/* implicit */long long int) ((arr_20 [i_0 + 1] [i_5 + 3]) == (arr_20 [i_0 + 4] [i_5 - 2])));
                    }
                }
                for (int i_24 = 3; i_24 < 11; i_24 += 1) 
                {
                    arr_78 [i_0] [1U] [i_17] [1U] [(unsigned short)7] [i_0] = ((/* implicit */int) 7728443595329981437ULL);
                    /* LoopSeq 3 */
                    for (short i_25 = 4; i_25 < 9; i_25 += 2) 
                    {
                        var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) var_5))));
                        var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-2147483646), (((/* implicit */int) (short)-19234))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) + (((((/* implicit */_Bool) -7133787678816333653LL)) ? (6378193086467220784ULL) : (((/* implicit */unsigned long long int) arr_41 [i_0] [i_5 - 1] [i_24 - 1] [i_25])))))) : (((/* implicit */unsigned long long int) min(((+(arr_67 [(unsigned short)5] [i_25] [i_0] [1U] [i_5] [i_5] [i_0]))), (((/* implicit */int) var_5)))))));
                        var_54 = ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) 15696723453129312121ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned char)1))))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_17] [i_24 - 3] [i_24] [i_25 + 3])) ? (7603434151097132209LL) : (arr_13 [i_24] [i_24] [i_24 - 3] [i_24 - 1] [i_24 - 3] [i_25 + 1])))));
                        arr_82 [i_0] [i_17] [7] [i_17] [i_24] [i_17] [i_0] = ((/* implicit */unsigned long long int) min(((unsigned char)17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_48 [i_5 - 2] [i_0 + 1])))))));
                    }
                    /* vectorizable */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_55 = ((((/* implicit */int) (short)22708)) - (((int) (short)-30189)));
                        var_56 = (((-(var_2))) >> (((((((/* implicit */_Bool) arr_50 [i_17] [i_17] [i_17] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_24 - 3] [i_24 - 3])) : (((/* implicit */int) (short)-7281)))) - (50339))));
                        arr_85 [i_24 - 2] [i_17] [i_24] [i_24] [i_24] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_15 [(unsigned char)6] [(short)8] [(short)8] [i_0 + 4])))))));
                    }
                    for (int i_27 = 0; i_27 < 13; i_27 += 1) 
                    {
                        var_57 = arr_55 [i_27] [i_24 + 2] [i_17] [i_5] [i_0 + 1];
                        var_58 = (+(6830952165089873877LL));
                        var_59 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36866)) ? ((-(arr_23 [i_0] [i_0 - 1] [i_27]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_14 [i_27] [i_24 - 2] [i_24] [i_24 - 2]), ((_Bool)1)))))));
                    }
                }
                var_60 -= ((/* implicit */unsigned short) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_87 [i_0 + 2] [i_0] [i_5 + 2] [i_0 + 2] [2] [4])))));
            }
        }
        var_61 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)220)) + (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        var_62 = ((/* implicit */_Bool) arr_90 [i_28] [i_28]);
        var_63 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-7281))) == (min((arr_91 [i_28]), (((((/* implicit */long long int) ((/* implicit */int) var_5))) & (arr_91 [i_28])))))));
    }
    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
    {
        var_64 ^= ((/* implicit */unsigned long long int) arr_90 [i_29] [i_29]);
        var_65 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_93 [i_29] [(unsigned short)13])))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_92 [i_29]), (arr_92 [i_29]))))) : ((~(((((/* implicit */_Bool) arr_93 [i_29] [i_29])) ? (arr_91 [0ULL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_66 = var_3;
    }
}
