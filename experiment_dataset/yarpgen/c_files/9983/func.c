/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9983
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) 18446744073709551615ULL);
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(14ULL)))) && (((/* implicit */_Bool) ((signed char) 1ULL)))));
                    var_16 = ((/* implicit */int) (((+(max((((/* implicit */unsigned long long int) var_14)), (var_0))))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551605ULL))))))))));
                    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) max((18446744073709551610ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                    arr_8 [i_1] [i_1] [0ULL] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_14))))) * (2ULL)))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0 - 1] [i_1])), ((-(var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_10))));
                    var_19 = ((/* implicit */long long int) max((var_19), (max((((/* implicit */long long int) ((unsigned char) 302173224))), (max((((/* implicit */long long int) min((var_4), (((/* implicit */signed char) arr_13 [i_5]))))), (max((((/* implicit */long long int) var_9)), ((-9223372036854775807LL - 1LL))))))))));
                    var_20 = ((/* implicit */unsigned short) max((10ULL), (((/* implicit */unsigned long long int) 472048679))));
                }
            } 
        } 
    } 
}
