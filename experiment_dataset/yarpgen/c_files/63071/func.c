/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63071
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) ((_Bool) arr_5 [(unsigned short)1] [i_0 + 1] [i_0] [i_2]));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_14 [i_0] [8LL] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                                var_12 = ((/* implicit */unsigned long long int) ((short) var_4));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (var_0)))) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (signed char)30))))))), ((+((~(((/* implicit */int) arr_13 [i_0]))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_14 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)20))) / (arr_11 [(_Bool)1] [i_0 + 1]));
                        var_15 = ((/* implicit */unsigned char) ((arr_7 [i_0] [i_0] [i_0 + 1]) % (((/* implicit */int) (signed char)-43))));
                        var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1]))) : (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_12 [i_0 + 1] [i_0] [i_1] [i_1] [(_Bool)0] [(signed char)4] [i_5])))));
                        arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (signed char)19)))))) : (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */unsigned long long int) var_2)) : (var_4)))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) ((unsigned short) max((((long long int) var_5)), (((/* implicit */long long int) ((unsigned int) (short)(-32767 - 1)))))));
                        arr_22 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) max(((signed char)-40), ((signed char)21))))))) > (min((((/* implicit */long long int) arr_13 [i_0])), (arr_11 [i_0 + 1] [i_1])))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 1; i_7 < 13; i_7 += 4) 
                        {
                            arr_26 [i_0 + 1] [i_7 + 1] [i_2] [i_6] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((short)0), (((/* implicit */short) arr_8 [i_0])))))))), (((((/* implicit */_Bool) max(((signed char)-60), ((signed char)35)))) ? (((/* implicit */unsigned long long int) min((0LL), (((/* implicit */long long int) arr_16 [13ULL] [i_7 + 3] [i_0]))))) : (((16750095341027490514ULL) | (var_7)))))));
                            var_18 = ((/* implicit */unsigned long long int) ((unsigned short) arr_18 [i_0] [i_1] [i_2] [i_7]));
                        }
                        for (unsigned char i_8 = 1; i_8 < 12; i_8 += 3) 
                        {
                            var_19 += ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                            var_20 -= ((/* implicit */long long int) min((((unsigned long long int) 9764479588666928127ULL)), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)239))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)60)) != (((/* implicit */int) arr_1 [i_6])))))) : (arr_6 [i_6])))));
                            arr_29 [i_0] [i_1] [i_2] [i_6] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) arr_24 [10U] [i_8] [i_8 + 1] [i_8 + 2] [i_8] [i_8] [i_8 + 1]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)110)))))))));
                        }
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            arr_34 [i_0] [(unsigned short)9] [i_2] [i_6] [i_0] = ((/* implicit */long long int) ((((unsigned int) ((unsigned char) var_2))) | (((/* implicit */unsigned int) max((1286909971), (-1286909965))))));
                            arr_35 [i_0] [i_1] [15ULL] [i_0] = ((/* implicit */int) ((_Bool) ((unsigned short) ((_Bool) (unsigned char)243))));
                            var_21 = ((/* implicit */short) (signed char)51);
                        }
                        var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned short) min(((signed char)33), (max(((signed char)-21), (((/* implicit */signed char) (_Bool)1))))))), ((unsigned short)41778)));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)30)) ? (14884066344059318308ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)55)))));
                            var_24 |= ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_40 [i_0] [i_1] [i_2] [i_2] [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_37 [i_11] [i_10] [i_2] [i_1])) : (1696648732682061093ULL))), (((/* implicit */unsigned long long int) ((int) 11509945030207177663ULL))))) >> (((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_8 [1])), (min((((((/* implicit */unsigned long long int) var_3)) & (var_7))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */signed char) arr_30 [i_0] [i_2])))))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            var_26 ^= ((unsigned int) max((arr_33 [i_10] [i_1] [i_2] [i_10] [i_12] [i_10] [i_0 + 1]), (min(((signed char)-34), (((/* implicit */signed char) (_Bool)0))))));
                            arr_46 [i_2] [i_1] |= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) var_1))))), (min((var_7), (((/* implicit */unsigned long long int) (unsigned short)41963)))))), (var_4)));
                        }
                        var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 14884066344059318327ULL))) || (((/* implicit */_Bool) (~(arr_24 [4] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))))))), (min((0U), (((/* implicit */unsigned int) ((unsigned char) arr_13 [i_0])))))));
                    }
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_1]))));
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((1286909964) >= (((/* implicit */int) (unsigned short)23572)))))));
                    }
                }
            } 
        } 
    } 
    var_30 |= ((unsigned short) max((((/* implicit */unsigned long long int) ((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (max((var_4), (((/* implicit */unsigned long long int) var_8))))));
    var_31 = ((/* implicit */unsigned short) var_5);
}
