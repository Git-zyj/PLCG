/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77721
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
    var_12 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (unsigned char)255))))));
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) max(((~(((/* implicit */int) var_11)))), (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) 9781342413894536073ULL)) ? (-6508406935910659112LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))))));
    var_14 &= ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) 5193516279554308967LL)))))) < (var_10)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 &= ((/* implicit */unsigned char) ((unsigned int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)113)))))));
                arr_7 [i_0] |= ((/* implicit */_Bool) ((long long int) ((4936707285516914288LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))));
            }
        } 
    } 
}
