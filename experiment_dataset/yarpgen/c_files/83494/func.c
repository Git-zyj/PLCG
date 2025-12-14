/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83494
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [(unsigned char)10] = ((/* implicit */long long int) min((((/* implicit */int) min(((unsigned char)25), ((unsigned char)25)))), (min((((/* implicit */int) (_Bool)1)), (arr_7 [i_3] [i_3 + 1] [i_3 - 2] [i_3] [i_3])))));
                                var_16 *= ((/* implicit */_Bool) 465231398U);
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((int) var_0)), (((/* implicit */int) (unsigned char)236))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)0)), ((short)-22704)))), (min((17496702727439579835ULL), (((/* implicit */unsigned long long int) (signed char)85))))))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned char i_6 = 2; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */signed char) var_11);
                                var_18 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)123)), (2812756701416318802ULL)));
                                arr_21 [i_1] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) min((min((((/* implicit */int) min((((/* implicit */short) (unsigned char)19)), ((short)-24030)))), (min((var_3), (((/* implicit */int) arr_14 [(unsigned char)2] [i_1] [i_1] [i_1])))))), (((/* implicit */int) ((short) max((((/* implicit */unsigned int) (unsigned short)42012)), (var_2)))))));
                                var_19 |= ((/* implicit */unsigned short) 246112132U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_4)), (4398046511103ULL)));
    var_21 = ((/* implicit */int) 246112130U);
}
