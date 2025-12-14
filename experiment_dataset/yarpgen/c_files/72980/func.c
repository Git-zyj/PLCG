/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72980
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
    var_18 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)37127))));
    var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)26423)) ? (((/* implicit */int) (unsigned short)31274)) : (((/* implicit */int) var_3)))), (((/* implicit */int) min((var_4), ((_Bool)0))))))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) >= ((~(((/* implicit */int) var_2))))))) : ((-(var_7)))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_20 &= ((/* implicit */unsigned short) 126976);
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0 - 1] [i_0 + 1]))) : (min((((/* implicit */int) arr_2 [i_1] [i_1])), ((+(((/* implicit */int) arr_4 [i_0]))))))));
            arr_7 [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-18824)) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)34261)))) : (((((/* implicit */_Bool) (unsigned short)31274)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_1] [i_0])))))) ^ ((((((-2147483647 - 1)) & (((/* implicit */int) var_15)))) % ((-(var_6)))))));
            var_22 |= ((/* implicit */_Bool) (unsigned short)34264);
        }
        var_23 = ((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0 - 1]);
        var_24 ^= ((/* implicit */unsigned int) (unsigned short)0);
    }
}
