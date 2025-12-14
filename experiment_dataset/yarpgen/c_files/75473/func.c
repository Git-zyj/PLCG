/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75473
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
    var_17 -= ((/* implicit */unsigned int) (((_Bool)0) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)98))));
    var_18 = ((((/* implicit */_Bool) min((((unsigned short) var_4)), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned char)102))))))) : (((unsigned long long int) var_15)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = min((((arr_1 [i_1]) - (arr_1 [i_0]))), (arr_3 [i_0]));
                arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) 3800895621957830552ULL)))) || (((/* implicit */_Bool) arr_2 [i_0] [i_1])))))) : (((12601143453352726152ULL) | (arr_3 [i_0]))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((short) ((unsigned short) (~(var_0))))))));
            }
        } 
    } 
}
