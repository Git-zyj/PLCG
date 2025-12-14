/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81362
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
    var_10 = ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)57800)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3005293639026017588LL)))))));
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((-1395241716) + (2147483647))) << (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
