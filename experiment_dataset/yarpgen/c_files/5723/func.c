/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5723
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
    var_13 = ((/* implicit */short) max(((~(-4498318412118250912LL))), (((/* implicit */long long int) (signed char)-82))));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (((((~(((/* implicit */int) var_6)))) / (((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))) < ((~(min((var_12), (((/* implicit */int) (unsigned char)255)))))))))));
    var_15 = ((/* implicit */_Bool) var_12);
    var_16 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */int) max(((unsigned short)13900), ((unsigned short)51635)));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) != (((((/* implicit */_Bool) min((arr_6 [i_0] [(_Bool)1] [(unsigned char)5]), (((/* implicit */short) (signed char)87))))) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
                    var_17 -= ((/* implicit */unsigned int) arr_5 [i_0]);
                    arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_8 [6U] [6U] [6U] [i_2]);
                    arr_12 [i_0] [i_0] [i_2] |= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))) ? (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_11)))) : (arr_2 [i_1])));
                }
            } 
        } 
    } 
}
