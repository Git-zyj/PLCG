/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6115
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
    var_16 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9)))) - (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) (unsigned short)31325)) : (((/* implicit */int) var_11))))) : (((var_14) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] &= ((/* implicit */unsigned char) arr_0 [i_1] [i_1]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) arr_2 [i_0 + 1])) % (((/* implicit */int) (unsigned short)34210)))))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned short) var_11)))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_15) ? (arr_5 [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34210)))))) ? (((/* implicit */int) arr_13 [i_2] [i_3])) : (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 |= (!(((/* implicit */_Bool) arr_3 [i_1] [i_5 + 1])));
                                var_23 += ((/* implicit */unsigned long long int) (_Bool)1);
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_17 [i_5] [i_2] [i_0]))));
                                var_25 ^= ((/* implicit */unsigned short) var_12);
                                var_26 *= ((/* implicit */short) ((long long int) arr_1 [i_0 - 2]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 15; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 14; i_8 += 1) 
                        {
                            {
                                arr_28 [i_1] [i_1] [i_2] [i_2] [i_7] [i_7] [i_8] &= ((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_2] [i_7] [i_8]);
                                arr_29 [i_0] [i_1] [i_1] [i_7] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_0] [i_1]))))) : (((long long int) var_5))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_9 = 4; i_9 < 14; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) max((max((arr_27 [i_11] [i_11] [i_9 - 2] [i_9 - 1] [i_9] [i_0 - 2]), (((/* implicit */unsigned long long int) ((signed char) (unsigned short)34210))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), (((short) var_0))))))))));
                                var_28 -= ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (arr_22 [i_11] [i_11])));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((short) (+((~(((/* implicit */int) (unsigned short)31325))))))))));
                }
                for (unsigned int i_12 = 4; i_12 < 16; i_12 += 1) 
                {
                    var_30 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)63)) ? (((/* implicit */int) (unsigned short)34210)) : (((/* implicit */int) (unsigned short)2509)))))));
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((-1252205980) + (((/* implicit */int) arr_35 [i_0] [i_1] [i_12] [i_12])))))));
                    var_32 |= ((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1]);
                    var_33 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0])) ? (((/* implicit */int) (unsigned short)2497)) : (((/* implicit */int) arr_25 [i_12]))))) ? (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_0])) : (arr_30 [i_0] [i_1] [i_12] [i_0])))) && (((/* implicit */_Bool) (-(-241042826))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_13 = 3; i_13 < 15; i_13 += 2) 
                    {
                        var_34 ^= ((/* implicit */int) arr_24 [i_0 - 2] [i_12 - 1]);
                        var_35 *= ((/* implicit */unsigned long long int) var_4);
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (~(arr_18 [i_13] [i_13 - 2] [i_12 - 4] [i_0 + 3] [i_0]))))));
                    }
                }
            }
        } 
    } 
    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) ((_Bool) var_5)))))) <= (min((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_14))), (((/* implicit */unsigned int) var_12)))))))));
}
