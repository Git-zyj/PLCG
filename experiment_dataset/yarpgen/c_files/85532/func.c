/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85532
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
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */int) var_10);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (var_15))), (((/* implicit */int) var_16))))) ? (min((min((4888525758540549263ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_19)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) (short)-19782)) : (((/* implicit */int) (short)19782)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) / (var_11)))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31796)) ? (var_6) : (((/* implicit */int) (unsigned char)15))))), (var_18))) : (((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned char)22)))), (((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)49)))))))));
    var_22 = ((/* implicit */signed char) var_9);
}
