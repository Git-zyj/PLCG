/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96749
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
        arr_3 [(unsigned short)12] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (arr_0 [(unsigned short)2]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1152673324)) % (max((((/* implicit */long long int) (_Bool)1)), (-1032873315669970669LL))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
    }
    var_15 = ((/* implicit */long long int) (((((-(var_11))) >> (((((/* implicit */int) var_1)) - (66))))) << (((((((/* implicit */long long int) ((/* implicit */int) var_7))) % (min((((/* implicit */long long int) (_Bool)1)), (-8106506920794356706LL))))) - (73LL)))));
}
