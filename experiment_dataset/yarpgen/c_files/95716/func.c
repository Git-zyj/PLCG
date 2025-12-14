/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95716
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -7756727227949740461LL)) ? (15738109013828153766ULL) : (((/* implicit */unsigned long long int) -1844163774))));
    }
    var_18 = ((/* implicit */unsigned short) 15738109013828153766ULL);
    var_19 = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1986175292651189380LL)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1456076247)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_14)))) ? (((((/* implicit */_Bool) 1136861454)) ? (((/* implicit */long long int) -1844163774)) : (var_13))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_8))))))));
}
