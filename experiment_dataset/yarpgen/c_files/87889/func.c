/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87889
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 &= ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)60572), ((unsigned short)45768))))) + (var_14))), (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) max((532453542), (((/* implicit */int) arr_2 [i_0]))))))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14006)) ? (min((((((/* implicit */int) (unsigned short)60572)) * (((/* implicit */int) arr_1 [(_Bool)1])))), ((-2147483647 - 1)))) : (((/* implicit */int) max((max(((signed char)(-127 - 1)), (((/* implicit */signed char) var_4)))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) || (((/* implicit */_Bool) arr_1 [i_0]))))))))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((((/* implicit */int) arr_2 [i_0 - 1])) % (((/* implicit */int) arr_1 [i_0 - 1])))), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60572))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)4963)) : (((/* implicit */int) var_5)))))))))));
        var_23 = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((2147483647) % (((/* implicit */int) (unsigned short)4978))))), (((((/* implicit */_Bool) (unsigned short)4963)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60573))) : (var_11)))))) && (((((unsigned long long int) arr_1 [(signed char)1])) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 690440989959917181ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        var_24 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_3 [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) arr_4 [i_1])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1]))))), (min((((/* implicit */unsigned long long int) ((unsigned short) var_7))), (max((16569533264310900739ULL), (16569533264310900748ULL)))))));
        var_25 = ((/* implicit */signed char) (~(var_8)));
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) max((((/* implicit */short) (signed char)127)), (arr_1 [i_1 + 1]))))))) ? (arr_3 [i_1]) : (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) : (2857417587U))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)92)) - (var_15)))))))));
    }
    var_27 = ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), (1073741696)));
}
