/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55268
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(-978456959510905780LL)))) ? (-2682128754801598281LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)0)))))))));
        var_11 ^= ((/* implicit */signed char) max((max((((/* implicit */long long int) ((-1206495675) < (var_5)))), (((((/* implicit */_Bool) 1993406598)) ? (((/* implicit */long long int) arr_3 [i_0])) : (3021368524482765723LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) & (4503599627370495LL)))))))));
        var_12 = ((/* implicit */unsigned short) ((unsigned int) arr_2 [i_0] [i_0]));
    }
    var_13 = var_0;
}
