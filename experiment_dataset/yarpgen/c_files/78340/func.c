/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78340
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
    var_17 = ((/* implicit */signed char) (~(min((((/* implicit */long long int) (!((_Bool)1)))), (max((var_7), (var_9)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */unsigned long long int) -2449492099315885231LL)) : (13477709033665569296ULL)));
                    var_19 = ((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1]);
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1788561639)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (4294967281U)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (_Bool)1))))));
}
