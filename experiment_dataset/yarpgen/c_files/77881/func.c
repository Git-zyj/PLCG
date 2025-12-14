/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77881
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((1251736191428843295ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-84))) | (var_11)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_5 [11ULL] [i_1] [i_0]), (((/* implicit */unsigned short) (signed char)0))))) && (((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) 3760537230U)))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((((var_11) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1 - 2]))))), (arr_12 [i_0] [i_1] [i_1] [i_4] [i_4] [i_4])));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (short)2040)) * (((((/* implicit */int) var_13)) * (((/* implicit */int) (_Bool)0))))))) | ((~(min((arr_3 [(unsigned char)3]), (((/* implicit */long long int) var_12)))))))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [(unsigned short)14] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) <= (((((/* implicit */_Bool) arr_12 [i_1 - 2] [i_1 + 3] [(unsigned char)8] [14] [i_1 - 2] [i_1 - 2])) ? (min((1792491721U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_4 [i_1]))))))));
                    var_18 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (~(arr_2 [i_1])))) || (((/* implicit */_Bool) ((short) var_6))))) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_2]))));
                    var_19 |= ((/* implicit */unsigned long long int) var_3);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (653405637486204064ULL) : (((/* implicit */unsigned long long int) var_8))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (2502475574U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2024))))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))))))));
}
