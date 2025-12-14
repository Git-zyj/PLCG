/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68727
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
    var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)237)) <= (((/* implicit */int) (_Bool)1)))))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_7))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [(_Bool)1] [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */int) max((arr_3 [(unsigned short)2]), ((_Bool)1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_2 [i_2]) : (((/* implicit */long long int) 26U))))) ? (max(((-2147483647 - 1)), (((/* implicit */int) (signed char)-27)))) : (((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned short)54920))))))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) << (((((/* implicit */int) (unsigned char)255)) - (247)))));
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)189)) << (((/* implicit */int) var_8))));
    var_18 = ((/* implicit */short) 70368744177663ULL);
}
