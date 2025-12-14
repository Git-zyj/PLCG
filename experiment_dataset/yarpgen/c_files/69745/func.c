/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69745
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((((/* implicit */_Bool) min((1048568), (((/* implicit */int) (short)19192))))) ? (((((/* implicit */_Bool) 1048568)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (min((arr_3 [(unsigned char)2] [i_1] [i_1]), (((/* implicit */unsigned long long int) (short)30493)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1218))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1584098842U)) && ((_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)510)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_1 [i_0] [i_0]))))))))));
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 31U)) & (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 2])) ? (arr_1 [i_0] [i_0 + 2]) : (arr_1 [i_0] [i_0 + 2])))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_1);
    var_19 = ((/* implicit */signed char) (short)-1225);
    var_20 = ((/* implicit */unsigned long long int) var_8);
}
