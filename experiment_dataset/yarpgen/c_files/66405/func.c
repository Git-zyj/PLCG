/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66405
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_1)))))) - (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) | (31LL)))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) 127ULL);
                    }
                    arr_13 [15LL] [i_2] [i_2] [15LL] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (var_6))), (((15041654704088736141ULL) % (18446744073709551615ULL)))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_20 [i_5] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)-30)), (var_12)));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (-(1U)))) ? ((-(((/* implicit */int) ((short) 6U))))) : (((/* implicit */int) (_Bool)1)))))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) 438929178)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3163997833U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 3) 
    {
        var_23 ^= ((/* implicit */unsigned long long int) (+((-(1909908898U)))));
        arr_25 [i_6] = ((/* implicit */unsigned char) ((signed char) ((short) 3401081034U)));
        /* LoopSeq 1 */
        for (short i_7 = 4; i_7 < 24; i_7 += 1) 
        {
            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(3039351134U))))));
            arr_30 [i_7] [i_7] = ((/* implicit */short) var_17);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                arr_34 [i_6] [i_8] [i_8] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned short)65535))));
                var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)15062))));
                arr_35 [i_7] [i_6] [i_7 - 1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46660)) ? (var_3) : (10971179617446617105ULL)));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (12919901789237153312ULL) : (((/* implicit */unsigned long long int) 1U))));
            }
        }
    }
}
