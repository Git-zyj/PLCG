/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83363
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
    var_10 += ((/* implicit */unsigned long long int) var_2);
    var_11 &= ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) != (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    var_12 = ((/* implicit */signed char) (-(min(((~(-1367422482))), (((/* implicit */int) (signed char)127))))));
    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) -1648083831)), (704006424922638722ULL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0U))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [(_Bool)1] [(signed char)11])) : (((/* implicit */int) var_3)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        arr_7 [14LL] |= ((/* implicit */long long int) arr_4 [i_1] [14ULL]);
        arr_8 [0U] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17742737648786912894ULL)) ? (((/* implicit */int) (signed char)57)) : (1648083830)));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_2))));
    }
}
