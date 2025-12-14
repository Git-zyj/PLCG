/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63502
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((unsigned short) (-(max((var_0), (((/* implicit */unsigned long long int) 4109163289U)))))));
                    var_16 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max(((unsigned short)3122), (((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2 - 1] [i_0]))))))) % (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)188)), (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14542))) : (-1566189854899170003LL))) : (((/* implicit */long long int) ((/* implicit */int) ((581917021U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103)))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) max((var_10), (((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) var_8)), (var_9)))) > (((/* implicit */int) min((((/* implicit */short) var_11)), ((short)-32752)))))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)176)), ((unsigned short)48776)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (max((((/* implicit */int) var_11)), (var_4)))))));
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
}
