/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73793
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) arr_4 [i_1] [i_1] [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) 8897774143357459025LL))));
                            arr_10 [i_2] [i_0] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (var_5)))) ? (((var_3) % (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(signed char)14])))))))), (max((((/* implicit */long long int) (unsigned short)48567)), (min((-5664199382815110576LL), (((/* implicit */long long int) arr_5 [i_0]))))))));
                            var_17 = ((/* implicit */signed char) arr_6 [i_0] [i_2] [i_1] [i_3]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_6 [i_1] [(signed char)0] [(signed char)0] [i_0])))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_1);
}
