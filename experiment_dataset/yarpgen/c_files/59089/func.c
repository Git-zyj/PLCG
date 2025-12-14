/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59089
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */int) (+(max((0LL), (((/* implicit */long long int) 3630050757U))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)242)), (arr_1 [i_0])))) ? (min((((((/* implicit */unsigned long long int) 0LL)) * (3487089735178066191ULL))), ((~(15758254595779477146ULL))))) : (((/* implicit */unsigned long long int) (~(var_3))))));
        var_18 *= ((/* implicit */int) ((((var_7) - (((/* implicit */unsigned long long int) var_10)))) == ((~(8160421277376710420ULL)))));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_0)) & (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)231)), (2329902109U)))) + (min((var_11), (((/* implicit */unsigned long long int) var_3))))))));
    var_20 = (~(var_1));
}
