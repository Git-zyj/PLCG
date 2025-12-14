/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60975
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-(((((((/* implicit */int) var_16)) << (((/* implicit */int) (unsigned char)16)))) << ((((+(((/* implicit */int) (unsigned short)38217)))) - (38197))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((arr_1 [i_0]) <= (-1)))), (((((/* implicit */_Bool) ((long long int) -1010039118))) ? ((-(arr_0 [1LL]))) : (min((arr_0 [16]), (((/* implicit */long long int) (unsigned char)184))))))));
        var_19 = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_20 = ((/* implicit */int) 144114913197948928LL);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [15] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) ((arr_0 [(_Bool)1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38220)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38217))) : (((long long int) (unsigned short)27315)))), (((/* implicit */long long int) -1))));
                    var_21 = ((/* implicit */int) min((var_21), (((int) (+(18446744073709551615ULL))))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (unsigned short)27323))));
                }
            } 
        } 
    }
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)27316)) > (1835008)))) >> (((((/* implicit */long long int) -565456213)) / (144114913197948956LL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_6)) > (-1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)192)) ? (var_8) : (((/* implicit */int) (unsigned short)27308))))) ? (((/* implicit */unsigned long long int) ((unsigned int) 87944510U))) : ((~(var_0))))));
}
