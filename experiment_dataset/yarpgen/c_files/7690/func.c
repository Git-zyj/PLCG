/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7690
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_3 [i_1] [i_0])))));
                var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_0] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)126)) << (((/* implicit */int) ((_Bool) arr_0 [i_0] [(unsigned char)13]))))))));
                var_16 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -1)) : (var_6)))) ? (((/* implicit */unsigned long long int) -7796693146292117135LL)) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))), (((/* implicit */long long int) ((_Bool) -7796693146292117135LL)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)34273)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-7796693146292117138LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))))) || (((/* implicit */_Bool) var_6))));
}
