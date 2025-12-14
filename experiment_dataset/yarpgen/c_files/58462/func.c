/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58462
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) arr_4 [i_1 + 4] [i_1 - 1] [i_1 + 2]);
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max((max((max((arr_1 [i_1]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4611686018427387904LL)) && (((/* implicit */_Bool) arr_0 [(unsigned char)2]))))))), (arr_1 [i_0]))))));
                arr_6 [i_0] [i_1] [i_1] = arr_4 [i_1] [i_1] [i_1];
                var_15 = ((/* implicit */signed char) ((short) var_8));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */long long int) var_9)) == (9189080189946852676LL))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))), (((((((var_1) - (4611686018427387903LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_0)) + (23315)))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_12)))) ? (((((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (4611686018427387903LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((1462147736U) % (2832819556U))))));
}
