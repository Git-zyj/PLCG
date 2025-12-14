/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71655
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (18446744073709551608ULL))), (((/* implicit */unsigned long long int) min((var_0), ((signed char)-34)))))), (var_6))))));
    var_13 = ((/* implicit */unsigned long long int) (unsigned char)240);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [(short)15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7ULL))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_10)) : (18446744073709551604ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((18446744073709551603ULL) | (15167395590362990837ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((-9223372036854775807LL - 1LL)) : (var_5)))) ? (((/* implicit */unsigned long long int) max((1732056770), (((/* implicit */int) var_2))))) : (max((65535ULL), (((/* implicit */unsigned long long int) (signed char)26)))))) : (max((((arr_6 [i_2] [i_0] [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14387989321021636069ULL)) ? (((/* implicit */int) (unsigned short)46419)) : (((/* implicit */int) var_0)))))))));
                    var_15 ^= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))) : (var_11));
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */int) (signed char)119)), ((-2147483647 - 1))))), (((((/* implicit */_Bool) -1854280667)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7334)) ? (4058754752687915549ULL) : (((/* implicit */unsigned long long int) -1617628661045926718LL))))) || (((/* implicit */_Bool) (unsigned short)19117)))))) : (13728609087467757338ULL));
}
