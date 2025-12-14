/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84039
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
    var_16 = (!(((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_4))))) <= (min((((/* implicit */unsigned long long int) var_15)), (9223372036854775807ULL))))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((var_7), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_13))))))))))));
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_4))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(-3324496651828736625LL))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (+(18446744073709551615ULL)));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) var_6)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(arr_1 [i_0 - 1]))))));
    }
}
