/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82148
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((~(arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)40066))))), ((short)23242)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_13 = ((long long int) (short)23240);
                                var_14 ^= ((/* implicit */signed char) arr_7 [i_0] [i_3] [i_4]);
                                arr_14 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) > (1803755955U)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)45183)) > (1157505996))))))));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) 18446744073709551615ULL))));
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */int) (unsigned char)71);
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)20351))));
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5]))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)73))))))) : (min((((((/* implicit */_Bool) (short)10805)) ? (((/* implicit */int) (short)5235)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_0))))));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23226)) ? (((((/* implicit */_Bool) arr_5 [i_5] [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)75)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38181)))))))) ? (var_2) : (((/* implicit */long long int) var_5))));
        arr_22 [(unsigned short)4] [(short)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_18 [i_5])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_10 [i_5] [i_5])))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned short)27383)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (var_12)))) : (((/* implicit */int) ((var_2) > (((/* implicit */long long int) 1386039277U)))))))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_8] [(_Bool)1] [i_6] [i_5])) + (2147483647))) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)5258)) : (((/* implicit */int) (short)32749)))) - (5258)))))))))));
                        arr_30 [i_5] [i_5] = ((/* implicit */short) 1227602748);
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_25 [(unsigned short)13] [(unsigned short)13] [i_7] [(short)23]))));
                        arr_31 [i_8] [(signed char)11] [i_8] [i_8] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_0 [i_5] [i_6]))))));
                        var_19 = ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) arr_23 [i_8] [i_6])))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        var_20 = ((/* implicit */short) var_4);
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_32 [i_9]), (var_6)))) ? (((/* implicit */int) ((unsigned short) (unsigned char)177))) : (((/* implicit */int) (unsigned char)64)))))));
        arr_35 [i_9] &= ((/* implicit */signed char) var_2);
    }
}
