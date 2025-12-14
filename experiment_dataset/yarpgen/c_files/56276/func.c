/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56276
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [(unsigned short)12] = ((/* implicit */unsigned long long int) arr_6 [(unsigned short)0] [i_1]);
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (unsigned short)40951))))) && (((/* implicit */_Bool) min((arr_2 [i_0]), (arr_1 [i_0]))))));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (6937580751139461626LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32136))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1039934832)) || (((/* implicit */_Bool) 6467276700175617020ULL))))))))) ? (var_11) : (max((((/* implicit */unsigned int) (~(1039934840)))), (var_3)))));
}
