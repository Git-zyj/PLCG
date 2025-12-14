/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91656
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
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) (-(1322284651U)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) arr_5 [i_1]);
                        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (unsigned short)65535))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 4] [i_1 - 1]))) / ((~(9673569724086190079ULL))))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 2] [i_0]))) / ((~(9673569724086190079ULL)))));
                        var_21 = arr_5 [i_1];
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)44758)) ? (arr_15 [i_1 + 4] [i_0] [i_1 + 1] [i_0] [i_0 + 2]) : (((((/* implicit */_Bool) 240859901U)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523)))))));
                            var_23 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_4] [i_2])) ? (((/* implicit */unsigned long long int) -2125111305435484509LL)) : (arr_8 [i_2])))));
                            var_24 ^= (~(arr_16 [i_4] [i_2] [i_1 + 2] [i_4] [i_5] [i_1] [i_5]));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_4]))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0 + 2] [i_1 + 3] [i_1 + 3] [i_2] [i_6])) ? (((((/* implicit */_Bool) 211108475U)) ? (3458764513820540928ULL) : (((/* implicit */unsigned long long int) 206523706156429147LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52)))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 2512851332U)) && (((/* implicit */_Bool) 85769181U))))))))));
                            var_28 -= (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_5 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                            arr_19 [i_1] = ((/* implicit */int) (~(arr_12 [i_0 + 2] [i_1 + 1] [i_2] [i_2] [i_1 + 1] [i_2])));
                            var_29 = ((/* implicit */long long int) min((var_29), (arr_0 [i_0 - 1] [i_0 + 1])));
                        }
                        for (unsigned char i_7 = 2; i_7 < 24; i_7 += 1) 
                        {
                            var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_22 [i_2] [(unsigned short)12] [i_2] [(unsigned short)12] [i_2])))) ? (arr_7 [i_0 - 1] [i_0] [4ULL] [i_7 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                            var_31 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3574959466U))));
                        }
                        var_32 *= (-(arr_8 [i_2]));
                    }
                    arr_23 [i_0] [i_1 + 4] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [(unsigned char)20])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36673))) : (0U))))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(8773174349623361537ULL)))) ? (((long long int) arr_3 [i_0 + 1])) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1 + 2]))) : (-206523706156429163LL))))))));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                {
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) 4294967275U)) % (8773174349623361527ULL))) + (((/* implicit */unsigned long long int) arr_7 [i_8] [i_9] [i_10] [i_9])))) % (((/* implicit */unsigned long long int) 1669680870U)))))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            {
                                arr_38 [i_8] [i_8] [i_10] [i_8] [i_8] [i_12] [i_11] = ((/* implicit */unsigned long long int) arr_0 [i_8] [i_9]);
                                var_35 = ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)58111), (((/* implicit */unsigned short) var_14)))))))) ? (max((((/* implicit */unsigned long long int) arr_28 [i_8])), (var_10))) : (((/* implicit */unsigned long long int) max(((~(0U))), ((~(var_16)))))));
                                var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (unsigned short)47096))));
                                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) 9673569724086190078ULL))));
                            }
                        } 
                    } 
                    arr_39 [(unsigned short)5] [i_9] [9U] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_8] [i_9] [i_10] [13ULL] [i_9])) ? (((/* implicit */int) arr_30 [i_8] [i_9] [3U] [i_10])) : (((/* implicit */int) arr_11 [i_8] [i_9] [i_10] [i_9] [i_9]))))) ? (((/* implicit */unsigned long long int) ((long long int) 2972682625U))) : (((((/* implicit */_Bool) 8773174349623361531ULL)) ? (11632185109727998412ULL) : (((/* implicit */unsigned long long int) 2972682639U)))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6140157333065456613ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_8]))) : (4083858820U)))) ? (((/* implicit */int) arr_25 [i_8] [i_8])) : (((/* implicit */int) (short)32767)))))));
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 68719476672LL)) ? (((/* implicit */unsigned long long int) 0U)) : (9673569724086190078ULL)))))) && (((((/* implicit */unsigned long long int) (~(1526758876U)))) >= (max((var_10), (((/* implicit */unsigned long long int) 1322284657U))))))));
                    arr_40 [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) var_4);
                }
            } 
        } 
    } 
}
