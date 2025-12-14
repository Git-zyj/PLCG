/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96754
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
    var_13 *= ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1120980904792499488ULL)) && (((/* implicit */_Bool) arr_3 [(_Bool)1])))))) - ((+(var_8)))))), (((((/* implicit */_Bool) min(((short)32758), (((/* implicit */short) (unsigned char)192))))) ? (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)4]))) : (arr_3 [i_0]))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 17325763168917052127ULL)) ? (var_4) : (((/* implicit */unsigned int) arr_4 [i_0] [i_0]))))), (((((/* implicit */_Bool) -1960835666)) ? (4395899027456LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_0) < (17325763168917052120ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (arr_2 [i_0]) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) ((arr_4 [i_1] [(signed char)9]) + (((/* implicit */int) arr_1 [i_1]))))) : (((((/* implicit */_Bool) -4395899027429LL)) ? (4503599627370495LL) : (((/* implicit */long long int) -2144375578))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_14 [i_4] [i_3 + 2] [i_4] [i_4] [i_4] [i_4] [i_3 + 2])) >> (((1120980904792499488ULL) - (1120980904792499468ULL)))))));
                                var_16 = (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) ((short) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 17325763168917052128ULL)) || (((/* implicit */_Bool) (signed char)107))))) / (((/* implicit */int) min((((/* implicit */unsigned short) ((var_10) || (((/* implicit */_Bool) 9223372036854775806LL))))), (var_12))))));
    var_18 = ((/* implicit */short) ((signed char) var_6));
}
