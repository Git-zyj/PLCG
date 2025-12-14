/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85000
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_19 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((signed char) (~(var_3))))), (((unsigned long long int) (-(((/* implicit */int) (unsigned short)65535)))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-2579)) + (2147483647))) >> (((2315791075U) - (2315791062U)))))) ? (((((/* implicit */_Bool) (unsigned char)226)) ? (2315791081U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59405))))) : (1979176235U))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) (short)-20223)) * (((/* implicit */int) (signed char)-78))));
    }
    for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        arr_7 [i_1 + 3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4140594473U)))) ? (((/* implicit */int) max((arr_6 [i_1 - 1] [i_1 + 1]), (arr_6 [i_1 + 2] [i_1 + 2])))) : (((/* implicit */int) min((arr_6 [i_1 - 1] [i_1 + 1]), (arr_6 [i_1 - 1] [i_1 + 3]))))));
        var_21 += ((/* implicit */unsigned short) min((min((-491096941), (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 2])))), (((/* implicit */int) ((signed char) arr_6 [i_1 + 1] [i_1 - 1])))));
        arr_8 [i_1 + 2] = ((/* implicit */short) ((unsigned char) (+(max((var_2), (((/* implicit */unsigned long long int) (signed char)31)))))));
        var_22 = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (short)-20223)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
    }
    var_23 = ((/* implicit */short) (~(2345048264U)));
    var_24 = 1193419679U;
    var_25 = ((/* implicit */short) ((unsigned long long int) ((signed char) (~(((/* implicit */int) var_16))))));
    var_26 += ((/* implicit */unsigned short) (-(var_10)));
}
