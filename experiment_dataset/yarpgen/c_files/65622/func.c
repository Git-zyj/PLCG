/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65622
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned int) var_1)))))))) >= (((/* implicit */int) ((min((((/* implicit */unsigned int) (signed char)-66)), (2020356511U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((884371096683472275ULL) != (884371096683472275ULL))))))))));
    var_21 *= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_14))))) % ((-(17562372977026079341ULL))))) % (((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (((16776704) >> (((((/* implicit */int) (unsigned short)30152)) - (30141))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_22 ^= min((((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) -357005324)))), (((((/* implicit */int) (unsigned short)35359)) < (((/* implicit */int) (short)-27979))))))), (((((/* implicit */unsigned long long int) arr_4 [6LL] [i_1])) * (11144247261842299516ULL))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)30177), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_11))))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_2 [i_0]))) - ((((~(-16776705))) | (min((((/* implicit */int) var_14)), (-1503893680)))))));
            }
        } 
    } 
}
