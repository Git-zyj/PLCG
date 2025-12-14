/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86189
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-9)) >= (((/* implicit */int) (unsigned short)7680))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_14 [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_9 [i_1 - 2])));
                        arr_15 [i_2] [i_0] = ((((/* implicit */_Bool) (unsigned short)2058)) ? (-772000950) : (((/* implicit */int) var_1)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_10 = arr_8 [i_2] [i_2 - 2] [i_0] [i_2];
                            var_11 = ((/* implicit */unsigned int) arr_10 [i_1] [i_0] [i_2] [i_4] [i_1 + 1]);
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_0] = ((unsigned short) arr_1 [i_0]);
                            arr_23 [i_0] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */short) (+(var_7)));
                        }
                        for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_12 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] [i_6])), (((unsigned long long int) ((unsigned char) (signed char)8)))));
                            arr_26 [i_0] [i_1] [i_6] [i_4] [i_0] = ((/* implicit */long long int) 511);
                            var_13 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 60404011)) && (((/* implicit */_Bool) arr_3 [i_1]))))), (536866816U)));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 1; i_7 < 21; i_7 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (unsigned short)2043)))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_2 - 3] [i_7] [i_7] [i_7] [i_0])) >= (((/* implicit */int) arr_29 [i_2 + 2] [i_7] [i_7] [i_7] [i_0]))));
                        }
                        var_16 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -840063255)) ? (var_6) : (((/* implicit */unsigned long long int) 1792))))))) ? ((~(arr_27 [i_0] [i_1 - 1]))) : ((-((-(1792)))))));
                        var_17 = ((/* implicit */unsigned short) (~(min(((+(((/* implicit */int) (signed char)127)))), (((/* implicit */int) (!(((/* implicit */_Bool) 1769)))))))));
                    }
                    var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) var_9)), ((((~(((/* implicit */int) (unsigned short)63475)))) % (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_19 = ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) || (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)63)) && (((/* implicit */_Bool) var_7))))) < ((~(-1809))))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0])) ? ((-(((/* implicit */int) (unsigned short)23445)))) : (((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127))))) * (max((var_0), (((/* implicit */unsigned int) (short)-5103))))))) : (min((((/* implicit */long long int) arr_8 [i_9] [i_8 + 1] [i_0] [i_9 - 1])), (arr_30 [i_0] [i_8] [i_9])))));
                    var_21 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) arr_29 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_0]))));
                    var_22 ^= (+(((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)85)) - (61))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) <= (var_6)))))));
                    var_23 ^= ((/* implicit */int) ((short) (signed char)-9));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 3; i_10 < 19; i_10 += 1) 
                    {
                        var_24 ^= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) ((_Bool) arr_32 [i_10] [i_8] [i_9] [i_8]))) >> (((/* implicit */int) ((-1818) <= (((/* implicit */int) (unsigned short)2083))))))));
                        /* LoopSeq 1 */
                        for (short i_11 = 1; i_11 < 20; i_11 += 2) 
                        {
                            var_25 |= -962217175;
                            arr_44 [i_11] [i_0] [i_0] = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (min((12757416496388324294ULL), (13002877841318974856ULL)))))));
                        }
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
    }
    var_27 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)31)) >= (((/* implicit */int) (_Bool)1)))))) != (var_6))))));
    /* LoopNest 2 */
    for (signed char i_12 = 2; i_12 < 19; i_12 += 2) 
    {
        for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 2) 
        {
            {
                var_28 -= (~(((/* implicit */int) arr_17 [i_12] [i_12] [i_12] [i_13])));
                var_29 ^= ((/* implicit */short) min((((/* implicit */long long int) (-(((/* implicit */int) var_4))))), (max((arr_30 [i_13 - 1] [i_12 - 2] [i_12]), (524287LL)))));
            }
        } 
    } 
    var_30 = var_7;
}
