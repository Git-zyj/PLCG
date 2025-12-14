/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56088
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((unsigned short) (~(var_11))));
        var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1853971007)) ? (1028229880U) : (1028229880U))), ((+(3266737413U)))));
        var_15 = ((/* implicit */_Bool) min((max((3266737415U), (((/* implicit */unsigned int) var_7)))), ((((-(3266737409U))) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3266737400U)))))));
    }
    var_16 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((((long long int) var_2)) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))))))));
}
