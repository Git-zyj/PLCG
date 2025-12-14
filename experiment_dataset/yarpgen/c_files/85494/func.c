/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85494
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
    var_20 = ((/* implicit */short) ((unsigned long long int) var_5));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) (((~(((/* implicit */int) min((arr_1 [(unsigned short)1]), (((/* implicit */unsigned short) arr_0 [i_0]))))))) * ((-(((/* implicit */int) min((((/* implicit */short) (unsigned char)122)), ((short)0))))))));
        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_0 - 2])));
        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) + (2147483647))) << (((((int) arr_0 [i_0 + 1])) - (94)))));
    }
    for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) var_0);
        arr_5 [i_1 - 1] [i_1 - 2] |= (short)19045;
        arr_6 [0ULL] &= ((/* implicit */unsigned int) arr_2 [i_1 - 1]);
        var_25 += ((/* implicit */unsigned long long int) arr_2 [i_1]);
        var_26 = ((/* implicit */unsigned char) 0ULL);
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) | (696800637U))))));
        var_28 -= ((/* implicit */unsigned char) arr_7 [i_2]);
    }
}
