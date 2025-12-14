/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73766
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
    var_11 = ((((var_9) | (var_2))) ^ (((/* implicit */int) var_10)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((-3000619874990144411LL) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))) - (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46)))))) / (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) var_7)))))));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) 2251797666201600ULL)))))) > (((3000619874990144432LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-30838)))))));
                var_14 = ((/* implicit */int) ((((((/* implicit */long long int) 2313619005U)) / (arr_2 [i_0] [i_1] [i_1]))) * (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) / (var_9))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        arr_9 [(signed char)9] [i_2 - 1] = ((arr_7 [i_2 - 1]) << (((var_1) - (696291346425488003LL))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) ((((-4453118743383284348LL) + (9223372036854775807LL))) << (((var_0) - (881089783)))));
                    var_17 = ((/* implicit */unsigned int) ((3000619874990144432LL) + (((3000619874990144432LL) + (((/* implicit */long long int) var_9))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 8; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_21 [i_3] [i_5] [i_2 - 1] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (short)-12037)) <= (((/* implicit */int) (short)-15027))));
                                var_18 = ((/* implicit */unsigned int) ((arr_7 [i_2 - 1]) | (((/* implicit */unsigned long long int) 784980348))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_4] [i_3 + 1]))));
                                var_20 = ((/* implicit */short) ((2313619005U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26279)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
