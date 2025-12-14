/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58205
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
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_12 -= min((((/* implicit */unsigned int) ((short) (short)18905))), (var_1));
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 - 4])) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 1])))) : (((/* implicit */int) min(((short)-18905), ((short)-18897))))));
            /* LoopSeq 3 */
            for (signed char i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                var_14 = ((/* implicit */short) var_4);
                var_15 *= ((/* implicit */short) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) max((arr_4 [i_0] [i_2 - 3] [i_2]), ((short)18905)))) - (18905)))));
            }
            for (signed char i_3 = 3; i_3 < 19; i_3 += 2) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) min((arr_8 [i_0] [i_0] [i_3]), ((signed char)-31))))) % (((/* implicit */int) (short)18896))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (short)-24104)) || (((/* implicit */_Bool) (short)-21795)))))));
                arr_10 [i_3] [i_1] [i_1] = var_9;
            }
            for (signed char i_4 = 3; i_4 < 19; i_4 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    arr_18 [i_0] [(signed char)19] [i_4 - 1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_5 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))) ? (((((/* implicit */_Bool) (short)18905)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18915))) : (1852869335U))) : (((var_11) >> (((((/* implicit */int) (short)-18902)) + (18923)))))));
                    arr_19 [i_0 + 2] [i_0 + 2] [i_4] [i_5 + 1] = ((/* implicit */short) max((((/* implicit */unsigned int) max((arr_6 [i_5 - 1] [(unsigned short)8] [i_5] [i_0 - 2]), (arr_6 [i_5 - 1] [i_0 - 2] [i_1] [i_0 - 2])))), (max((((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_4])), (max((var_2), (((/* implicit */unsigned int) arr_9 [i_4] [i_1] [20]))))))));
                    var_18 = ((/* implicit */unsigned int) var_6);
                }
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4 - 3] [i_0 + 1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4 + 1] [i_0 + 1] [i_4]))) : (var_3)))) ? (((/* implicit */int) max((arr_2 [i_4 - 3] [i_0 + 3] [i_4]), (arr_2 [i_4 + 1] [i_0 - 1] [i_4])))) : (((((/* implicit */_Bool) (short)-19625)) ? (((/* implicit */int) arr_2 [i_4 + 1] [i_0 + 2] [i_4 + 1])) : (((/* implicit */int) arr_2 [i_4 - 1] [i_0 + 1] [i_4 - 1]))))));
            }
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    {
                        arr_26 [(signed char)4] [i_7] [i_6] [i_7] = ((/* implicit */unsigned short) (short)(-32767 - 1));
                        var_20 *= ((/* implicit */short) var_4);
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_0] [i_1] [i_6] [i_7] [i_7]))))) + ((-(var_4)))))) ? (((/* implicit */long long int) arr_7 [i_1])) : (((((/* implicit */_Bool) (short)-18909)) ? (arr_24 [i_0 - 4] [i_0 - 4] [i_6] [i_0 - 4] [i_0 - 4] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-18915)))))));
                    }
                } 
            } 
            arr_27 [(signed char)7] [i_0 + 3] [i_1] = ((/* implicit */unsigned int) (short)-26087);
        }
        /* LoopSeq 4 */
        for (signed char i_8 = 3; i_8 < 22; i_8 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */int) ((short) ((((((/* implicit */_Bool) (short)-18892)) || (((/* implicit */_Bool) arr_1 [i_0 - 4] [i_8])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (3563348775U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)36604)))))));
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) 3206092964U)) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_8 - 2])) % (((/* implicit */int) (short)-26087))))))))));
            arr_31 [i_0 - 3] [i_0] [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-32740)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (short)-18886)))) : (((/* implicit */int) ((((/* implicit */int) ((short) (short)26087))) < (((/* implicit */int) min((((/* implicit */short) (unsigned char)90)), ((short)-18869)))))))));
            arr_32 [i_0] [i_8 - 1] = ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)36021)) : (((/* implicit */int) (short)-18916))))) > (4294967290U))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)10079)) / (((/* implicit */int) (signed char)55))))) : (((unsigned int) min((arr_16 [(unsigned short)15] [(unsigned short)15] [i_0] [(unsigned short)19] [i_0] [i_8]), (((/* implicit */long long int) (short)-18913))))));
            arr_33 [(signed char)6] [(short)10] [(short)10] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) (short)-1))))) % ((-(arr_24 [(short)12] [(short)12] [i_0] [(short)6] [i_0 + 1] [i_0])))));
        }
        /* vectorizable */
        for (signed char i_9 = 3; i_9 < 22; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                arr_39 [i_0] [i_9] [(unsigned char)19] [i_10] = ((/* implicit */short) var_4);
                var_24 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                arr_40 [i_0] [i_9 - 1] [i_9] = ((/* implicit */unsigned char) arr_5 [i_0] [i_9 - 2] [i_10] [i_10]);
            }
            for (unsigned short i_11 = 1; i_11 < 21; i_11 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) arr_23 [14]);
                var_26 -= ((/* implicit */int) ((long long int) (-(((/* implicit */int) (signed char)65)))));
            }
            var_27 = ((/* implicit */signed char) ((int) (short)18891));
            var_28 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_9] [i_0] [i_0 + 2] [i_9 - 2] [i_9])) ? ((~(((/* implicit */int) (short)4081)))) : (((/* implicit */int) (unsigned short)65527))));
        }
        for (signed char i_12 = 3; i_12 < 22; i_12 += 1) /* same iter space */
        {
            var_29 = ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_7)), (731618521U))) % (min((18U), (((/* implicit */unsigned int) (short)32762))))))) ? (((/* implicit */int) ((short) (short)(-32767 - 1)))) : ((~(((((/* implicit */_Bool) 2430349699U)) ? (((/* implicit */int) (unsigned short)29532)) : (((/* implicit */int) (unsigned short)36010)))))));
            /* LoopSeq 2 */
            for (short i_13 = 3; i_13 < 22; i_13 += 2) /* same iter space */
            {
                arr_51 [i_13] [i_13] [i_13 + 1] = ((/* implicit */short) ((((((/* implicit */long long int) var_11)) / (((long long int) var_5)))) != (((/* implicit */long long int) max((((/* implicit */int) ((short) arr_29 [12U] [i_12]))), (((((/* implicit */_Bool) (short)-18922)) ? (((/* implicit */int) (short)18892)) : (arr_50 [i_0] [i_12] [i_13] [i_0]))))))));
                /* LoopNest 2 */
                for (signed char i_14 = 4; i_14 < 20; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        {
                            arr_58 [i_0] [i_12] [i_13] [i_13] [i_14] [i_15] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)32134)) ? (((/* implicit */int) arr_47 [i_0] [i_0] [i_14 - 3] [(short)20])) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_11)))) ? (((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_53 [i_13] [i_13] [(unsigned short)10] [i_12 - 1])))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned short)35997))))))) : ((-((-(1017581937U)))))));
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)36003)) ? (1896141812U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18913)))));
                            var_31 *= ((/* implicit */short) max((((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_42 [i_0 - 2] [12LL] [i_0] [i_14 + 2])))))))), (((((/* implicit */int) min((arr_12 [i_0]), (var_9)))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))))));
                        }
                    } 
                } 
            }
            for (short i_16 = 3; i_16 < 22; i_16 += 2) /* same iter space */
            {
                var_32 -= ((((/* implicit */int) ((((((/* implicit */int) (unsigned short)36004)) >> (((((/* implicit */int) (signed char)-4)) + (10))))) != (((((/* implicit */_Bool) arr_16 [i_0] [i_0 + 2] [i_12] [i_12] [i_0] [i_16 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)18913))))))) >> (((((unsigned int) min((((/* implicit */unsigned int) (short)-26079)), (var_11)))) - (701937669U))));
                var_33 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (min((((-1608040494) - (((/* implicit */int) (unsigned short)35995)))), ((~(((/* implicit */int) (short)-18920)))))) : (((((((/* implicit */int) var_9)) % (((/* implicit */int) (short)-32751)))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)35977))))))));
                var_35 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)32767))));
            }
            arr_62 [i_12] [i_12 - 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1831331854U))));
            arr_63 [(short)14] [i_12] [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_22 [i_0] [(short)16] [i_0] [i_12] [i_12] [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-26097)), (arr_35 [i_0]))))))) << (((min((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) -1499655448)))))) + (6050177940562126669LL)))));
            arr_64 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) ((short) (short)-26087))) ? (((((/* implicit */int) (short)29260)) % (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-24072)) : (((/* implicit */int) (signed char)-1))))))));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 23; i_17 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_18 = 2; i_18 < 21; i_18 += 3) 
            {
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-14696)) ? (((/* implicit */int) (short)24090)) : (((/* implicit */int) (short)-26315))));
                arr_69 [i_0] = var_8;
            }
            var_37 -= ((/* implicit */unsigned short) (~(((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)-38))))));
        }
    }
    for (unsigned short i_19 = 4; i_19 < 20; i_19 += 4) /* same iter space */
    {
        arr_73 [i_19] = ((/* implicit */unsigned short) ((short) (short)26118));
        arr_74 [i_19] = ((/* implicit */unsigned short) max((((((unsigned int) (unsigned char)51)) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_19] [i_19] [i_19] [i_19 - 2]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_19] [i_19] [i_19] [i_19 + 3] [i_19] [i_19])))))));
        arr_75 [i_19] = ((/* implicit */int) (((+(((/* implicit */int) arr_11 [i_19])))) != (((((/* implicit */int) (unsigned short)65522)) | (((/* implicit */int) (short)14706))))));
        arr_76 [i_19 - 4] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)18919))))) << (((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_9 [i_19] [i_19 - 2] [i_19])))) - (9458)))));
    }
    var_38 = ((/* implicit */signed char) var_7);
}
