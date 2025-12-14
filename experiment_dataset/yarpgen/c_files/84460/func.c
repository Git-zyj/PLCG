/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84460
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
    var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_1)))) ? (((/* implicit */int) max(((signed char)113), ((signed char)113)))) : ((~(((/* implicit */int) var_12)))))), (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1 + 1] [i_0] &= ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)113))) : (-161255975422388504LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) (unsigned short)52858)) : (((/* implicit */int) var_9)))))));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) / (max((var_10), (((/* implicit */unsigned int) arr_0 [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)52864)) * (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (unsigned short)52858)) ? (-6191168398733809112LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4542))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) + (arr_1 [(unsigned char)2] [i_1 + 2])))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-12788)) - (((/* implicit */int) (signed char)127)))) - (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_3 [i_0]))))))) : (((((((/* implicit */_Bool) 1126372125U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_1 [i_0] [i_0]))) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0]))))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (arr_1 [i_0] [i_1])))) ? (max((var_3), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (unsigned short)60310)) : (((/* implicit */int) arr_4 [i_0]))))) < (((arr_1 [i_0] [11]) | (var_2))))))));
            }
        } 
    } 
}
