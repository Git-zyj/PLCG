/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82678
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
    var_12 = ((/* implicit */unsigned long long int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (((((((/* implicit */int) var_0)) != (((/* implicit */int) var_1)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) && (((/* implicit */_Bool) (unsigned short)31268))))))))));
    var_14 = ((/* implicit */long long int) (+(var_4)));
    var_15 = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) 1882115668)) ? (((/* implicit */int) (unsigned short)51738)) : (((/* implicit */int) (unsigned char)0)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_16 *= ((/* implicit */short) ((((/* implicit */int) (unsigned short)34255)) == (((/* implicit */int) (_Bool)1))));
                        var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)103)), ((unsigned short)63318))))) & (((((/* implicit */_Bool) arr_0 [i_3])) ? (var_9) : (((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)19] [(unsigned char)19] [(unsigned char)19])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))) : (arr_1 [i_0] [i_0])))))));
                        var_18 = ((/* implicit */long long int) ((min((arr_6 [i_1] [i_1] [i_2 + 3] [(unsigned char)6]), (arr_6 [(unsigned char)8] [i_0] [i_2 + 3] [i_3]))) > ((+(arr_6 [i_2] [i_1] [i_2 + 2] [i_3])))));
                        arr_8 [i_3] = ((/* implicit */unsigned char) ((((arr_7 [i_2] [i_2] [i_2 + 2] [i_2] [i_3]) ^ (arr_7 [i_2] [i_2] [i_2 + 2] [(signed char)1] [i_2 + 3]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [6LL])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) (unsigned char)231)))))) : (min((-18LL), (((/* implicit */long long int) (_Bool)1)))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 3; i_5 < 19; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (_Bool)1))));
                            var_20 = ((/* implicit */unsigned char) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-24598))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 3; i_7 < 16; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_15 [i_0] [i_0] [i_4] [i_0] [i_8] [i_0]))));
                            arr_24 [i_0 - 2] [i_0] [i_1] [i_1] [i_0] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31295)) ? (min((arr_6 [i_4] [i_1] [i_4] [i_7]), (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)242)) || (((/* implicit */_Bool) (unsigned char)107))))))))));
                            arr_25 [i_8] [i_8] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */long long int) ((arr_23 [i_0] [i_1] [i_4] [i_7] [i_8]) ? (((/* implicit */int) (short)-14473)) : (((/* implicit */int) ((short) (unsigned short)0)))));
                            var_22 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 4318295310057486002LL)) ? (((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) var_8)))) : (min((1882115668), (((/* implicit */int) (unsigned short)65535))))))));
                        }
                    } 
                } 
                arr_26 [i_1] [i_4] = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_17 [i_0 - 2] [i_0 + 1] [i_0 - 3] [i_0 - 1] [i_0 - 2])) || (arr_23 [i_0 - 2] [i_0 + 1] [i_0 - 3] [i_0 - 1] [i_0 - 2])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    var_23 &= ((/* implicit */int) min((((((/* implicit */_Bool) arr_27 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0 - 1]))) : (arr_22 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]))), (((/* implicit */long long int) ((arr_21 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3]) > (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_1] [i_1])), (var_0)))))))));
                    var_24 &= ((/* implicit */long long int) ((unsigned char) 9223372036854775802LL));
                    var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 1]))) ? (arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 3]) : (arr_6 [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_0 + 1])));
                }
            }
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_29 [i_0] [i_0] [i_1] [i_0 - 1] [i_0] [i_1])))) && (((/* implicit */_Bool) max((arr_7 [14LL] [i_1] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_3)))))));
        }
        for (short i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min((arr_0 [i_0 - 1]), (((/* implicit */long long int) (unsigned char)0)))))));
            var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) + (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0 - 3] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_31 [i_10])) ? (arr_0 [(unsigned short)9]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) var_1)), (arr_22 [i_10] [i_0 - 1] [i_0] [i_0 - 1] [i_0])))))));
            var_29 *= ((_Bool) min((2147483647), (((/* implicit */int) (short)-23553))));
        }
        for (short i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
        {
            var_30 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_6 [i_0 - 3] [i_11] [(short)7] [i_0 - 1]) <= (arr_6 [i_0] [i_11] [i_11] [i_0 - 1])))), (min((6957959424880882197ULL), (((/* implicit */unsigned long long int) arr_33 [i_0]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_12 = 3; i_12 < 19; i_12 += 2) 
            {
                var_31 = ((/* implicit */unsigned long long int) var_7);
                arr_37 [i_12] [i_12] [i_12] = ((/* implicit */int) arr_36 [i_12 + 1] [i_11] [i_12]);
                var_32 = ((/* implicit */long long int) var_8);
            }
            var_33 = ((/* implicit */signed char) (~(((unsigned long long int) arr_30 [i_0 + 1] [i_0 - 3] [i_0 + 1]))));
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_13] [i_13]))) <= (arr_38 [(unsigned char)15])));
            var_35 = ((/* implicit */unsigned char) -137577993);
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 2; i_14 < 19; i_14 += 3) 
            {
                var_36 = ((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_0] [i_0])) & (((/* implicit */int) arr_27 [i_0 - 3]))));
                /* LoopSeq 3 */
                for (int i_15 = 3; i_15 < 16; i_15 += 3) 
                {
                    var_37 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) arr_38 [i_13])))));
                    arr_48 [i_0] [i_0] [13LL] [i_15] [i_14] [i_14 - 1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (unsigned short)20256)) ? (((/* implicit */int) (unsigned short)45279)) : (((/* implicit */int) (short)-1)))));
                }
                for (int i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    var_38 = ((/* implicit */signed char) ((unsigned char) (short)-18880));
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_0 [i_13]))) > (arr_49 [11ULL] [i_0] [16])));
                    arr_51 [i_16] [i_16] [16ULL] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1257723598)) ? (arr_1 [i_14 - 2] [i_0 - 1]) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-21)))))));
                    arr_52 [i_13] [i_13] [i_14 + 1] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (unsigned short)0))))) ? ((+(((/* implicit */int) arr_31 [i_16])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)14743)) : (((/* implicit */int) arr_47 [i_0] [i_13] [i_14] [i_16] [i_16]))))));
                    var_40 *= ((/* implicit */unsigned char) ((arr_49 [i_0] [i_0] [i_0]) != (((/* implicit */int) (signed char)-107))));
                }
                for (unsigned long long int i_17 = 2; i_17 < 19; i_17 += 2) 
                {
                    var_41 = ((/* implicit */short) ((unsigned short) arr_40 [i_0]));
                    arr_55 [i_17 - 1] [i_14] [i_14] [i_13] [i_0] = ((/* implicit */unsigned char) ((arr_46 [i_0 - 1]) ? (((/* implicit */int) arr_46 [i_0 - 1])) : (((/* implicit */int) arr_46 [i_0 - 1]))));
                    var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)11))));
                    arr_56 [(unsigned char)0] [i_13] [i_14 - 1] [i_17 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)45)) | (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_14 [i_14 - 2] [i_13] [i_14 + 1] [i_17] [11LL] [i_17 - 2])) : (((/* implicit */int) (unsigned short)0))));
                }
                var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_14 - 2] [i_14 - 2] [i_0 - 1] [i_0 - 3] [i_0] [i_0])) ? (arr_29 [i_14 - 2] [i_14 - 2] [i_0 - 1] [i_0] [i_0] [i_0]) : (arr_29 [i_14 - 2] [i_14 - 2] [i_0 - 1] [i_0] [i_0] [i_0])));
                var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1])) ? (((/* implicit */int) (short)14764)) : (arr_21 [i_14] [i_14 + 1] [i_14] [i_14 - 2])));
            }
        }
        arr_57 [i_0 + 1] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)45279)) ? (((/* implicit */int) ((signed char) arr_34 [i_0] [i_0] [i_0 - 3]))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_29 [i_0] [i_0] [i_0] [i_0] [0ULL] [i_0]) : (((/* implicit */int) arr_31 [i_0]))))))));
        var_45 = ((/* implicit */unsigned short) min((((/* implicit */short) (_Bool)1)), ((short)0)));
        arr_58 [i_0] = ((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_0] [6] [6]));
        var_46 = ((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) 2147483647)) ? (arr_28 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_44 [i_0] [i_0] [i_0] [i_0])))) > (((/* implicit */long long int) min((((/* implicit */int) var_11)), (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 3])))))));
    }
    for (unsigned short i_18 = 2; i_18 < 13; i_18 += 1) 
    {
        arr_63 [16ULL] [i_18] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_18])) ? ((+(arr_50 [i_18] [i_18] [i_18 + 4] [i_18] [i_18] [i_18 + 4]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_40 [i_18 - 1]))))))) / (arr_3 [i_18] [i_18] [i_18])));
        /* LoopSeq 1 */
        for (signed char i_19 = 0; i_19 < 17; i_19 += 1) 
        {
            arr_67 [i_18] &= ((/* implicit */short) var_9);
            /* LoopSeq 2 */
            for (long long int i_20 = 0; i_20 < 17; i_20 += 2) 
            {
                var_47 = ((((((/* implicit */_Bool) (unsigned short)7617)) ? (288230376151711728LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)134))))) / (((/* implicit */long long int) max((((/* implicit */int) arr_19 [i_18 + 1] [i_18 - 1] [i_18 + 3])), ((-(((/* implicit */int) (unsigned char)252))))))));
                var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_44 [i_20] [i_19] [i_19] [i_18])) / (((arr_36 [i_18 - 1] [i_18 - 1] [i_18 + 4]) / (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [(unsigned char)16] [i_19])))))))));
                var_49 = ((/* implicit */unsigned char) arr_44 [i_20] [i_20] [i_20] [i_20]);
            }
            for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_22 = 3; i_22 < 16; i_22 += 3) 
                {
                    for (unsigned char i_23 = 0; i_23 < 17; i_23 += 2) 
                    {
                        {
                            var_50 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))) : (2541668703931572122LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_10 [1ULL] [i_19] [i_21] [i_22 - 3])) > (((/* implicit */int) var_7)))))))) * ((~(var_4)))));
                            var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((arr_62 [i_19]) >> (((((/* implicit */int) arr_54 [i_18 + 3] [i_19] [i_21] [i_22])) - (15)))))) ? (arr_17 [i_18] [i_22 - 2] [i_21] [i_22 - 2] [i_22 - 2]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_19])))))))))));
                        }
                    } 
                } 
                var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_21] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1])) / (((/* implicit */int) arr_23 [i_18 + 4] [i_21] [i_18 + 4] [i_18 + 2] [i_18 + 2]))))) || (((/* implicit */_Bool) arr_3 [2ULL] [i_19] [i_19])))))));
                var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) 63))));
                var_54 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */short) arr_4 [i_18 + 1])), (arr_75 [i_18 + 1] [i_18 - 2] [9ULL] [i_18] [(signed char)7] [i_18 + 1] [i_18 - 1]))))));
            }
            var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) var_6))));
        }
        var_56 *= ((/* implicit */unsigned short) var_10);
        var_57 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_18 + 3] [i_18] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))) : (((((/* implicit */_Bool) arr_60 [i_18] [i_18])) ? (6092007694531742778ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
    }
}
