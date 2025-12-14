/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87715
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) - (((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) & (15650711487350833976ULL)))));
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0])))) == (arr_0 [i_0])));
    }
    var_12 = ((/* implicit */unsigned char) var_3);
    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) (short)12918))));
}
