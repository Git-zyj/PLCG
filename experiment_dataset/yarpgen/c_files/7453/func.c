/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7453
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_1] [4U] [i_1] &= min((((unsigned short) ((4747134175829822882LL) + (((/* implicit */long long int) var_8))))), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0] [i_0 - 2])));
                        var_10 = ((((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) -4747134175829822878LL))))) ? (-2147483648LL) : (((/* implicit */long long int) max((var_8), (((/* implicit */int) var_2))))))) + (min((((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */unsigned char) var_9))))), (min((4747134175829822877LL), (((/* implicit */long long int) (_Bool)1)))))));
                        arr_10 [i_0] [i_3] [9U] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)27215))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (36028659580010496ULL)))));
                    }
                } 
            } 
        } 
        var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [9ULL] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 3]))))), (min((((/* implicit */unsigned int) var_8)), (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
    }
    var_12 = ((/* implicit */long long int) ((((unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
}
