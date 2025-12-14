/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81807
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
    for (long long int i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_6);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2147483647) / (((/* implicit */int) (unsigned char)80))))) || (((/* implicit */_Bool) max((var_13), ((unsigned short)0))))))), (max((arr_4 [i_0] [i_0]), (arr_4 [i_3] [i_1])))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_11))));
                        var_18 = ((/* implicit */long long int) min((var_18), (max((min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) / (6669651789378664569LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)11)) | (964605165)))))), (((long long int) arr_6 [i_0 + 1] [(unsigned char)20] [2ULL] [i_3]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (long long int i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                {
                    var_19 -= ((/* implicit */unsigned char) arr_9 [i_0] [(unsigned short)7] [i_4] [i_0]);
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_20 = var_1;
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            arr_23 [i_0] [i_0] [i_0] [15LL] [i_0] [i_0 - 1] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_8 [i_0 + 1]), (arr_8 [i_0 - 3]))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(9223372036854775807LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((-4013612281425339033LL) > (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [(unsigned char)21] [i_5]))))) ? (((/* implicit */unsigned int) 2147483647)) : (max((((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_0])), (arr_5 [i_7]))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-98)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)101)) - (75))))))));
                        }
                        var_22 = ((/* implicit */short) arr_0 [i_4] [i_4]);
                    }
                    for (long long int i_8 = 2; i_8 < 24; i_8 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) 5515568243315221512LL)) ? (min((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-98)), ((unsigned char)198)))), ((~(((/* implicit */int) (unsigned short)13590)))))) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])))))));
                        arr_26 [(unsigned char)5] [(unsigned char)5] [i_5] [i_8] = max((max((((/* implicit */unsigned int) var_7)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_5] [i_0] [i_0] [i_0]))) ^ (var_6))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) != (((((/* implicit */_Bool) var_6)) ? (14723606770860335326ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            arr_31 [i_0] [i_4] [i_9] [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_5]))));
                            arr_32 [i_8] [i_5] [i_4] = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) ((unsigned char) var_10))), (arr_0 [i_0 - 1] [i_4]))) != (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_5] [i_5 + 4] [i_5 + 4]), (arr_11 [i_5] [i_5 + 4] [i_5 + 1])))))));
                            var_24 = ((/* implicit */long long int) var_5);
                            arr_33 [i_0] [i_0] [i_5] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_0))))), (max((((/* implicit */long long int) arr_29 [i_4] [i_5] [(signed char)18] [i_5] [i_0])), (arr_10 [i_9] [i_8] [i_4] [i_4]))))), (((/* implicit */long long int) arr_9 [11U] [11U] [17ULL] [17ULL]))));
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((((/* implicit */_Bool) max((max((((/* implicit */unsigned short) arr_15 [i_0] [i_5] [i_8] [i_8])), ((unsigned short)51933))), (((/* implicit */unsigned short) var_7))))) ? (((((((/* implicit */long long int) 1119278074)) == (arr_20 [i_0] [i_4] [i_5] [i_8] [i_4] [12U] [i_0]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_14))))) : (min((var_6), (((/* implicit */unsigned int) (unsigned short)51946)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_3))) && (((/* implicit */_Bool) var_10)))))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 23; i_10 += 2) 
                        {
                            arr_39 [i_0 + 1] [i_0 + 1] [i_4] [i_5] [i_0 + 1] [i_5] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */long long int) (-(((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_4] [i_5])))))))) / (min((((/* implicit */long long int) var_1)), (arr_8 [i_0 - 1])))));
                            var_25 *= ((/* implicit */unsigned char) ((long long int) min((arr_9 [i_10 - 1] [i_5 - 1] [i_5 - 1] [i_4]), (((/* implicit */short) (signed char)127)))));
                            arr_40 [i_5] [i_5] [i_5] [i_5] [i_10] = ((/* implicit */int) var_13);
                        }
                    }
                    for (long long int i_11 = 2; i_11 < 24; i_11 += 1) /* same iter space */
                    {
                        var_26 = ((long long int) max((((/* implicit */long long int) arr_41 [i_0] [i_4] [i_11 - 1] [i_0 - 4])), (arr_27 [i_0 - 3] [(unsigned char)18])));
                        arr_45 [i_0] [i_4] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)13604))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_17 [i_11 - 1] [i_5] [i_4] [i_4] [i_0] [i_0])))))) ? ((+((+(((/* implicit */int) (short)-10446)))))) : (((/* implicit */int) var_13))));
                        /* LoopSeq 2 */
                        for (int i_12 = 2; i_12 < 21; i_12 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((4133902491U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -3718192834285646362LL)))))))) || (((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) arr_29 [i_0] [i_0] [i_4] [i_5] [i_12 - 1])), (var_6)))))));
                            arr_48 [i_5] [i_5] = ((/* implicit */unsigned short) arr_5 [8LL]);
                            var_29 -= ((/* implicit */unsigned char) ((max((arr_24 [i_4] [i_5 - 1] [i_4]), ((~(((/* implicit */int) (signed char)-75)))))) % (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_12 [i_0 - 4])), (-5797861824324503301LL)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)5045)), ((unsigned short)51930)))))))));
                            arr_49 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = min((((min((var_5), (((/* implicit */unsigned int) var_15)))) + (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */short) var_12)))))))), (((((var_6) >> (((((/* implicit */int) (signed char)87)) - (86))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
                        }
                        for (int i_13 = 2; i_13 < 21; i_13 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */long long int) var_4);
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_44 [i_5]))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) max(((short)-1), (((/* implicit */short) arr_35 [i_0] [i_4] [i_5 - 1] [i_11] [i_13] [14U]))))) >> (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_7)))))))));
                        }
                    }
                    for (long long int i_14 = 2; i_14 < 24; i_14 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_14 [i_0] [i_0])))) <= (((/* implicit */int) arr_28 [15LL] [15LL])))))) / ((+(max((7758883355262805197LL), (-4204829160730063094LL)))))));
                        var_33 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (var_2))) - (((((/* implicit */_Bool) arr_41 [i_14 - 2] [i_5] [i_14] [i_14 + 1])) ? (var_1) : (2555198186U)))));
                        var_34 |= ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_29 [i_0] [i_4] [i_5] [i_4] [i_14])) : (((/* implicit */int) arr_14 [i_0] [(short)22]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))) * (var_6)))))) / (min((-6711597783904966749LL), (((/* implicit */long long int) (unsigned short)17825)))));
                        arr_54 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) 1804054232U)) > (5515568243315221512LL)));
                        var_35 = ((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_0]))) : (var_6))))));
                    }
                }
            } 
        } 
    }
    for (short i_15 = 2; i_15 < 15; i_15 += 2) 
    {
        var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_15 + 2]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))))))) < (((((((/* implicit */_Bool) (unsigned char)206)) || (((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */short) var_14)))))) : (min((((/* implicit */unsigned int) arr_47 [i_15] [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15 - 2] [i_15 + 1] [i_15 + 2])), (var_5)))))));
        arr_57 [i_15] [i_15 + 1] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 18U)) ? (8353127004946702313ULL) : (((/* implicit */unsigned long long int) 2555198201U)))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 17ULL))))))))));
    }
    for (short i_16 = 0; i_16 < 18; i_16 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_17 = 3; i_17 < 16; i_17 += 1) 
        {
            var_37 = ((/* implicit */unsigned int) ((unsigned short) ((arr_27 [i_17 + 1] [i_17 + 1]) | (((/* implicit */long long int) ((/* implicit */int) var_4))))));
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_17 - 3] [i_16] [i_16] [i_16] [i_17 - 3] [i_17 + 1])) ? (6007253740094043809LL) : (((/* implicit */long long int) arr_0 [i_16] [i_17 - 2]))))) ? (max((var_6), (arr_21 [i_17 - 3] [i_16] [i_17] [i_17 - 3] [i_17 + 2] [i_17 - 1]))) : (max((arr_0 [i_16] [i_17 - 1]), (arr_0 [i_16] [i_17 + 2])))));
        }
        arr_63 [i_16] = ((/* implicit */long long int) ((((/* implicit */long long int) 488627849U)) != (-5515568243315221513LL)));
    }
    var_39 = ((/* implicit */unsigned long long int) (unsigned short)51953);
}
