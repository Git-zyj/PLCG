/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79857
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_2) : (((/* implicit */long long int) var_10))))) ? (((/* implicit */int) max((((/* implicit */short) arr_2 [i_0])), ((short)-25429)))) : (max((((/* implicit */int) var_0)), (arr_3 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) var_0))))) != (((((/* implicit */_Bool) arr_8 [i_3] [i_1] [i_2] [(unsigned short)6])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (var_6))))) ? (max((132120576U), (((/* implicit */unsigned int) (signed char)-44)))) : (max((arr_1 [i_1]), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_9 [i_0])), (arr_11 [i_1] [7ULL] [i_2] [i_2]))))))));
                    arr_13 [i_0] [i_3] [i_0] [i_3] [i_0] = ((((/* implicit */_Bool) min((arr_11 [i_0] [i_1] [i_2] [i_1 + 1]), (arr_11 [i_0] [i_1] [i_1] [i_1 + 2])))) ? (((/* implicit */int) max((arr_8 [i_3] [i_1] [i_1 - 1] [i_3]), (((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_2 + 1] [i_1 + 2]))))) : (((/* implicit */int) min((((/* implicit */short) arr_7 [i_3])), (var_3)))));
                    arr_14 [(unsigned short)10] [i_3] [i_1] [i_1] [(unsigned short)10] &= ((/* implicit */short) min((((/* implicit */int) arr_2 [16ULL])), (max((((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_1 + 1])), (((arr_3 [i_0]) ^ (((/* implicit */int) (short)25424))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
                {
                    arr_17 [i_2] [i_2] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(max((((/* implicit */unsigned int) -2047356335)), (3515635235U)))));
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-25429))));
                    var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)92), ((short)-25429)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (2059281536)))) ? (((/* implicit */unsigned long long int) 779332060U)) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18253262943389792750ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 + 2]))) : (1023U))))));
                }
                var_13 = ((/* implicit */_Bool) max(((~(max((var_6), (((/* implicit */unsigned int) (-2147483647 - 1))))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2])) - (((/* implicit */int) (signed char)-81))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_0]) && (((/* implicit */_Bool) var_7)))))) : (min((((/* implicit */unsigned int) arr_7 [i_2])), (779332075U)))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) max((((/* implicit */long long int) 4294967295U)), (((max((((/* implicit */long long int) var_0)), (var_2))) | (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) arr_23 [i_1] [i_1] [i_5] [i_6] [i_1])))))))));
                        arr_24 [i_6] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (short)-25425);
                        arr_25 [i_6] [i_0] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 4812106589293826775LL)) >= (18253262943389792770ULL))) ? ((-(((/* implicit */int) ((var_1) >= (((/* implicit */int) (unsigned char)164))))))) : (((((/* implicit */int) var_3)) >> (((((var_7) / (var_1))) + (6)))))));
                    }
                } 
            } 
            arr_26 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_11 [i_0] [i_1 + 2] [i_1] [i_0])), (arr_23 [i_0] [i_0] [i_1] [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned int) var_4)), (arr_1 [i_0]))))) : (min((((193481130319758841ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25428))))), (((/* implicit */unsigned long long int) var_5))))));
        }
        var_15 = ((/* implicit */signed char) (unsigned short)28282);
        var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5171516180835767478LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7]))) > (max((((/* implicit */unsigned int) min((((/* implicit */int) arr_20 [i_7] [(short)11])), (var_10)))), (max((((/* implicit */unsigned int) (short)-25431)), (779332077U)))))));
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            /* LoopSeq 3 */
            for (short i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                arr_35 [i_7] [i_8] [i_9] [i_9] = min((((/* implicit */int) min((max(((short)32121), (((/* implicit */short) arr_9 [i_9])))), (((/* implicit */short) arr_27 [i_8] [i_7]))))), (arr_3 [i_7]));
                arr_36 [i_9] [i_8] [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)32121)), (263828539U)));
            }
            for (unsigned char i_10 = 2; i_10 < 15; i_10 += 1) 
            {
                var_18 = ((/* implicit */short) (_Bool)0);
                var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_7] [i_8] [i_8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_21 [i_7] [i_8] [i_8] [i_10] [i_8] [i_10]))))) ? (((/* implicit */int) arr_16 [i_10 - 1] [i_10] [i_10 - 1] [i_10] [i_10] [i_10])) : (((/* implicit */int) max(((short)26220), (((/* implicit */short) (unsigned char)161)))))))) ? ((+(((/* implicit */int) (unsigned short)65535)))) : (min(((+(((/* implicit */int) arr_2 [i_7])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (var_7)))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_45 [i_7] [i_10] [i_12] [i_11] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) min((15973006642427787897ULL), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) arr_11 [i_7] [i_8] [i_8] [i_10 - 2])) : (arr_39 [i_7] [i_8] [i_10 - 1]))) % (((/* implicit */int) ((_Bool) min((var_10), (((/* implicit */int) (short)7))))))));
                            arr_46 [i_7] [i_7] [i_8] [i_8] [i_10] [i_12] [i_12] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228))) == (10103802029779164364ULL)))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))) | (9223372036854775807LL)))) ? ((+(var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-22036)))))))));
                            arr_47 [i_12] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32683)) ? (((/* implicit */int) (short)-511)) : (((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_21 [i_7] [i_8] [i_7] [i_7] [i_12] [i_7])) : (((/* implicit */int) var_8)))) : (min((var_7), (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (arr_19 [i_11] [i_11]))))) : (var_6)))));
                            arr_48 [i_7] [i_7] [i_8] [i_8] [i_7] [i_11] [i_12] = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
                arr_49 [i_10] [i_10] [i_8] [i_7] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_42 [i_10] [i_10] [i_10] [i_10 + 2]) ? (var_6) : (((/* implicit */unsigned int) arr_34 [i_10] [i_10] [i_10]))))), (min((10ULL), (((/* implicit */unsigned long long int) ((779332062U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-10770))))))))));
                arr_50 [i_10] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_40 [i_7] [i_7] [i_10] [i_10 - 1] [i_10] [i_10])) ? (((((/* implicit */_Bool) arr_0 [i_10])) ? (((/* implicit */int) var_4)) : (var_10))) : (((/* implicit */int) min((((/* implicit */short) var_4)), ((short)-23375)))))), (max((((/* implicit */int) (unsigned char)92)), (65535)))));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                var_20 |= ((((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) (short)-24477)) : (arr_34 [i_7] [i_8] [i_7]))) - (((/* implicit */int) var_8)));
                arr_54 [i_7] [i_8] [i_8] = ((/* implicit */signed char) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_13] [i_13] [i_13] [i_7])))));
            }
            /* LoopNest 2 */
            for (unsigned char i_14 = 1; i_14 < 14; i_14 += 1) 
            {
                for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 1) 
                {
                    {
                        arr_60 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_52 [i_14 + 3] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((var_9) / (((/* implicit */long long int) ((/* implicit */int) (signed char)106)))))))));
                        arr_61 [i_15] [i_7] [9U] [i_15] = ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)116))))), (arr_19 [i_14 + 3] [i_15 + 4])))), (((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned short)3255))))))));
                        arr_62 [i_7] [i_14] [i_14] [i_14] = ((/* implicit */short) ((unsigned long long int) ((-1885994952) == (((/* implicit */int) (unsigned short)62281)))));
                        var_21 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1885994954)) ? (((/* implicit */int) arr_42 [i_14] [i_8] [i_14] [i_7])) : (-1885994954)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_6))))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */int) arr_38 [i_7] [i_7] [i_7] [i_7]);
        arr_63 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_59 [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) 3515635244U))))) : (min((715800947149741579ULL), (((/* implicit */unsigned long long int) arr_59 [(unsigned char)15] [(unsigned short)7] [i_7]))))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 1) /* same iter space */
    {
        arr_66 [i_16] = ((/* implicit */unsigned char) max((452859701), (min((max((((/* implicit */int) var_3)), (-452859701))), (((/* implicit */int) ((short) (_Bool)1)))))));
        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-5796)), (17730943126559810036ULL)))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (13588698591058396491ULL)))));
        var_24 += ((/* implicit */int) min((779332078U), (((/* implicit */unsigned int) (_Bool)1))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) /* same iter space */
    {
        var_25 = (+(1694422048));
        var_26 ^= ((/* implicit */short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)3)));
    }
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((var_7) / ((-2147483647 - 1)))) : (((/* implicit */int) min((var_3), (((/* implicit */short) (_Bool)1)))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((2147483647) == (((/* implicit */int) var_5)))))) >= (max((((/* implicit */long long int) var_4)), (var_9)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3515635200U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11420710679923665475ULL)))))))));
    /* LoopSeq 1 */
    for (long long int i_18 = 4; i_18 < 17; i_18 += 2) 
    {
        var_28 = ((/* implicit */short) var_6);
        var_29 += ((/* implicit */signed char) min((((((/* implicit */_Bool) -6249803247502790790LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)152)))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_71 [i_18 - 4]))))));
    }
    var_30 = ((/* implicit */short) (((_Bool)0) ? (715800947149741578ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_31 = ((/* implicit */short) ((((/* implicit */int) (short)32767)) <= ((-2147483647 - 1))));
}
