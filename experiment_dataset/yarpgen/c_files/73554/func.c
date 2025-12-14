/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73554
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 + 4] [i_1 + 4])) << (((((/* implicit */int) arr_0 [i_1 + 4] [i_1 + 4])) - (9512)))));
            arr_8 [i_0] [i_0] = ((arr_6 [i_1] [i_1 - 1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2] [i_1 + 1])));
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)236))))) : ((~(((/* implicit */int) (short)-16542))))));
            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)33356))))) ? (((((/* implicit */_Bool) (unsigned short)32180)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33361))) : (5994197420184772321ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((13017430211594102093ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
        }
        var_14 -= (!(((/* implicit */_Bool) (signed char)-91)));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_2 [(unsigned char)16]))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) (signed char)-43))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 1526617520)) ? (2107513532U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))));
    }
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33356)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32180))) : (8872705583717157448ULL)))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) ((2107513542U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [(_Bool)1]))))))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_17 -= ((/* implicit */unsigned short) ((unsigned char) (-((-(((/* implicit */int) var_6)))))));
            arr_16 [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) | (2187453750U)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_2] [23LL])) ? (((/* implicit */int) (unsigned short)33361)) : (((/* implicit */int) var_3)))) : ((-(var_7))))) : ((+(((/* implicit */int) arr_12 [i_2 - 1] [i_2 - 1]))))));
            arr_17 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_3])), (((unsigned int) ((var_10) || (((/* implicit */_Bool) (signed char)-100)))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 4; i_6 < 13; i_6 += 2) 
                {
                    for (unsigned short i_7 = 4; i_7 < 12; i_7 += 2) 
                    {
                        {
                            var_18 |= ((short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)18344)) : (((/* implicit */int) (_Bool)1))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                            {
                                var_19 = ((/* implicit */signed char) (-(2107513542U)));
                                arr_31 [i_5] [i_7] [i_6] [(_Bool)1] [i_5] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_11 = 3; i_11 < 14; i_11 += 1) 
                            {
                                var_20 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((arr_28 [i_11 + 1] [i_11] [11] [(_Bool)1] [i_11 - 1] [i_11]) ? (((/* implicit */int) (short)-15470)) : (((/* implicit */int) arr_28 [i_11 - 3] [i_11 - 3] [(_Bool)1] [i_11] [i_11 - 3] [(_Bool)1])))) : ((~(((/* implicit */int) var_5)))));
                                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (-1928257385) : (((/* implicit */int) (unsigned char)255))));
                            }
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~(((((((((/* implicit */_Bool) (unsigned char)208)) ? (arr_26 [i_4] [i_9]) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((((((/* implicit */int) var_8)) + (20283))) - (26))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
