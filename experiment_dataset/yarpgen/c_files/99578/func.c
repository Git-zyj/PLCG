/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99578
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_16 ^= max((arr_6 [i_2] [(_Bool)1] [i_0]), (((/* implicit */unsigned int) ((arr_3 [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))));
                    arr_11 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_14))) * (min(((+(((/* implicit */int) arr_3 [i_1])))), (((arr_3 [13]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (((319552843U) - (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((unsigned int) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))))));
    var_18 = ((/* implicit */int) var_6);
    var_19 += ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (short)(-32767 - 1))) > (((/* implicit */int) (_Bool)1))))), (((unsigned short) (_Bool)1))));
    var_20 = ((/* implicit */unsigned short) var_13);
}
