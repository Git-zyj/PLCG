/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64792
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
    var_11 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_9)) && ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)16816), ((unsigned short)54894))))) : (((((/* implicit */_Bool) 2305843009213169664ULL)) ? (7148231950333958159ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (unsigned short)14153))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_3 [i_0] [i_1])))) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_0))))))), (((/* implicit */long long int) var_5))));
                var_12 = ((/* implicit */unsigned short) arr_0 [i_0]);
                arr_6 [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) var_6))))));
            }
        } 
    } 
}
