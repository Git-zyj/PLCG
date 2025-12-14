/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92126
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
    var_17 = ((/* implicit */unsigned char) var_5);
    var_18 = ((/* implicit */long long int) ((int) ((((1355137554) / (((/* implicit */int) var_8)))) != (((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((arr_4 [i_0] [i_1 + 1]) / (((/* implicit */int) (unsigned char)255)))), (arr_4 [i_0] [i_1 + 2])))) * (((((/* implicit */_Bool) (unsigned char)1)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((int) ((((/* implicit */_Bool) (unsigned char)1)) || (((/* implicit */_Bool) -26746837))))) == (((/* implicit */int) max((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) && (((/* implicit */_Bool) (unsigned short)0)))), ((!(((/* implicit */_Bool) 4492940066886643783ULL))))))))))));
            }
        } 
    } 
}
