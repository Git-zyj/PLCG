/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69625
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned char)48))))) && (((/* implicit */_Bool) 6268632554449240179LL)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((min((arr_3 [i_1] [i_1] [i_1]), (arr_3 [i_1] [i_1] [i_1]))) - (((/* implicit */unsigned long long int) 498326814U))));
                    var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */unsigned long long int) 3796640481U)) : (9206653882222892642ULL)));
                    arr_7 [i_2] [i_1] [i_2] &= ((/* implicit */unsigned long long int) (((+(arr_1 [i_0 - 3] [i_2 - 1]))) >= (((/* implicit */int) arr_2 [i_0] [i_0]))));
                    arr_8 [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_4 [i_1])), (((((/* implicit */_Bool) 3796640494U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31323))) : (18374686479671623680ULL))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) arr_2 [i_0 + 2] [16U])))))));
                    var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 498326814U)) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) arr_1 [i_2] [i_0])))))));
                }
            } 
        } 
    } 
    var_20 += var_10;
    var_21 |= ((/* implicit */long long int) var_10);
}
