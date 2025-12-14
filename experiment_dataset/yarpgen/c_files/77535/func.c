/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77535
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
    var_15 ^= ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((unsigned char) arr_2 [i_0 - 3]))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2 + 1] = (+(min((min((148901188U), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((arr_7 [i_0] [i_1] [i_2] [i_4]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_0])))))))));
                                var_17 |= ((/* implicit */unsigned short) (~(((1049997531U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+((+(arr_1 [i_0])))))) >= ((-(var_0)))));
                var_18 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_13)))) ? ((+(((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0 - 3])))) : (((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_0 + 1]))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1]))))) > (((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) arr_1 [(short)18])))) ? ((+(arr_10 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_15 [i_5 + 1])), (arr_2 [i_5])))) ? (min((max((var_13), (var_11))), (((/* implicit */unsigned int) ((var_14) || (((/* implicit */_Bool) (signed char)-9))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_1 [i_5 + 2]))) - (((var_14) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned short)0)))))))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_18 [i_5 - 1] [i_5 + 2] [i_6]))));
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned int) var_0);
}
