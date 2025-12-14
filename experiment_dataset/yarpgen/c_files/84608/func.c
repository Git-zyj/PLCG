/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84608
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1530)) ? (((/* implicit */int) arr_1 [i_0])) : ((~(((/* implicit */int) var_9))))))) ? (max((((/* implicit */long long int) ((unsigned char) -212668593536983397LL))), (min((((/* implicit */long long int) (short)-29961)), (var_11))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)1530))))) < (max((var_0), (((/* implicit */unsigned long long int) (short)-1))))))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1528))) ^ (var_0))))) : ((((~(11759168574507790473ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44414)))))));
    }
    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) - (((((/* implicit */_Bool) 1427931190)) ? (var_11) : (var_11)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)28325))));
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(212668593536983405LL)))), (var_16)));
    var_21 = ((/* implicit */short) var_12);
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        for (short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_3])) ? (((/* implicit */int) (short)-1529)) : (var_2)))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) - (17318646231767018763ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1])))))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_9))));
                }
            } 
        } 
    } 
}
