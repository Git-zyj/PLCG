/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8346
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 994621142U)) ? (((((/* implicit */int) var_18)) & (((/* implicit */int) ((var_12) == (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))) : (((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) max((((/* implicit */unsigned short) var_19)), ((unsigned short)19036)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) ^ (2042719380833747398ULL)))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0])))))))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned char) ((long long int) (~(((2905709491U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_3]))))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        {
                            arr_14 [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_4] [i_5])) ? (((/* implicit */int) arr_2 [i_3 - 1] [i_5])) : (((/* implicit */int) var_4))))));
                            var_24 = ((/* implicit */unsigned char) (+(arr_11 [i_2])));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) min((((((/* implicit */_Bool) 3768143199U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_3 + 2]))) : (16322897983311446217ULL))), (((/* implicit */unsigned long long int) arr_1 [i_2 - 1])))))));
                            var_26 = ((/* implicit */long long int) (unsigned short)18022);
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) max((var_7), (((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_15))) <= (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_9)))))))));
}
