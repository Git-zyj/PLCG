/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73350
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 7; i_2 += 4) 
            {
                {
                    var_16 *= ((/* implicit */unsigned char) 137438953471LL);
                    arr_10 [(signed char)0] [i_2] [i_1] [(signed char)0] = ((/* implicit */long long int) ((((_Bool) (~(1048575)))) ? (max((((/* implicit */unsigned long long int) max((arr_2 [(short)3] [i_2]), (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-114)) <= (((/* implicit */int) (signed char)113))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) : (var_4)))) ? (min((var_11), (((/* implicit */int) var_1)))) : (((((/* implicit */int) (short)-29377)) % (((/* implicit */int) var_6))))))), (var_10)));
}
