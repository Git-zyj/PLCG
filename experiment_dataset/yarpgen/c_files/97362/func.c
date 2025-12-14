/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97362
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                arr_7 [i_0] [(_Bool)0] [i_1] = (((~((-(-4920806465283749641LL))))) / (((((/* implicit */_Bool) (signed char)112)) ? (-4920806465283749641LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-27))))));
                var_16 ^= ((/* implicit */signed char) (-(((/* implicit */int) (short)32758))));
                arr_8 [(_Bool)1] [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) max(((+(((int) (unsigned short)65535)))), ((-(((/* implicit */int) (signed char)112))))));
            }
        } 
    } 
    var_17 &= min((((/* implicit */long long int) max((((((/* implicit */int) (signed char)94)) << (((3920202854U) - (3920202846U))))), (((/* implicit */int) var_12))))), (((var_1) + (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */long long int) var_10)) : (var_3))))));
}
