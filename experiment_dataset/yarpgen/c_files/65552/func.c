/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65552
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((16327755045191555352ULL) + (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_17 = ((/* implicit */int) 15526406305907982087ULL);
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_1 [10])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 15526406305907982087ULL)) ? (((/* implicit */unsigned int) -654044309)) : (arr_0 [i_0]))))))));
        var_18 = ((/* implicit */short) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))) % ((~(((/* implicit */int) arr_5 [i_1] [i_1]))))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_7))));
    }
    var_21 = (unsigned char)230;
}
