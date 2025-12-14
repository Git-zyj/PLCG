/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63145
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((((((/* implicit */int) arr_4 [i_0])) + (2147483647))) << (((((/* implicit */int) ((_Bool) (_Bool)1))) - (1))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) 24ULL);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min(((short)21293), (((/* implicit */short) (unsigned char)255))));
                            arr_14 [i_0] [i_3] = ((/* implicit */int) arr_11 [i_0] [i_1] [i_1]);
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */int) ((_Bool) arr_3 [(unsigned char)8] [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-21310))))))))));
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (long long int i_6 = 2; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)21308)))), (((/* implicit */long long int) min((((/* implicit */int) (short)-21310)), (-1643416185)))))))));
                                arr_24 [i_0] [i_1] [i_0] [i_5 + 1] [i_6] [i_5 + 1] [i_5 + 1] = arr_12 [i_0] [i_0] [i_4] [i_5];
                                arr_25 [i_0] [i_1] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0] [i_5 + 1] [i_0] [i_6 + 2] [i_6 - 1])) >> (((arr_16 [i_5 + 1] [i_5 + 1]) - (4151900467377725670ULL)))))) : (((((-6158393853499294725LL) + (9223372036854775807LL))) >> (((6158393853499294733LL) - (6158393853499294690LL)))))));
                                var_21 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_4] [i_0] [i_6]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) 1612389581);
                                var_23 = (!(((/* implicit */_Bool) ((int) arr_29 [i_0] [i_1] [i_4] [i_1] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 24; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                arr_37 [i_0] [i_9] [i_0] [i_9] [i_0] = min((10ULL), (7ULL));
                                var_24 = max((((arr_18 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_9 - 1]))))), (((/* implicit */unsigned int) arr_4 [i_9 - 1])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_11 = 2; i_11 < 23; i_11 += 1) 
                    {
                        var_25 = 31457280;
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            var_26 &= ((/* implicit */int) arr_20 [i_12]);
                            arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_0]);
                            arr_47 [i_4] [i_0] [9] [i_4] [i_4] [i_4] = ((/* implicit */int) ((short) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) << (((/* implicit */int) (_Bool)1)))));
                        }
                        for (signed char i_13 = 1; i_13 < 24; i_13 += 2) 
                        {
                            arr_50 [i_0] [(unsigned char)5] [i_4] [i_11 - 1] [i_13] = ((/* implicit */unsigned int) arr_45 [i_0] [i_11] [i_11] [i_11 - 1] [i_13] [(unsigned short)11]);
                            var_27 = ((/* implicit */_Bool) 18064012958210780687ULL);
                            var_28 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_13 + 1] [i_13] [i_0])) >> (((arr_23 [i_0] [i_11] [i_11 - 1] [i_11 - 1]) - (12696325938272039431ULL)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_13 + 1] [i_13] [i_0])) >> (((((arr_23 [i_0] [i_11] [i_11 - 1] [i_11 - 1]) - (12696325938272039431ULL))) - (15420275284501335789ULL))))));
                        }
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_29 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((-9223372036854775788LL), (9223372036854775807LL)))) ? (6158393853499294732LL) : ((-9223372036854775807LL - 1LL))))));
                            arr_58 [(_Bool)1] |= ((/* implicit */long long int) (((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((15664985553996217535ULL) - (15664985553996217535ULL))))) >> (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 14U))))))));
                        }
                        for (short i_16 = 2; i_16 < 22; i_16 += 3) 
                        {
                            arr_61 [i_0] [i_0] [i_0] [i_0] [10] = ((/* implicit */unsigned char) ((short) min(((signed char)-41), (((/* implicit */signed char) (_Bool)1)))));
                            arr_62 [6LL] [i_0] [i_4] [16] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned long long int) arr_7 [22ULL] [22ULL] [i_0] [i_14 - 1])), (18446744073709551600ULL))));
                            var_30 = ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) (signed char)-1)));
                            var_31 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_59 [(short)8] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) max((((/* implicit */short) arr_33 [i_0] [i_16 + 1])), ((short)12576)))) : (max((((/* implicit */int) min(((short)21292), (((/* implicit */short) (unsigned char)255))))), (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned char)0))))))));
                            var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)254))));
                        }
                        for (unsigned long long int i_17 = 3; i_17 < 22; i_17 += 4) 
                        {
                            arr_66 [i_0] = ((/* implicit */signed char) ((((unsigned long long int) (short)-10213)) << (((/* implicit */int) arr_30 [i_1] [i_4] [i_0]))));
                            arr_67 [i_0] [i_0] [i_4] [i_4] [(unsigned char)11] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)21297))));
                            var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
                        }
                        arr_68 [i_14] [i_0] [i_14] [i_4] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)186)), (((arr_18 [i_14 - 1] [i_14] [i_14 - 1] [i_14]) << (((1307795956255129950LL) - (1307795956255129949LL)))))));
                        arr_69 [i_0] [i_0] [i_1] [4] [i_0] [i_14] = ((/* implicit */int) ((short) var_2));
                        var_34 = ((((/* implicit */int) (!(((/* implicit */_Bool) -196019644))))) << (((((((((-6158393853499294747LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)129)) - (129))))) << (((3371664080U) - (3371664080U))))) - (3064978183355481031LL))));
                        var_35 = ((/* implicit */unsigned short) ((unsigned long long int) max((arr_18 [i_0] [i_14] [i_14 - 1] [i_14 - 1]), (arr_18 [i_4] [i_14] [i_14 - 1] [i_14 - 1]))));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        arr_73 [i_0] [14ULL] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_49 [i_0] [i_0] [i_1] [i_0] [i_0] [i_18] [i_18])) >> (((((/* implicit */int) (unsigned char)255)) - (241)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_49 [i_0] [i_0] [i_1] [i_0] [i_0] [i_18] [i_18])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)255)) - (241))))));
                        arr_74 [i_0] [16ULL] [i_18] = ((/* implicit */int) arr_19 [i_18] [i_0] [i_0] [i_1] [i_0]);
                        arr_75 [i_0] [i_0] [i_0] [i_0] [i_0] [19LL] = ((/* implicit */unsigned char) (unsigned short)38003);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 2) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 25; i_20 += 3) 
                        {
                            {
                                var_36 *= ((/* implicit */_Bool) 8796093021184LL);
                                arr_83 [i_0] = ((int) max((((/* implicit */unsigned long long int) ((signed char) -9107881905706653366LL))), (3644284795710840720ULL)));
                                var_37 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -196019632)) ? (14802459277998710875ULL) : (((/* implicit */unsigned long long int) 8796093021184LL)))) << (((196019643) - (196019638)))));
                                arr_84 [i_0] [i_0] [i_4] [i_19] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -8796093021185LL))));
                            }
                        } 
                    } 
                }
                for (short i_21 = 0; i_21 < 25; i_21 += 1) 
                {
                    arr_89 [12U] [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))));
                    arr_90 [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_65 [i_0] [(unsigned char)12] [i_0] [i_1] [i_1] [i_21] [i_0]));
                    arr_91 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_60 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_60 [i_0] [i_0] [i_0] [i_21] [i_21])))) ? (((/* implicit */int) arr_60 [i_0] [i_1] [i_0] [i_1] [i_0])) : (((((/* implicit */int) arr_60 [i_0] [i_1] [i_0] [i_1] [i_1])) << (((((/* implicit */int) arr_60 [i_0] [i_0] [i_0] [i_1] [i_21])) - (6539)))))));
                }
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned long long int) ((_Bool) ((((var_10) || (((/* implicit */_Bool) (unsigned short)0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 21U)) ? (var_17) : (((/* implicit */unsigned int) var_7))))))));
}
