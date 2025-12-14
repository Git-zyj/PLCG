/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55072
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
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) > (var_1)))), (var_7)))));
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) == (((18014398509219840ULL) % (((/* implicit */unsigned long long int) var_10))))))), ((+((+(((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) min((arr_2 [i_1] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_14 [i_1] [15U] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 + 1] [i_3] [i_3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1] [i_3] [i_3]))) - (var_2))) : (min((var_10), (((/* implicit */unsigned int) arr_10 [i_3 + 1] [i_3 - 1] [i_3] [i_3]))))));
                            var_18 = min((min((arr_7 [i_0] [i_0] [i_1 + 1] [i_3 + 2]), (arr_7 [i_0] [i_0] [i_1 + 1] [i_3 + 2]))), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_1]), (arr_5 [(signed char)1] [i_1]))))) == (arr_12 [i_1] [(short)12])))));
                            arr_15 [i_0] [i_1] [i_0] [i_1] [i_3] = var_10;
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned int) max(((+(var_5))), (arr_22 [i_0] [i_1 - 1] [i_4 + 1] [i_5] [i_6] [i_1] [7LL])));
                                var_20 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (-(arr_10 [i_0] [i_1] [i_1] [i_5])))), (((arr_4 [i_0] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))))) > (18014398509219846ULL)));
                                arr_23 [i_0] [2ULL] [i_0] [i_0] [i_5] &= ((/* implicit */signed char) min((min((min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)249))), ((unsigned char)7))), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((var_14) - (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_0] [i_5] [i_4 + 2] [i_1] [i_0]))) : (var_7))))))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_22 [i_0] [i_1] [i_1 - 1] [i_1] [i_4] [i_5] [i_1]) | (arr_10 [i_0] [i_0] [i_0] [i_0])))), ((~(3551671505571672276ULL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 1) 
                {
                    for (signed char i_10 = 1; i_10 < 20; i_10 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_32 [i_10] [(signed char)3] [i_9] [i_7 - 1] [i_7 - 1])))) ? ((((+(((/* implicit */int) (unsigned short)0)))) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (-488498263))) - (20744))))) : (arr_28 [i_7 + 2] [i_10]))))));
                            arr_34 [i_7] [i_7] [i_7] = ((/* implicit */signed char) min((((/* implicit */int) arr_24 [i_7])), (max((((((/* implicit */int) arr_33 [i_7])) << (((((/* implicit */int) var_0)) - (209))))), (((/* implicit */int) ((2773617857U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))))))))));
                            arr_35 [i_7] [i_7] [i_8] [(signed char)22] [i_9] [i_10 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [(unsigned short)16] [i_10])) ? (((((/* implicit */long long int) var_2)) + (max((71494644084506624LL), (((/* implicit */long long int) -1043264498)))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_32 [i_7 - 1] [i_8] [i_7 - 1] [i_9 + 2] [i_10 + 2])))))));
                            var_23 |= ((/* implicit */unsigned int) (-(min(((-(var_7))), (var_7)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_11 = 1; i_11 < 20; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 1; i_12 < 22; i_12 += 4) 
                    {
                        arr_40 [i_8] &= ((/* implicit */int) (short)32758);
                        var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) | (1310151912)))), (((((/* implicit */_Bool) 18428729675200331761ULL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_7] [i_7]))))) : (((((/* implicit */unsigned long long int) arr_29 [7U] [i_8])) - (var_7)))))));
                        var_25 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-106))))) > (((/* implicit */int) (unsigned char)69))));
                        arr_41 [i_7] [i_7] [i_8] [i_8] [i_11] [i_12] &= ((/* implicit */int) ((unsigned short) min((arr_32 [12LL] [i_7 - 1] [i_7] [i_11 + 1] [i_12 - 1]), (((/* implicit */unsigned char) min((((/* implicit */signed char) var_3)), (var_12)))))));
                        arr_42 [(signed char)10] [i_8] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_7] [i_8])) - (((((/* implicit */_Bool) arr_32 [i_7] [i_7] [i_8] [i_11 - 1] [i_12])) ? (((((/* implicit */int) (unsigned char)18)) << (((((/* implicit */int) arr_33 [i_8])) - (189))))) : (((/* implicit */int) var_4))))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) min((((((/* implicit */int) (signed char)47)) << (((4294967269U) - (4294967245U))))), (arr_28 [i_7] [i_8]))))));
                        arr_45 [i_8] [i_11] [i_7] = ((/* implicit */unsigned long long int) arr_31 [i_11] [i_8] [i_7]);
                        var_27 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [i_8])) ? (((/* implicit */int) arr_33 [i_8])) : (((/* implicit */int) arr_33 [i_8])))) % (((((/* implicit */_Bool) arr_28 [i_11 + 1] [i_7 - 1])) ? (((/* implicit */int) arr_33 [i_8])) : (((/* implicit */int) arr_24 [i_8]))))));
                        var_28 = (~(-1351426382));
                    }
                    var_29 = ((((/* implicit */_Bool) arr_32 [i_8] [i_8] [i_8] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) (+(arr_39 [i_11 + 2])))) : (((unsigned long long int) ((arr_36 [i_7]) * (arr_39 [i_11])))));
                    arr_46 [i_7] [i_8] [i_8] [(unsigned char)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (_Bool)1)), (4294967269U)))))) ? (((int) ((((/* implicit */int) var_4)) % (var_1)))) : ((-(((/* implicit */int) arr_25 [i_11 - 1] [i_7]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        for (signed char i_15 = 0; i_15 < 23; i_15 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) 1446962547600863970LL);
                                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((4294967281U), (((/* implicit */unsigned int) arr_33 [i_7]))))), (((((/* implicit */_Bool) arr_32 [i_15] [i_14] [i_11] [19] [19])) ? (var_7) : (((/* implicit */unsigned long long int) var_14))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4294967269U) == (min((((/* implicit */unsigned int) 2019515141)), (2554432338U))))))) : ((+(((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */unsigned int) 65504)) : (arr_36 [i_8])))))));
                            }
                        } 
                    } 
                    arr_51 [i_7] [i_7] [i_8] [i_8] = ((/* implicit */int) arr_33 [i_7]);
                }
                for (signed char i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? (((unsigned int) (signed char)-118)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 2] [i_7]))))))));
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) max((((arr_52 [i_7] [i_8] [i_7 + 2] [2U]) % (arr_52 [i_7] [i_7] [i_7 + 2] [i_16]))), (((/* implicit */int) ((var_11) == (((/* implicit */unsigned int) min((var_8), (arr_26 [(_Bool)1]))))))))))));
                }
            }
        } 
    } 
}
