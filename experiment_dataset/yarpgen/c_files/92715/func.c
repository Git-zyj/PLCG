/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92715
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
    var_17 = ((/* implicit */unsigned int) var_7);
    var_18 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(unsigned short)2] [20ULL] &= var_8;
                var_19 = ((/* implicit */long long int) min((var_19), ((~((-(arr_3 [13ULL] [i_1] [i_0 + 1])))))));
                arr_6 [4ULL] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((max((arr_3 [i_0 - 1] [16] [4LL]), (arr_1 [i_0] [(signed char)12]))) != (((/* implicit */long long int) ((arr_4 [4U]) << (((2147483647U) - (2147483626U)))))))))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_4 [i_1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
            {
                {
                    arr_17 [13U] [i_4] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */short) arr_10 [i_2])), (arr_9 [i_4 - 1] [12U])));
                    arr_18 [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (10008557584994437859ULL) : (((/* implicit */unsigned long long int) -532063463))))) ? (((/* implicit */unsigned long long int) 5798984009312241831LL)) : (2054298583982670295ULL))) & (((unsigned long long int) arr_10 [i_2]))));
                }
            } 
        } 
    } 
}
