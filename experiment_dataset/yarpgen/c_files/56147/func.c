/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56147
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (((+(2597061556U))) * (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_2 - 1] [i_2 + 1] [i_2 - 1]), (arr_2 [i_0] [i_2 - 1] [i_0])))))));
                    var_19 = ((/* implicit */int) arr_3 [i_1]);
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 2597061564U)) ? (arr_4 [i_2] [i_0] [i_2]) : (arr_4 [i_2] [i_1] [i_2]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    arr_8 [i_2] = (unsigned char)255;
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)9092))) : (var_14)))) ? (9223372036854775790LL) : (((/* implicit */long long int) var_8))));
    var_21 = max((((/* implicit */unsigned long long int) (short)-13773)), (max((((((/* implicit */_Bool) 2597061556U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) 4294967295U)))));
}
