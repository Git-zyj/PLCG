/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58613
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
    var_15 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) 581305748)) / (18446744073709551612ULL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [12] [i_1] [i_1] = (-(-7925384977979302536LL));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) ((18446744073709551612ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)35))))));
                arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) (unsigned short)17376)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))) : (arr_0 [1U] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [(_Bool)1]) : (arr_2 [i_0]))))));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_1])) >= (arr_3 [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1])) ^ (((/* implicit */int) arr_6 [i_1] [i_0]))))) : ((~((-(2305807824841605120ULL))))))))));
                var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)43))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) 993383556)) : (456819264493288219LL))))) / (((/* implicit */long long int) ((arr_3 [i_0]) | (((/* implicit */int) arr_6 [i_0] [i_1])))))));
            }
        } 
    } 
}
