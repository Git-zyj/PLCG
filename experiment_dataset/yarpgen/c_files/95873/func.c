/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95873
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
    var_18 = ((/* implicit */short) (-((((!(((/* implicit */_Bool) var_6)))) ? (min((((/* implicit */long long int) -2029604129)), (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4095LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) var_13);
                            var_20 ^= ((/* implicit */short) ((long long int) 4071LL));
                            var_21 = ((/* implicit */long long int) (+(max((((/* implicit */int) max((((/* implicit */short) arr_9 [i_0] [i_2] [i_2] [i_0])), (var_16)))), ((+(((/* implicit */int) (short)-291))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (-4088LL) : (4088LL)));
                var_22 -= ((/* implicit */_Bool) ((int) -4084LL));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
    {
        for (int i_5 = 4; i_5 < 16; i_5 += 2) 
        {
            {
                var_23 ^= ((/* implicit */_Bool) min((((arr_7 [i_4 + 1] [i_5] [i_4 - 1] [i_5]) % (arr_7 [i_4 - 1] [i_5] [i_4 - 1] [i_5]))), (max((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 33554431)))), (((/* implicit */long long int) max((var_3), (arr_15 [i_5]))))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        {
                            var_24 -= min((((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_6)))))), (min((arr_19 [i_5 + 1] [i_4 - 1]), (((((/* implicit */int) arr_17 [i_4] [i_4] [i_6])) ^ (((/* implicit */int) arr_15 [i_5])))))));
                            arr_24 [i_6] = ((var_4) >= (((/* implicit */int) ((_Bool) arr_2 [i_4 + 1]))));
                            var_25 -= ((/* implicit */_Bool) 9223372036854775807LL);
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) max((((/* implicit */long long int) ((int) -4100LL))), (((((/* implicit */_Bool) 33554431)) ? (min((var_15), (((/* implicit */long long int) arr_18 [i_4 - 1] [i_4 + 1] [i_5])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4052LL)) ? (((/* implicit */int) arr_21 [i_4] [i_4 - 1] [i_4] [i_5] [i_4])) : (((/* implicit */int) var_0)))))))));
            }
        } 
    } 
}
