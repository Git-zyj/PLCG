/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85668
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
    var_18 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 -= ((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)65531)), (var_7)))) >= (max((((/* implicit */unsigned long long int) (short)-1)), (17511410438819780342ULL))))) ? (((/* implicit */unsigned long long int) max((max((((/* implicit */int) (unsigned short)17396)), (var_2))), (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_5))))));
                var_20 = ((/* implicit */_Bool) (-2147483647 - 1));
                arr_5 [i_0] [i_1] &= ((/* implicit */short) ((int) ((((/* implicit */_Bool) -9223372036854775783LL)) ? (min((((/* implicit */unsigned long long int) 909433928U)), (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_12))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (_Bool)1);
}
