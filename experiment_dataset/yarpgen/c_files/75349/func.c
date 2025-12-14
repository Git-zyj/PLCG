/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75349
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
    var_17 = ((/* implicit */unsigned int) 19);
    var_18 = ((/* implicit */int) (unsigned char)31);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)26)))))));
                    var_20 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_5 [i_0 + 1] [12U] [i_0] [i_0 - 2])), (((long long int) arr_5 [i_0 - 3] [i_0 - 1] [i_1] [i_1]))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)5)), (((((/* implicit */_Bool) max(((unsigned char)224), ((unsigned char)5)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)0))) : (((/* implicit */int) (_Bool)1))))));
    }
}
