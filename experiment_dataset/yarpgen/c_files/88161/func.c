/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88161
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
    for (short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((int) ((long long int) var_2)));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((unsigned char) ((unsigned char) 5133433872539319074ULL))))));
                    arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 1])) % (((/* implicit */int) arr_0 [i_0 + 1])))))));
                    var_15 = (_Bool)1;
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((3840984046U) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1278022578U)) ? (((((/* implicit */int) var_0)) - (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (_Bool)1)))))));
                                var_17 = ((/* implicit */long long int) ((unsigned int) arr_10 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0]));
                                arr_12 [(short)11] [i_1] [i_2] [21ULL] [i_2] |= ((/* implicit */unsigned char) arr_11 [i_1] [i_1 - 2] [i_0] [i_0 - 1] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned int i_5 = 3; i_5 < 21; i_5 += 1) 
    {
        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 4; i_7 < 18; i_7 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) 2136445585U);
                    arr_21 [i_5] [i_7] = ((/* implicit */unsigned char) arr_0 [i_5]);
                }
            } 
        } 
    } 
}
