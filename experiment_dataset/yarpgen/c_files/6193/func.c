/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6193
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) max((max((4294967295U), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_13)), (var_12)))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) -1862559734)))))) > (((unsigned long long int) var_3)))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_15), (((/* implicit */unsigned long long int) 387721237U)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))))))) ? (((/* implicit */int) (unsigned short)20587)) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) % (((/* implicit */int) var_5))))));
    }
    var_18 = ((/* implicit */unsigned short) max((max((max((var_15), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) max((var_11), (var_11))))));
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (3907246059U)))), (arr_3 [i_1]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-2)))))));
                var_19 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 - 1] [(_Bool)1])))))));
                arr_8 [i_1] [i_1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
            }
        } 
    } 
}
