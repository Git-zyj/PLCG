/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9057
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
    var_12 = ((/* implicit */short) (_Bool)1);
    var_13 = min((var_9), ((short)529));
    var_14 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_15 *= ((/* implicit */short) max((min((min((((/* implicit */unsigned long long int) var_1)), (709184994537861360ULL))), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (short)-530))));
        var_16 -= var_10;
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_17 = ((/* implicit */short) min((max((((/* implicit */unsigned int) var_9)), (var_4))), (((/* implicit */unsigned int) (short)-528))));
        var_18 = ((/* implicit */unsigned long long int) var_7);
        arr_4 [i_1] = var_3;
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)115)), ((short)-538)))), (var_4)))), (max((var_7), (((/* implicit */long long int) var_2))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((/* implicit */unsigned int) max(((unsigned char)137), (((/* implicit */unsigned char) var_6))))), (min((var_1), (((/* implicit */unsigned int) var_3)))))))));
        var_20 *= ((/* implicit */unsigned int) var_8);
        var_21 = (-9223372036854775807LL - 1LL);
    }
}
