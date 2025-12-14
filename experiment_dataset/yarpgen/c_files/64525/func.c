/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64525
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 -= ((/* implicit */unsigned char) max((((((/* implicit */int) arr_7 [i_0] [i_0] [i_1])) & ((~(((/* implicit */int) (unsigned short)36528)))))), (((/* implicit */int) (unsigned short)65535))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 12199875399184356413ULL)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65526), (((/* implicit */unsigned short) ((_Bool) -1821509334))))))) : ((((!(arr_1 [i_0]))) ? (min((-5619195026364886823LL), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) arr_4 [i_0] [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (5619195026364886824LL))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)11)) != (((/* implicit */int) (unsigned short)65534))));
}
