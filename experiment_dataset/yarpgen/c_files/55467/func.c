/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55467
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_9))));
                    var_16 -= ((/* implicit */short) var_8);
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51234))) : (7LL))) : (max((7LL), (((/* implicit */long long int) (short)-16367))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        arr_11 [i_3] [8U] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(arr_4 [i_3] [i_3])))), (5543027133122519151ULL)));
        arr_12 [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)0)) - (29360128))), (((/* implicit */int) var_10))))) ^ (var_6)));
        var_17 = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_3] [12ULL] [i_3])) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((short) var_1))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16348))) < (((((/* implicit */_Bool) -4708965147355209038LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29504))) : (arr_5 [10U] [i_3] [i_3] [i_3]))))))));
    }
    var_18 = ((/* implicit */short) max((7LL), (var_1)));
    var_19 &= ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (short)16366)), (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) 7LL)))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11746))))))))));
}
