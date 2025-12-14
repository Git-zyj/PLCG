/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90362
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 3] [i_2 + 1]))) : (var_12))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((2490203535620227726ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9016))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)9016)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_19 = min((var_12), (((/* implicit */unsigned long long int) (!((_Bool)1)))));
                                var_20 ^= ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (short)-9016)), (arr_3 [i_1 + 2] [i_2 - 2])))));
                                var_21 -= ((/* implicit */long long int) var_6);
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9860500154272002251ULL)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)61477))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_11 [i_2 + 1] [i_1] [i_0] [i_1] [i_0] [i_0]))))) ? (((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1 + 2] [i_2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7948648747667653007ULL)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1])) - (55820))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) -1273405066)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)));
                                var_23 = (i_2 % 2 == 0) ? (((/* implicit */unsigned int) ((((((arr_13 [i_1] [i_2] [i_5] [i_6]) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6] [i_1] [i_1] [i_0]))))))) & (((/* implicit */long long int) ((((((((/* implicit */_Bool) 9860500154272002251ULL)) ? (var_2) : (((/* implicit */int) var_3)))) + (2147483647))) << (((((((/* implicit */_Bool) var_17)) ? (var_7) : (((/* implicit */long long int) arr_3 [i_2] [i_2])))) + (5081656908026054126LL))))))))) : (((/* implicit */unsigned int) ((((((((arr_13 [i_1] [i_2] [i_5] [i_6]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6] [i_1] [i_1] [i_0]))))))) & (((/* implicit */long long int) ((((((((/* implicit */_Bool) 9860500154272002251ULL)) ? (var_2) : (((/* implicit */int) var_3)))) + (2147483647))) << (((((((/* implicit */_Bool) var_17)) ? (var_7) : (((/* implicit */long long int) arr_3 [i_2] [i_2])))) + (5081656908026054126LL)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9860500154272002251ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (unsigned char)119))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)23)), ((short)9003))))))) : (((/* implicit */unsigned int) (+(var_2))))));
}
