/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9148
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
    var_19 ^= ((/* implicit */short) max((((var_9) / (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) >> (((((var_13) >> (((((/* implicit */int) var_17)) + (21511))))) - (100902))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (unsigned char)147))) / (((/* implicit */int) var_1))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */int) ((short) arr_4 [i_0 + 1] [i_0]))), ((+(arr_4 [i_0 - 3] [i_0]))))))));
                    var_21 ^= ((/* implicit */short) ((((/* implicit */int) ((short) min((arr_4 [i_0] [i_0]), (((/* implicit */int) var_16)))))) | (((((/* implicit */_Bool) ((var_7) & (((/* implicit */int) (unsigned char)106))))) ? (((arr_0 [(short)4]) >> (((arr_4 [i_0] [i_0]) + (256174838))))) : (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            {
                arr_14 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3 + 2] [i_3 + 2])) ? (((var_9) - (((/* implicit */unsigned long long int) 2147483647)))) : (((((((/* implicit */_Bool) arr_6 [12ULL] [i_4] [i_4] [14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) : (var_6))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32738)))))));
                var_23 *= ((/* implicit */short) max((arr_3 [i_3]), (((/* implicit */unsigned long long int) (short)-32760))));
            }
        } 
    } 
}
