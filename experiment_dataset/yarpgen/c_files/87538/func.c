/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87538
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4))))) : (var_12)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(_Bool)1] [(_Bool)1] &= (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [(unsigned short)16] [i_1] [(unsigned short)16]))))));
                arr_6 [10LL] [(_Bool)1] &= ((/* implicit */_Bool) ((unsigned char) ((var_2) ? (((((/* implicit */_Bool) -7910463231346969738LL)) ? (-1628295860695239928LL) : (((/* implicit */long long int) 3778808338U)))) : (((long long int) arr_1 [i_0] [i_1])))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(arr_3 [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((/* implicit */int) var_1))))) : ((~(arr_0 [i_0] [i_1])))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((var_0) == (((/* implicit */long long int) var_6)))))));
            }
        } 
    } 
}
