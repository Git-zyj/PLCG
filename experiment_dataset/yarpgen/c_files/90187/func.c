/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90187
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
    var_20 = ((/* implicit */long long int) ((var_16) << (((((unsigned int) ((var_14) ? (var_18) : (((/* implicit */long long int) -402788840))))) - (3892178436U)))));
    var_21 = ((((/* implicit */long long int) (+(min((((/* implicit */int) var_19)), (var_2)))))) > (var_18));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_19))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_23 = ((/* implicit */int) (unsigned short)34613);
        var_24 = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)30923)) ? (((/* implicit */int) (unsigned short)34613)) : (((/* implicit */int) (unsigned short)30923))));
                    arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0 - 1] [i_2])))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_25 = ((/* implicit */short) arr_4 [i_3] [i_1]);
                        var_26 = (((~(((/* implicit */int) arr_1 [i_0 + 1])))) + (((/* implicit */int) var_13)));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(var_11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_12))))))) : (((var_0) / (((/* implicit */int) max((((/* implicit */short) var_14)), ((short)25178)))))))))));
                        var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34618))))) == (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)30922)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)30923))))), (9005057425322400464ULL)));
                            arr_15 [i_4] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) arr_14 [i_0 + 1] [i_1] [i_2] [i_1]);
                            var_30 = ((/* implicit */int) var_18);
                            var_31 = ((/* implicit */long long int) arr_11 [i_0] [i_2] [i_0] [i_0]);
                            arr_16 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3])) - (arr_11 [i_0] [i_1] [i_3] [i_4])))) ? (((/* implicit */int) var_19)) : ((-(((/* implicit */int) arr_5 [i_2] [i_0 - 1] [i_1] [i_2]))))))), (((((/* implicit */_Bool) (~(var_1)))) ? (arr_14 [i_4 + 1] [i_4 + 1] [i_0 + 2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_4 + 3])))))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        arr_19 [i_0 + 1] [i_2] [(short)1] [i_5 + 1] = (-(arr_12 [i_2] [i_1] [6]));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_1 [13])))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((((/* implicit */_Bool) arr_21 [i_0] [i_6] [i_6])) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_6] [(signed char)4]))) : (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [19U] [7] [i_6] [i_0])) ? (((/* implicit */unsigned long long int) -3212062630264610503LL)) : (arr_3 [i_0] [i_0 - 2] [i_6])));
            var_35 = ((/* implicit */signed char) (~(arr_12 [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (unsigned int i_7 = 4; i_7 < 20; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    {
                        arr_29 [(unsigned short)11] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_0 + 1] [i_0 + 1] [15U] [i_0 + 2])) ? (((/* implicit */int) arr_10 [i_6] [i_6] [i_0] [i_8] [i_7 - 4])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_7] [i_8]))));
                        var_36 = ((/* implicit */unsigned int) var_8);
                        var_37 = ((arr_3 [i_7 - 3] [i_6] [i_6]) ^ (arr_3 [i_7 - 1] [(short)4] [i_7 - 1]));
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7 - 1] [i_0 + 3] [i_8])) ? (((/* implicit */int) arr_2 [i_7 + 1] [i_0 + 3] [13U])) : (((/* implicit */int) arr_2 [i_7 - 3] [i_0 + 3] [i_7 - 4]))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_39 = ((/* implicit */int) var_3);
        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) var_1))) : (((((/* implicit */_Bool) (short)-13475)) ? (var_2) : (((/* implicit */int) var_8)))))))));
        var_41 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_11)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 4; i_10 < 20; i_10 += 1) 
        {
            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (!(var_14))))));
            var_43 = ((/* implicit */unsigned short) arr_22 [i_9] [i_10] [i_10] [21ULL]);
            arr_36 [i_9] [i_10] = ((/* implicit */int) ((14285783383795626304ULL) << (((((/* implicit */int) (short)32767)) - (32747)))));
        }
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 14; i_11 += 3) 
    {
        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_11] [i_11])) ? (((/* implicit */int) arr_4 [i_11] [i_11])) : (((((/* implicit */_Bool) arr_30 [10])) ? (((/* implicit */int) (unsigned short)30915)) : (((/* implicit */int) (short)-15321)))))))));
        var_45 = ((/* implicit */int) arr_25 [i_11] [i_11] [i_11] [(short)11]);
        arr_40 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_11] [9LL] [i_11])) >= (((/* implicit */int) arr_28 [i_11] [i_11] [i_11]))));
    }
    for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_13 = 1; i_13 < 19; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_14 = 3; i_14 < 18; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32762)) ? (var_2) : (((/* implicit */int) arr_32 [i_14]))))) ? (arr_14 [i_15] [i_14 - 2] [i_13] [i_12]) : (((/* implicit */unsigned long long int) ((long long int) (unsigned char)247))))))))));
                        var_47 = ((/* implicit */short) var_14);
                        /* LoopSeq 1 */
                        for (long long int i_16 = 1; i_16 < 19; i_16 += 3) 
                        {
                            arr_53 [i_16] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_12] [17U] [i_14 - 3])) ? (((/* implicit */int) arr_33 [i_16] [i_13])) : (((/* implicit */int) arr_52 [i_12] [i_13] [i_16] [i_13] [i_16] [9LL] [(signed char)0]))))) ? (((/* implicit */long long int) ((unsigned int) arr_10 [i_12] [17LL] [i_14] [i_14] [i_16]))) : (((((/* implicit */_Bool) -7373050299021617987LL)) ? (2154088520934649205LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34617)))))))));
                            var_48 = ((/* implicit */int) min((var_48), (((((/* implicit */_Bool) arr_17 [i_12] [i_13] [2U] [8LL] [(_Bool)1])) ? (((((/* implicit */int) ((var_16) <= (((/* implicit */unsigned long long int) var_4))))) - (((/* implicit */int) arr_5 [i_14 - 2] [i_14 - 2] [i_16 - 1] [i_12])))) : (((((/* implicit */_Bool) min(((unsigned short)34621), ((unsigned short)30947)))) ? (((/* implicit */int) (unsigned short)34617)) : (((/* implicit */int) (unsigned char)98))))))));
                        }
                        var_49 ^= (((((!(((/* implicit */_Bool) arr_51 [i_15] [i_14] [i_12] [i_12] [i_12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_15] [i_12] [i_12] [i_12]))) : (arr_26 [i_12]))))) >> (((((((/* implicit */_Bool) arr_11 [i_13 + 1] [i_13 + 1] [i_14 - 1] [16U])) ? (arr_11 [i_13 - 1] [i_13 - 1] [i_14 + 2] [i_15]) : (arr_11 [i_13 - 1] [i_13] [i_14 - 2] [i_15]))) + (1555012728))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 16; i_17 += 2) 
            {
                for (short i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    {
                        var_50 = ((/* implicit */_Bool) ((short) var_15));
                        var_51 &= ((/* implicit */unsigned int) arr_20 [i_12] [i_12] [i_12]);
                        var_52 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_52 [i_12] [i_13] [i_18] [i_18] [i_12] [i_13] [(unsigned char)19])), (max((arr_21 [i_12] [i_17 + 3] [i_17]), (arr_21 [4] [i_17 + 2] [i_17])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 20; i_19 += 3) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_53 = ((/* implicit */short) ((_Bool) (((+(var_16))) % (9441686648387151124ULL))));
                        var_54 = ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) var_14)) <= (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_12] [i_13] [i_12] [i_20])) && (((/* implicit */_Bool) arr_47 [i_12] [i_13] [(signed char)16] [i_20]))))) : (((/* implicit */int) arr_44 [(short)1] [(short)1]))))) * ((-(arr_46 [i_13 + 1] [i_13 + 1] [i_19] [8U])))));
                        var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (~(var_10))))))))));
                        /* LoopSeq 2 */
                        for (int i_21 = 0; i_21 < 20; i_21 += 1) 
                        {
                            var_56 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_17))));
                            var_57 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) arr_2 [i_13] [i_20] [i_21])) : (var_2)))) * (min((arr_3 [i_12] [i_13] [i_13 + 1]), (((/* implicit */unsigned long long int) var_10)))));
                            arr_67 [i_12] [i_12] [i_19] [i_19] [i_21] [i_12] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_47 [10LL] [i_21] [(_Bool)1] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_12] [i_12]))) : (arr_51 [i_12] [i_13 - 1] [2U] [i_20] [i_13 - 1]))) * (((/* implicit */long long int) ((/* implicit */int) ((var_18) >= (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_21] [i_13])))))))));
                        }
                        for (signed char i_22 = 0; i_22 < 20; i_22 += 2) 
                        {
                            arr_70 [i_20] [i_20] [(short)7] [6LL] [i_20] [11ULL] [(short)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_18)))) ? ((-(arr_17 [i_12] [i_13 - 1] [i_19] [i_20] [i_19]))) : (min((arr_17 [i_22] [i_13 - 1] [i_22] [i_20] [i_13 - 1]), (arr_17 [i_12] [i_13 - 1] [i_12] [i_13 - 1] [i_22])))));
                            var_58 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                        }
                        var_59 = ((/* implicit */signed char) var_12);
                    }
                } 
            } 
            var_60 = ((/* implicit */unsigned int) min((var_60), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34614)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30918))) : (3539365447437816825LL))))));
            var_61 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_12] [i_12] [i_12] [(signed char)10] [i_13] [i_13 - 1] [(unsigned char)8])) || (((/* implicit */_Bool) var_13))))))))));
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 20; i_23 += 2) /* same iter space */
        {
            var_62 = ((/* implicit */unsigned int) max((var_62), (((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_41 [i_23])))))))));
            var_63 = ((/* implicit */unsigned int) max((var_63), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_23]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (arr_66 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_23]))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_23] [i_12] [i_12] [i_12]))))))));
            var_64 = ((/* implicit */int) min((var_64), (((/* implicit */int) arr_68 [i_12] [11] [i_12] [4U] [i_12]))));
        }
        for (int i_24 = 0; i_24 < 20; i_24 += 2) /* same iter space */
        {
            var_65 = ((/* implicit */int) max((var_65), (((/* implicit */int) 9441686648387151152ULL))));
            var_66 = ((/* implicit */unsigned long long int) min((var_66), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_55 [i_24] [i_12] [i_12])) + (((/* implicit */int) arr_1 [i_12]))))) || (((/* implicit */_Bool) var_15))))), ((~(2079804769))))))));
            var_67 = ((/* implicit */unsigned long long int) max((var_67), (((/* implicit */unsigned long long int) -2154088520934649206LL))));
            /* LoopNest 3 */
            for (unsigned long long int i_25 = 0; i_25 < 20; i_25 += 2) 
            {
                for (unsigned short i_26 = 1; i_26 < 18; i_26 += 3) 
                {
                    for (int i_27 = 1; i_27 < 18; i_27 += 3) 
                    {
                        {
                            var_68 &= ((/* implicit */int) (unsigned short)30923);
                            var_69 = ((/* implicit */_Bool) 68719476735LL);
                            arr_82 [(unsigned short)5] [(unsigned short)5] [(_Bool)1] [i_26 + 1] [i_24] [(unsigned short)5] [i_26 + 1] |= ((/* implicit */signed char) max(((+(arr_31 [i_12]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_71 [i_26 + 2] [i_25] [i_24]))) * (((int) var_5)))))));
                        }
                    } 
                } 
            } 
        }
        var_70 &= ((/* implicit */long long int) var_1);
    }
}
