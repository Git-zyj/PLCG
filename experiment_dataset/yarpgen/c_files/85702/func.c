/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85702
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
    var_10 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max(((+(var_9))), (((/* implicit */long long int) ((var_3) / (var_3))))));
                arr_4 [(unsigned short)13] [(unsigned short)13] [i_1 + 1] = ((/* implicit */unsigned long long int) var_3);
                var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(var_3)))) ^ (max((((/* implicit */long long int) var_6)), (var_7)))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((var_8), (((/* implicit */unsigned long long int) (unsigned char)1)))), (var_8)))) ? (min((var_3), (((/* implicit */int) (unsigned char)128)))) : ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5136))) >= (var_8))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (((~(var_7))) != (var_7)));
    var_15 = ((/* implicit */signed char) max((((/* implicit */long long int) var_5)), (var_9)));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 24; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) * (17230781128084003816ULL)));
        var_16 ^= ((/* implicit */unsigned short) (-((+(13062401211535906513ULL)))));
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) var_0);
    }
}
