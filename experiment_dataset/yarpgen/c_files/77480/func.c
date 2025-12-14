/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77480
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
    var_12 = ((/* implicit */signed char) var_8);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_13 -= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) & (var_5))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)0]))))))));
        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2676587562295365666ULL))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_15 = ((/* implicit */signed char) -321259921531989971LL);
        var_16 = ((/* implicit */short) min((((/* implicit */long long int) (unsigned short)63033)), ((((-(1LL))) + (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_17 = max((var_8), (((/* implicit */int) ((unsigned char) -8594008483611966598LL))));
        var_18 = 5009068588224440980ULL;
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            {
                arr_12 [i_4] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 321259921531989970LL)))))))), (max((arr_11 [i_3] [i_4]), (arr_11 [i_3] [i_4])))));
                var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) 1LL))), (min((13437675485485110635ULL), (((/* implicit */unsigned long long int) ((unsigned char) 13437675485485110628ULL)))))));
            }
        } 
    } 
}
