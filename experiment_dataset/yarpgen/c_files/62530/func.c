/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62530
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)2837)) - (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) ((((/* implicit */long long int) var_8)) == (var_6))))))) ? (((((/* implicit */_Bool) min((var_2), ((signed char)65)))) ? (((/* implicit */int) var_12)) : (((var_4) & (var_4))))) : (((((/* implicit */int) (short)-32754)) % (((/* implicit */int) (short)32767))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) 0U)) : (16566398907235737468ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32752)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) var_3)))))) : (((long long int) (short)-32764)))))));
                var_14 ^= ((/* implicit */short) min((min((((/* implicit */long long int) ((unsigned int) (short)32744))), (((((/* implicit */_Bool) (signed char)-10)) ? (arr_4 [i_1] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))), ((~(4503599627370496LL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) (short)28672)))) : (((/* implicit */int) max((((/* implicit */signed char) var_3)), (var_9))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((_Bool) 4775209111332699755LL)))));
}
