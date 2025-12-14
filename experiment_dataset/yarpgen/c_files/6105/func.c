/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6105
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(var_8))))));
    var_17 = ((/* implicit */unsigned long long int) ((signed char) var_15));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) arr_6 [i_0]);
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_2 [(short)12] [(signed char)17])) / (((/* implicit */int) arr_0 [i_1]))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [16LL]))))) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (short)19320)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((-7306989825808318475LL) | (((/* implicit */long long int) ((/* implicit */int) var_0)))))) || (((/* implicit */_Bool) ((-7306989825808318475LL) % (arr_5 [i_0] [i_0])))))))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (((min((((/* implicit */unsigned int) arr_3 [i_2 - 2])), (var_3))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_6))))))))))));
                    var_21 = ((/* implicit */long long int) (+((-(((/* implicit */int) max(((unsigned short)4), (var_2))))))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_5 [i_1 - 1] [i_2 - 1]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) (-(3392513868U)));
        var_24 = ((/* implicit */unsigned short) ((unsigned long long int) arr_2 [i_3] [i_3]));
    }
}
