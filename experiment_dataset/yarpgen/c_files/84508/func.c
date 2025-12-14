/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84508
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned char) (_Bool)1);
                    var_20 |= ((/* implicit */unsigned short) ((unsigned char) (~(-967671042))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 2) 
    {
        var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) 1023)) ? (((((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_8))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [4LL]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3])) || (((/* implicit */_Bool) max((arr_7 [i_3 - 2]), (((/* implicit */int) var_18)))))))))));
        var_22 = ((/* implicit */signed char) (unsigned char)104);
        var_23 = ((/* implicit */signed char) 2047U);
    }
}
