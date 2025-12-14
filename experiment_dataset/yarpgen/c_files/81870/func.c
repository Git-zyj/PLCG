/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81870
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
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned char) 4937508660935187528LL)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_2 + 1] [i_2 + 1]))));
                                arr_14 [i_0] [i_3] [i_4] [i_4] [i_0] [i_0] = (!(((/* implicit */_Bool) ((unsigned short) max((5012049967664547862LL), (((/* implicit */long long int) arr_4 [0] [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 7; i_6 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_6] [i_5] [i_5] [i_5] [i_1]);
                                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (var_14)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            for (short i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                {
                    arr_30 [(_Bool)0] [(_Bool)0] [i_8] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_16)) - (arr_24 [(unsigned char)0] [(unsigned char)0] [i_9 + 2]))) != (((/* implicit */int) (!(arr_26 [(short)3])))))))) < (4937508660935187536LL)));
                    var_22 = ((/* implicit */unsigned short) (-(((((((int) var_13)) + (2147483647))) << (((((/* implicit */int) ((short) (unsigned char)45))) - (45)))))));
                }
            } 
        } 
    } 
}
