/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90161
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
    var_15 |= var_4;
    var_16 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_3 [(short)14] [i_0] = ((/* implicit */_Bool) (+(4094555045U)));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_2);
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0 - 2]);
        arr_6 [i_0] = var_4;
    }
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        arr_11 [i_1 + 3] = ((unsigned int) max((((/* implicit */unsigned int) var_9)), (arr_7 [i_1 + 3] [i_1])));
        arr_12 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((4387034942354145241ULL), (((/* implicit */unsigned long long int) var_0))))) ? ((-(((/* implicit */int) (unsigned short)44433)))) : (((/* implicit */int) ((short) (unsigned short)44433)))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)27816)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)40931))))), (var_12)))));
        var_17 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_1 [i_1])))))) & (((arr_7 [(unsigned short)2] [(unsigned short)7]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21103))))))), (((/* implicit */unsigned int) max((arr_10 [i_1 + 1] [i_1 - 1]), (arr_10 [i_1 + 1] [i_1 + 2]))))));
    }
    for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2])) ? (arr_13 [i_2 - 1] [i_2]) : (17425407025839500736ULL)))));
        arr_17 [i_2] = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17425407025839500758ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)44456))))), (arr_13 [i_2 + 1] [i_2 + 1])))));
        var_19 += ((/* implicit */unsigned char) (unsigned short)10376);
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)44433)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14)))))))));
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) var_5)), (var_7))))))));
}
