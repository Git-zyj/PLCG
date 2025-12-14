/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87130
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
    var_11 = ((/* implicit */signed char) (-(max((var_9), (((int) (signed char)-99))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2 + 4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22762))) + (252201579132747776ULL)));
                    arr_10 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_2 + 4])) & (arr_5 [i_1] [i_0])));
                    var_12 = ((/* implicit */short) 252201579132747782ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_16 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (short)-32155))));
                                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2 + 3] [i_2 + 2] [i_2] [i_3 + 2] [i_4 + 2])) ? (var_7) : (var_7)));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2] [i_2] [i_4])) : (var_5)))) ? (arr_13 [14] [i_1] [i_2] [i_3] [i_4]) : (((unsigned long long int) var_10)))))));
                            }
                        } 
                    } 
                }
                var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)75)) || (((/* implicit */_Bool) 7217657846625371055ULL))))), (((((/* implicit */_Bool) min((var_5), (var_6)))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61395))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_10);
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 18194542494576803842ULL)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (short)-1)))) + (2147483647))) >> (((var_9) - (698746680))))))));
}
