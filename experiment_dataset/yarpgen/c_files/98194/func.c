/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98194
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 43898587U)) ? (4133032042U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108)))))) ^ (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_6)));
        arr_4 [i_0] = ((/* implicit */short) arr_1 [i_0 + 1]);
    }
    var_15 = 4120008082562798661LL;
}
