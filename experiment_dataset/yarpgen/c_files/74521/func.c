/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74521
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            arr_12 [(short)0] [3ULL] [i_2] [i_3] [9U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_16))));
                        }
                        for (long long int i_5 = 1; i_5 < 16; i_5 += 3) 
                        {
                            var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (var_8)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_2)) : (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))));
                            var_19 = ((/* implicit */int) var_4);
                            arr_18 [i_2] [i_2] [i_2] [13U] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            arr_19 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (var_9)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))));
                        }
                        arr_20 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9)))));
                        var_20 = (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_10)) : (var_2)))) ? (((((/* implicit */_Bool) -5370755695698640308LL)) ? (((/* implicit */int) (_Bool)1)) : (var_3))) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */int) var_13))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) var_7);
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_15)), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_2)) : (var_8))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (var_0)))) ? ((~(((/* implicit */int) var_4)))) : ((~(var_10)))))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (var_1)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_3)))) : ((~(var_9)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_8 = 1; i_8 < 11; i_8 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? (min((var_12), (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) (unsigned char)3)) ? (var_0) : (((/* implicit */int) (_Bool)1))))))));
        arr_27 [i_8] = (-((~(((((/* implicit */_Bool) var_10)) ? (var_9) : (var_14))))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-17626)) : (((/* implicit */int) (signed char)74))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74))) : (4602678819172646912ULL)));
            arr_32 [i_8] [i_9] [7] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (var_0))))) : ((-(((/* implicit */int) min((var_15), (var_16))))))));
        }
    }
    /* LoopNest 3 */
    for (signed char i_10 = 2; i_10 < 8; i_10 += 2) 
    {
        for (short i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 4) 
            {
                {
                    arr_41 [i_10] [i_10] [i_10 - 2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) var_10))))) ? (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) var_0)))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) var_12))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))) ? (max((var_14), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15)))))))));
                    var_26 = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_12)) : (var_14))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (var_1)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (var_12))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))))))));
                }
            } 
        } 
    } 
}
