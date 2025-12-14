/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72674
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
    var_16 = ((/* implicit */long long int) var_15);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_4 [(unsigned short)11] [i_0] = ((/* implicit */long long int) var_3);
        arr_5 [i_0] = 0;
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (max((-3982270829059379645LL), (((/* implicit */long long int) (signed char)99)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)29323))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-6)) : (0))))))))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        for (short i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_18 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)29323), (((/* implicit */unsigned short) var_13)))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1007759218U)) ? (-21LL) : (((/* implicit */long long int) 1007759218U))))) ? (((/* implicit */long long int) ((3287208077U) >> (((/* implicit */int) (unsigned char)28))))) : ((~(-21LL)))))));
                    arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) (((((-(((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_2))))))) + (2147483647))) << (((((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_11))))) | (((/* implicit */int) ((((/* implicit */_Bool) (signed char)76)) && (((/* implicit */_Bool) var_4))))))) - (1)))));
                }
            } 
        } 
    } 
}
