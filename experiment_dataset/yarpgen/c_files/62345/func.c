/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62345
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) arr_6 [(signed char)2] [i_1] [i_0])) : (var_0))) - ((+(((/* implicit */int) arr_6 [i_1] [i_1] [i_0]))))))) / ((-(178504107468547471LL)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] = (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))))));
                            var_13 = ((/* implicit */long long int) ((((/* implicit */long long int) 1823433711)) != (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)9]))) : ((+(7571326379595523096LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)44)) + (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 0)))))));
    var_15 = ((/* implicit */unsigned short) var_8);
}
