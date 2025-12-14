/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58139
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)4383)) * (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_12)))))))));
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (short)4383)), (((((/* implicit */_Bool) 470551713)) ? (((/* implicit */long long int) 31)) : (2049236164988927774LL))))))));
    var_21 = ((/* implicit */unsigned char) var_4);
}
