/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/616
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
    var_10 = ((/* implicit */unsigned long long int) var_7);
    var_11 &= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (7435992728353227341ULL))))) ^ (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0]))))));
        var_13 |= var_8;
    }
    for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        var_14 -= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (arr_4 [i_1] [i_1 + 2]))))));
        var_15 += ((/* implicit */signed char) 1534746940U);
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2760220349U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_2])) < (((/* implicit */int) arr_7 [5]))))) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned int) arr_3 [i_2] [i_2])), (1534746946U)))));
        var_17 &= ((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_18 = ((/* implicit */unsigned int) (_Bool)0);
    }
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) * (-1LL)))))));
}
