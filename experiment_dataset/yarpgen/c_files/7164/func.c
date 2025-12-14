/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7164
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8943572282394935583ULL)) ? (((/* implicit */int) (_Bool)1)) : (var_2)))) != (4204557002U)))) & (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) (_Bool)1);
        arr_2 [i_0] = ((/* implicit */int) ((unsigned int) ((unsigned long long int) (_Bool)1)));
        var_17 = ((_Bool) var_11);
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */int) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1111466872)) && (((/* implicit */_Bool) 5638966529139523235ULL))))), (((((/* implicit */_Bool) 12807777544570028382ULL)) ? (251658240U) : (4204557002U))))), (((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (3145954100U))))))));
        var_19 = ((/* implicit */_Bool) (+(max((((/* implicit */int) ((_Bool) arr_3 [i_1]))), ((-(((/* implicit */int) arr_3 [i_1]))))))));
        var_20 *= ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((unsigned int) 4043309042U))), (((unsigned long long int) (_Bool)1)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1))))));
    }
    for (unsigned int i_2 = 4; i_2 < 12; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */int) ((unsigned int) ((int) ((unsigned short) (_Bool)1))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 3135088875883357572LL)) == (((unsigned long long int) 90410292U))))) >> (((/* implicit */int) min(((!((_Bool)1))), ((_Bool)1))))));
    }
}
