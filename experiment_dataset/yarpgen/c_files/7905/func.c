/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7905
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
    var_10 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) <= (var_2))))) < (((var_7) + (((/* implicit */long long int) ((/* implicit */int) (signed char)117))))))) ? (((/* implicit */int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_0)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 278166416)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)192))))))))));
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) >> (((var_6) - (455352880)))))) || (((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) max((18446744073709551599ULL), (((/* implicit */unsigned long long int) -2147483639))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) -1);
                var_13 = ((/* implicit */_Bool) min((var_13), (((((/* implicit */_Bool) ((((arr_1 [i_1] [i_0]) - (7034613979147510003LL))) - (((/* implicit */long long int) 0))))) && (((/* implicit */_Bool) ((max((((/* implicit */int) (unsigned char)192)), (-179800782))) - (((/* implicit */int) (signed char)-69)))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) 14662588183617789646ULL);
                var_14 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (arr_1 [i_0] [i_0]) : (var_4)))) < (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)192)) - (1217976693)))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (194921146534085799ULL)))))));
            }
        } 
    } 
}
