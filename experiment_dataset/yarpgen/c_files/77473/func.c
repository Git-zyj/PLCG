/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77473
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
    var_17 += ((/* implicit */unsigned short) ((((var_2) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))) <= (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_16)) ^ (var_5)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_18 += ((/* implicit */unsigned short) (((-(((/* implicit */int) (short)29854)))) - (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [(unsigned char)4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((0), (((/* implicit */int) (unsigned short)38014)))), (((/* implicit */int) var_11)))))));
    }
    var_19 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        for (int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            {
                arr_9 [i_2] [i_1] [i_2] = ((/* implicit */int) ((short) max((var_3), ((-9223372036854775807LL - 1LL)))));
                var_20 += ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24421)) ? (((/* implicit */int) (unsigned short)25829)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) var_14)) : (6974127344672178326ULL))))))));
            }
        } 
    } 
}
