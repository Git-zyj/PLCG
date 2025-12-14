/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88530
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
    var_14 |= ((/* implicit */long long int) (unsigned char)155);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1LL)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)155)) ? (-1LL) : (((/* implicit */long long int) 1391362102))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12399))) : (9007198986305536ULL))))) : (((/* implicit */unsigned long long int) var_12))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((((((/* implicit */int) min((var_2), (var_2)))) ^ (((int) arr_3 [i_0] [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) || (((/* implicit */_Bool) (((-2147483647 - 1)) & (((/* implicit */int) (short)-12382))))))))));
                    arr_8 [i_0] [1ULL] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((-1LL) < (((/* implicit */long long int) ((/* implicit */int) var_4)))))) % (((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 1]))))) ? (var_6) : (((/* implicit */unsigned long long int) (-(576460752303423487LL))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */short) var_4)), (var_2)));
    var_18 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_1)), (min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1391362102)) >= (var_12))))))));
}
