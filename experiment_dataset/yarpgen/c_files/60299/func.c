/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60299
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (min((((/* implicit */unsigned int) (signed char)20)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) (signed char)-20)) : (2013167027)))) ? (var_16) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -733889170)) ? (251658240) : (251658209))))))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_14);
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((var_9) ? (((/* implicit */int) var_9)) : (((var_4) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_7)))) : (((/* implicit */int) var_1)))))))));
}
