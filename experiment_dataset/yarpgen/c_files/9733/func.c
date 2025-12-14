/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9733
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
    var_20 ^= ((/* implicit */short) (~(((((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (var_4)))) | (((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */long long int) var_4)) : (var_0)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [(_Bool)1] [i_2] [i_2] [i_0] = ((/* implicit */long long int) min((8ULL), (((/* implicit */unsigned long long int) (unsigned char)47))));
                    arr_9 [i_2] = ((/* implicit */signed char) (~(((unsigned long long int) 18446744073709551606ULL))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)20)), (min((((/* implicit */long long int) (signed char)-58)), ((-9223372036854775807LL - 1LL)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_0);
    var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_17)), (var_15)))) ? (-1566858679930878618LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (var_7))))))) + (((/* implicit */long long int) max((((/* implicit */int) var_7)), ((+(((/* implicit */int) (signed char)7)))))))));
}
