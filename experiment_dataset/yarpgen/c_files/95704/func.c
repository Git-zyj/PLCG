/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95704
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */unsigned short) min((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
        var_16 *= ((/* implicit */long long int) ((max((((/* implicit */int) arr_3 [i_0])), ((~(((/* implicit */int) (unsigned short)33052)))))) & (((int) var_13))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (var_5)));
        var_18 = ((/* implicit */unsigned short) (+((~(((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        arr_15 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-16384))))) ? (max((var_6), (((/* implicit */int) (unsigned short)12542)))) : (((/* implicit */int) arr_7 [i_2] [i_3])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_5)))))))));
                        var_19 = ((((/* implicit */int) ((unsigned short) var_7))) + (((((/* implicit */_Bool) 1849508428956226717ULL)) ? (-1236830034) : (((/* implicit */int) (unsigned short)33052)))));
                    }
                    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) 78918855185923604ULL)) ? (((/* implicit */int) (unsigned short)33055)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) (short)-16384)))))) <= (((var_4) + (((/* implicit */long long int) arr_4 [(unsigned short)13] [i_3]))))));
                }
            } 
        } 
        var_21 += ((/* implicit */long long int) ((((/* implicit */int) ((2001119604) != (var_6)))) | (max((arr_4 [i_1] [i_1]), (((/* implicit */int) (signed char)-54))))));
        var_22 += ((/* implicit */short) ((((((/* implicit */int) arr_9 [(signed char)13] [i_1] [i_1] [14LL])) >> (((/* implicit */int) ((unsigned char) 281474968322048ULL))))) + (((/* implicit */int) var_12))));
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) var_3)), (max((var_9), ((short)7)))))) ? ((+(max((((/* implicit */unsigned long long int) (short)12038)), (var_11))))) : (var_11)));
    var_24 = ((/* implicit */short) ((signed char) (+(min((6), (((/* implicit */int) var_8)))))));
}
