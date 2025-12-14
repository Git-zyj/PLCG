/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65579
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
    var_19 = ((/* implicit */short) ((((/* implicit */long long int) (~(var_11)))) > (min((((/* implicit */long long int) var_3)), (((((/* implicit */long long int) var_3)) & (var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65526)) & (((/* implicit */int) arr_5 [i_2]))))) > (var_17))))));
                    var_21 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_2 [i_0]))))) | (max((((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))))), (((/* implicit */long long int) arr_6 [i_2] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) (unsigned short)40116)))) ? (((((/* implicit */unsigned long long int) -5LL)) & (var_15))) : (min((var_5), (((/* implicit */unsigned long long int) var_3)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? ((+(var_17))) : (((var_0) * (var_18)))))));
    var_23 = ((/* implicit */signed char) min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)40111)) ? (4291955377U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
}
