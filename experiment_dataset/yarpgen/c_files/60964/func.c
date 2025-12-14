/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60964
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_0 [i_0])) - (68)))))) || (((/* implicit */_Bool) arr_2 [i_0] [20LL]))));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) -2330798610331217574LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) ((unsigned char) 2330798610331217574LL))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) == (((/* implicit */int) var_11)))))) | (var_9))));
        var_16 = ((/* implicit */_Bool) min((var_16), (arr_4 [14LL])));
    }
    var_17 = ((/* implicit */_Bool) var_4);
    var_18 = ((/* implicit */unsigned char) min((((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((_Bool) (+(((/* implicit */int) var_4)))))));
    var_19 = ((/* implicit */short) var_6);
}
