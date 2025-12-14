/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8538
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) var_3);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) (-(((/* implicit */int) (short)0))));
                                arr_13 [i_2] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-3017))))) ? (((arr_3 [i_1 + 1] [i_1 + 1] [i_0]) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) arr_2 [i_3 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_4] [i_3 + 1] [i_1 + 1] [i_1 + 1] [i_0])))))) : (arr_8 [i_4] [i_1] [i_2] [i_1] [i_0])));
                                var_13 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)60))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-67))));
                    arr_15 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((var_0), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255)))))))));
                    var_14 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((var_7) + (1779665626U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_0] [(unsigned short)14] [i_0]) ? (-751484516) : (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0] [18U])))))));
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(min((arr_8 [i_0] [i_1 + 1] [i_0] [i_5] [i_6]), (((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_2]))))))) ^ (((((/* implicit */_Bool) -1352000025)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)12613)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (0U)))) : (max((((/* implicit */long long int) -1613582723)), (3936323291567577550LL)))))));
                                arr_21 [i_6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_8 [i_0] [(signed char)0] [i_0] [i_0] [i_0]);
                                var_15 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)24335)), ((unsigned short)8033)))) ? (max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                                arr_22 [i_0] [(short)3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_5] [i_1] [i_0] [i_1 - 2] [i_5 - 1] [i_0] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_12 [19] [19] [i_2] [i_5] [i_5 - 1] [i_6])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41611))))) : ((+(var_3)))));
                                arr_23 [i_0] [i_6] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_5 + 1] [i_0]) : (arr_4 [i_5 - 1] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        arr_28 [i_7] [(unsigned char)12] &= ((/* implicit */signed char) var_7);
        /* LoopNest 2 */
        for (unsigned short i_8 = 2; i_8 < 20; i_8 += 1) 
        {
            for (unsigned int i_9 = 1; i_9 < 18; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        var_16 = var_5;
                        arr_38 [i_7] [i_7] = ((/* implicit */short) ((unsigned int) 1418030336U));
                        arr_39 [i_8 - 1] [i_8 - 1] [(signed char)21] [i_7] [(signed char)21] = ((/* implicit */signed char) 9204689816183037165LL);
                    }
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)29843)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [(_Bool)0]))) : (arr_25 [0] [i_8]))))))));
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            arr_45 [i_7] [i_7] [i_11] [i_9] [i_8] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8303))) + (arr_37 [i_7] [i_7])));
                            arr_46 [i_8] [i_8] [i_7] [i_8 + 2] [i_8 + 2] [(unsigned short)19] = ((/* implicit */_Bool) (-(1272279456)));
                        }
                        arr_47 [i_7] = ((/* implicit */short) (-(999571362)));
                        var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_30 [i_8])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) | (((/* implicit */long long int) arr_40 [i_8 + 1] [i_8 - 2] [i_7] [i_9 - 1]))));
                    }
                    for (short i_13 = 1; i_13 < 20; i_13 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) (signed char)-92);
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_27 [i_7]))));
                        arr_50 [i_7] [i_7] = ((/* implicit */_Bool) var_7);
                    }
                    for (signed char i_14 = 1; i_14 < 21; i_14 += 2) 
                    {
                        arr_54 [i_7] = ((/* implicit */signed char) var_5);
                        var_21 += ((/* implicit */long long int) var_1);
                        var_22 = ((/* implicit */int) -5253264736783402955LL);
                        arr_55 [i_7] [i_7] [i_7] [i_8] = ((/* implicit */short) -385263377);
                    }
                    var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (arr_25 [i_7] [i_8 - 1])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_15 = 4; i_15 < 24; i_15 += 4) 
    {
        arr_58 [i_15 - 3] [i_15 - 3] = ((/* implicit */short) -3865459179895466088LL);
        /* LoopSeq 1 */
        for (short i_16 = 3; i_16 < 22; i_16 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                for (int i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    for (signed char i_19 = 0; i_19 < 25; i_19 += 3) 
                    {
                        {
                            arr_69 [i_19] [20LL] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_2)) == (arr_64 [i_15] [i_19] [i_17] [(signed char)15] [i_19]))))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (signed char)-69))));
                            var_25 = ((/* implicit */signed char) var_7);
                            arr_70 [i_15] [i_15] [i_19] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_62 [i_15] [i_16] [i_17] [i_18])) ? ((((_Bool)0) ? (((/* implicit */int) arr_57 [i_19] [i_17])) : (arr_64 [i_15 - 4] [i_15] [i_15 - 4] [i_15] [i_15]))) : (((/* implicit */int) arr_65 [(unsigned short)9] [i_16] [i_16] [i_15]))));
                            arr_71 [i_15] [i_15 - 1] [i_15 - 1] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_63 [i_15 + 1] [i_15] [i_15])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_15 - 2] [i_15 - 2] [i_15 + 1])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (long long int i_22 = 0; i_22 < 25; i_22 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) ((int) arr_60 [i_15 - 3]));
                            var_27 = ((/* implicit */unsigned char) var_2);
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61074))) : (561170349U)));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_23 = 1; i_23 < 23; i_23 += 2) 
        {
            for (unsigned short i_24 = 0; i_24 < 25; i_24 += 3) 
            {
                {
                    var_29 = (unsigned short)43256;
                    arr_84 [i_15] [i_15] [i_15 - 4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_72 [i_15] [i_23 - 1] [i_15] [i_23 - 1]))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_63 [i_15 - 2] [i_15 - 2] [i_15])) ? (((/* implicit */int) (short)20595)) : (((/* implicit */int) arr_63 [i_15 - 3] [i_15] [i_15]))));
    }
    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (short)-1759)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_8), (var_9))))) : (((((/* implicit */_Bool) (unsigned short)18776)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((-1) | (((/* implicit */int) (unsigned char)141))))))))));
}
