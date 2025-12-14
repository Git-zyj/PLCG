/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90151
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
    var_15 = ((((/* implicit */_Bool) 1264491306U)) ? (((/* implicit */unsigned long long int) ((max((1264491306U), (((/* implicit */unsigned int) var_1)))) + (((((/* implicit */_Bool) -1)) ? (var_14) : (817751077U)))))) : (((18446744073709551597ULL) + (((/* implicit */unsigned long long int) 1264491306U)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2 + 1] |= ((/* implicit */long long int) (((-(1928091957U))) != (((/* implicit */unsigned int) ((((/* implicit */int) (short)-10886)) + (((/* implicit */int) (short)10885)))))));
                    var_16 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 7034295477304844004LL)), (((((/* implicit */_Bool) ((-1) + (((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10895))) : (max((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2 - 2] [i_1 + 1] [i_0])), (1099511627712ULL)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) max((18302628885633695744ULL), (((/* implicit */unsigned long long int) var_2))));
    var_18 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-6953))) + (1264491308U))))), (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) + (var_14))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4096)) || (((/* implicit */_Bool) var_12)))))))));
    var_19 = ((/* implicit */short) 1806393998U);
}
