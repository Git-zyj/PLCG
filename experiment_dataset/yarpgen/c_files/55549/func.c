/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55549
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
    var_17 = ((/* implicit */unsigned int) min((min(((~(var_11))), (((/* implicit */int) var_10)))), (((/* implicit */int) ((((long long int) var_13)) < (((/* implicit */long long int) ((/* implicit */int) min((var_16), (var_15))))))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : ((+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_10 [i_0 - 2] [i_0 - 2] [i_2] [i_3] [i_4] [(signed char)20] = ((/* implicit */signed char) var_6);
                                arr_11 [i_0 - 1] [i_1] [i_2] [i_3] [i_1] [i_4] [i_4] = ((/* implicit */signed char) arr_4 [i_0 + 1]);
                            }
                        } 
                    } 
                } 
                arr_12 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */_Bool) var_13)) ? (arr_4 [i_0]) : (((/* implicit */long long int) var_9))))))) ? (((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_2))))) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
                arr_13 [i_0 - 1] = min((arr_7 [i_0 - 1] [i_0] [i_0 - 2] [i_0] [i_1] [i_1]), (arr_7 [i_0] [i_0] [i_0] [i_1] [8ULL] [i_0]));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65529)) ^ (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) == (18446744073709551615ULL)))) : (((/* implicit */int) var_15))))));
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
}
