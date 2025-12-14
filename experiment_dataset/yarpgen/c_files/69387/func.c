/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69387
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
    var_15 = var_10;
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2130714168U)) ? (1953152163755256190ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32512)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 481094981U)) ? (1953152163755256217ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124)))))) ? (((((((/* implicit */_Bool) 1823195856U)) ? (((/* implicit */int) arr_3 [i_0] [13U])) : (((/* implicit */int) (_Bool)1)))) ^ ((~(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] = ((signed char) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_0 [i_0]))));
    }
}
