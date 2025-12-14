/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87754
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_13 = arr_3 [(signed char)3];
                    var_14 = ((/* implicit */signed char) (+(1966341447)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) arr_0 [(signed char)6])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))))))), (((/* implicit */unsigned int) var_11))));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)252))))) : (((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_2 [i_4]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) < (((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17))) : (var_12)))))) : (((/* implicit */int) arr_3 [12]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((max((3138162228U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) 1156805072U)) ? (((/* implicit */int) arr_14 [(unsigned short)13])) : (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5]))))))));
                var_18 = arr_4 [i_5] [i_6];
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) min((((((arr_14 [i_5]) ? (((/* implicit */int) (unsigned short)25940)) : (var_9))) * (((((/* implicit */_Bool) 727552813U)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)235)))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_5] [i_6] [i_5] [i_6] [i_7] [i_7] [7])) == (arr_5 [i_6] [i_6]))))))));
                            arr_23 [i_5] [(signed char)10] [i_5] [i_5] = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
                arr_24 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((arr_3 [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3845310196U)))))) : (((arr_17 [i_5]) / (((/* implicit */long long int) ((/* implicit */int) var_7))))))) == (((/* implicit */long long int) var_0))));
                var_20 = ((/* implicit */long long int) 3138162232U);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
    {
        arr_27 [i_9] = (+(((((/* implicit */_Bool) arr_7 [i_9] [i_9] [(_Bool)1] [i_9])) ? (((/* implicit */int) arr_7 [(unsigned short)17] [i_9] [i_9] [(signed char)15])) : (((/* implicit */int) arr_7 [i_9] [7U] [i_9] [i_9])))));
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) arr_5 [i_9] [i_9])) % (min((((/* implicit */unsigned int) arr_6 [i_9] [i_9] [17U])), (arr_1 [i_9] [i_9]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_26 [i_9])) ? (((/* implicit */int) (_Bool)0)) : (1966341447))))))));
    }
    for (short i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
    {
        arr_31 [i_10] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_5))))) ? (arr_8 [i_10] [i_10] [i_10] [i_10] [i_10] [10]) : (((int) (_Bool)0)))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_10] [i_10])) ? (var_0) : (((/* implicit */int) var_5))))))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_10 [i_10] [i_10] [i_10] [i_10] [(signed char)9] [2LL] [i_10])))), (((/* implicit */int) (unsigned char)233))))) ? (((arr_3 [i_10]) ? (((arr_29 [9LL]) ? (var_0) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) arr_16 [3])) / (557751160))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_15 [i_10])) == (((/* implicit */int) var_7))))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-110)))))) > (((((((((/* implicit */_Bool) arr_16 [i_10])) ? (((/* implicit */int) arr_2 [i_10])) : (((/* implicit */int) arr_19 [i_10])))) + (2147483647))) >> ((((-(-2097190580))) - (2097190563)))))));
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            for (short i_12 = 2; i_12 < 8; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-2915))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_11])))))) ? (max((((((/* implicit */_Bool) arr_22 [i_10] [i_10] [i_12 + 1] [(signed char)9])) ? (arr_25 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_10] [i_12 - 1] [i_13]))))), (((/* implicit */unsigned int) ((arr_6 [i_10] [i_11] [i_12 + 1]) * (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)31233))))))))));
                        var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_37 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */int) ((13) > (((/* implicit */int) var_5))))) : (arr_9 [i_10] [i_11] [(unsigned char)3] [(unsigned char)3] [i_10] [i_11]))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (signed char i_16 = 0; i_16 < 19; i_16 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) ((_Bool) arr_42 [i_14] [i_14]));
                    var_27 = ((((/* implicit */long long int) ((/* implicit */int) ((arr_3 [(signed char)7]) && (arr_3 [i_16]))))) < (((((-7493193820217716158LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)37)) - (36))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_17 = 2; i_17 < 16; i_17 += 4) 
        {
            for (signed char i_18 = 0; i_18 < 19; i_18 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 0; i_19 < 19; i_19 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_14])) ? (((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)119))))))) : (((((/* implicit */_Bool) (signed char)66)) ? (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_19] [(unsigned short)9] [i_17]))) : (arr_39 [i_17]))) : (((((/* implicit */long long int) arr_56 [i_14] [i_17] [i_18] [i_18] [i_14])) % (-1LL)))))));
                        arr_58 [i_14] [i_17] [i_18] [i_14] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_6 [i_14] [i_17 + 3] [i_14])) : (arr_1 [i_18] [17])))) : (((((/* implicit */_Bool) (signed char)-108)) ? (arr_42 [i_14] [i_17 + 3]) : (((/* implicit */long long int) arr_53 [i_14] [i_17 + 1] [i_14])))))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_14] [(short)13] [i_14]))) - (var_10)));
                        /* LoopSeq 2 */
                        for (unsigned short i_20 = 0; i_20 < 19; i_20 += 3) 
                        {
                            arr_62 [i_14] [i_17] [i_17 + 2] [i_17] [18LL] = ((/* implicit */int) ((unsigned int) var_5));
                            arr_63 [i_14] [i_14] [i_14] [9] [i_14] = ((/* implicit */long long int) arr_7 [i_18] [i_18] [i_18] [i_20]);
                            var_30 = var_8;
                            var_31 += ((/* implicit */short) var_8);
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_49 [i_18] [i_14])) ? (((/* implicit */int) arr_55 [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) var_3))))))) ? (((max((((/* implicit */unsigned long long int) arr_53 [i_14] [i_17] [i_20])), (1924127038581444009ULL))) % (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3138162232U))))))));
                        }
                        for (unsigned int i_21 = 0; i_21 < 19; i_21 += 2) 
                        {
                            var_33 = ((((((/* implicit */_Bool) arr_55 [i_14] [i_17 + 2] [i_17 + 3] [i_17 + 2])) ? (((/* implicit */int) arr_55 [i_17 - 2] [i_17 - 2] [i_17 - 1] [i_17 + 3])) : (((/* implicit */int) arr_60 [i_14] [i_17 + 2] [i_17 - 2] [i_18] [9])))) * (((int) min((((/* implicit */unsigned char) arr_64 [i_14] [i_14] [i_14] [i_19] [i_21] [i_14])), ((unsigned char)103)))));
                            var_34 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_45 [i_14])) ? ((+(var_2))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_17 - 1]))))))) <= (((/* implicit */unsigned int) max((2147483647), (((/* implicit */int) arr_61 [i_14])))))));
                        }
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_23 = 0; i_23 < 19; i_23 += 1) 
                        {
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) 743385605U))));
                            var_36 = ((int) arr_8 [i_17 - 1] [20U] [i_18] [i_22] [i_23] [20U]);
                            arr_73 [i_14] [i_14] [i_14] [i_22] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_14] [(unsigned char)2] [i_18] [(unsigned char)2] [i_23])) ? (((/* implicit */int) ((short) 5412980854433730815ULL))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)152)) <= (((/* implicit */int) (unsigned char)103)))))));
                        }
                        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) min((((((/* implicit */_Bool) arr_69 [i_18])) ? (max((arr_68 [i_17] [i_18]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_14] [i_18] [i_18] [i_14] [i_14])) * (((/* implicit */int) (unsigned short)26404))))))), (arr_42 [i_18] [10]))))));
                        var_38 = ((/* implicit */int) var_4);
                    }
                    arr_74 [(unsigned short)1] [i_17] [i_14] [(unsigned short)6] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (-1051975905)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_14] [i_17 + 3] [i_17] [i_17] [i_14]))))) : (arr_54 [i_14] [i_14] [i_14] [i_14])))));
                }
            } 
        } 
    }
    var_39 = ((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) (short)-21839))));
}
