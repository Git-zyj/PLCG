/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64663
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 10731186543801134270ULL)))))))));
                    arr_9 [i_0] [i_1] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) var_7)), (((long long int) (unsigned char)44))))));
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_19)))) ? (((unsigned int) -2702515419704599815LL)) : (((21U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 1] [i_2 - 1])))))));
                    var_21 = ((/* implicit */int) max((var_21), ((-(((int) -280546126720921651LL))))));
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((1152921504606846975LL) != (((/* implicit */long long int) 4280626205U)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (9077226502098055851LL) : (((/* implicit */long long int) -948929631))))) ^ ((-(144115188075855744ULL))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) var_14))))))));
    var_23 = ((/* implicit */unsigned int) var_18);
}
