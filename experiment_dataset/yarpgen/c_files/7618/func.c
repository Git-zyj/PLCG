/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7618
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
    var_15 = ((/* implicit */_Bool) (-(var_7)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */int) var_14)) << (((6975503242499649029LL) - (6975503242499649024LL))))) ^ (((((/* implicit */int) var_2)) << (((/* implicit */int) var_1)))))) & (((((((/* implicit */int) var_12)) | (((/* implicit */int) arr_0 [i_0])))) >> (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (-7152955999703564428LL))) + (7152955999703564443LL)))))));
        arr_3 [i_0] = ((((arr_1 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) var_14))))) || (((/* implicit */_Bool) min(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) < (6975503242499649029LL))))))));
    }
}
