/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87026
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
    var_12 = ((/* implicit */short) ((((/* implicit */int) (short)-20670)) + (((((/* implicit */int) ((2353315500U) < (354914522U)))) % (((/* implicit */int) ((unsigned char) 3940052774U)))))));
    var_13 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_7)), (5520031866509258456ULL)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_14 |= var_1;
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_9))));
        var_16 &= max((max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (max((5520031866509258456ULL), (((/* implicit */unsigned long long int) (short)5464)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)47263), ((unsigned short)18273)))) << (((/* implicit */int) (!(((/* implicit */_Bool) 5396688484082370879ULL)))))))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) var_4);
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((min((max((((/* implicit */unsigned long long int) (unsigned short)22209)), (11350439639808577809ULL))), (((/* implicit */unsigned long long int) ((var_11) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) < (max((((/* implicit */unsigned long long int) var_6)), (arr_4 [i_1])))));
    }
}
