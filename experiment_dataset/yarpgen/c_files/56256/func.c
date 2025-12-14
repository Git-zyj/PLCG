/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56256
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22187)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)255))));
    var_14 = ((/* implicit */short) (~(min((max((9015451100393931953LL), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_1))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))));
}
