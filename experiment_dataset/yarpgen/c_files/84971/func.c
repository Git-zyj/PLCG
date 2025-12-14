/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84971
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [(unsigned char)6])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))))))));
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((unsigned int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : ((+(((/* implicit */int) arr_0 [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        for (unsigned int i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) ((unsigned short) ((unsigned short) arr_2 [i_3 - 3] [i_3] [i_3 + 1])));
                var_21 = ((/* implicit */long long int) var_14);
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(var_17)))))) : (((/* implicit */int) min((var_5), (((/* implicit */short) (_Bool)0)))))));
            }
        } 
    } 
    var_23 += ((/* implicit */short) (_Bool)1);
    var_24 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)0))))))));
}
