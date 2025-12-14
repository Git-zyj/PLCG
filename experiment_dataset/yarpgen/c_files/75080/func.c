/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75080
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_0)))) & (((/* implicit */unsigned long long int) min((3779772146998552445LL), (-3779772146998552440LL))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (3779772146998552455LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))))))));
                    var_12 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))) >= (min((4294967295U), (((/* implicit */unsigned int) (_Bool)0))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (signed char i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) (short)32765);
                var_14 &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) -7825710831229045808LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32759))));
            }
        } 
    } 
}
