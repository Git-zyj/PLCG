/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76685
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
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2172502966U)) ? (18446744073709551609ULL) : (20ULL)))) ? (18446744073709551595ULL) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (4174055617244474179ULL)))) ? (min((var_4), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16)))))))));
    var_18 ^= ((/* implicit */unsigned short) min((var_0), ((!(((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))))));
    var_19 = ((/* implicit */_Bool) var_6);
    var_20 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                var_22 = ((/* implicit */unsigned char) var_5);
                var_23 = ((/* implicit */unsigned long long int) (+(max(((+(((/* implicit */int) var_9)))), (((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) var_3))))))));
                var_24 = ((/* implicit */_Bool) var_4);
            }
        } 
    } 
}
