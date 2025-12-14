/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65568
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0 + 3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -6475791052664851792LL)) ? (-6475791052664851774LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
        var_11 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) - (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((var_0) / (-6475791052664851792LL))))))));
    }
    var_12 = (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) ^ (458517709U))));
}
