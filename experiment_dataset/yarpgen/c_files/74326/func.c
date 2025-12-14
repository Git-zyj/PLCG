/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74326
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
    var_14 = ((/* implicit */unsigned short) (~(var_3)));
    var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) ? (-403461543) : (((/* implicit */int) var_6))))) ? (max(((~(var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) < (var_13)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((403461543), (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)105)) && (((/* implicit */_Bool) var_5))))) : (((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 += ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
                    var_17 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) arr_5 [i_0] [i_1] [i_1]))))) * (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))) / (var_10))) : (17931499613370482854ULL)))));
                    var_18 = ((/* implicit */signed char) min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (arr_2 [i_2]))))));
                }
            } 
        } 
    } 
}
