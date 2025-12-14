/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89285
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
        var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [0U])) ? (((/* implicit */int) (((-(arr_0 [i_0] [i_0]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32)))))) : (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_1 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) arr_2 [i_0])))))));
    }
    var_11 = ((/* implicit */long long int) ((var_5) * (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (signed char)-29))))) % (min((var_1), (1907650238))))))));
    var_12 = ((/* implicit */unsigned int) var_3);
    var_13 = ((/* implicit */signed char) ((((((var_5) >> (((var_5) - (3320219422U))))) + (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)114)) / (548685407)))))) % (((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) + (255456258))) ^ ((+(((/* implicit */int) (unsigned short)16585)))))))));
}
