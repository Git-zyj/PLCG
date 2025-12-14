/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67373
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) ^ (arr_2 [i_0] [i_0]))) : (min((((/* implicit */unsigned long long int) -2096882508921472147LL)), (arr_2 [i_0] [i_0])))))));
        var_19 = ((signed char) ((((/* implicit */long long int) ((/* implicit */int) ((2729767291439204298ULL) == (7275943108100422707ULL))))) & (((-2096882508921472147LL) / (((/* implicit */long long int) arr_0 [i_0]))))));
        var_20 = ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0])))) && ((!(((/* implicit */_Bool) 2729767291439204298ULL)))));
    }
    var_21 = ((((/* implicit */long long int) ((((/* implicit */unsigned int) min((var_3), (var_9)))) - (var_2)))) + (var_0));
}
