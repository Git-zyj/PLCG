/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74208
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
    var_10 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)74))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) (short)16040))))) ? (min((((/* implicit */int) var_6)), (var_1))) : (((/* implicit */int) (signed char)-50))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -82867202)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-75))))) | ((+(var_4)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((127), (((/* implicit */int) (signed char)74))));
        var_11 = ((/* implicit */unsigned long long int) 813318910U);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) << (((/* implicit */int) arr_0 [i_3]))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_1])) ? (-82867201) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])))) : (((arr_0 [i_0]) ? (82867201) : (((/* implicit */int) (unsigned short)47134)))))));
                        var_13 = ((/* implicit */unsigned int) (+(((int) 8ULL))));
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) (signed char)-53))))) ? (-886985062) : (var_9)))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)254))) : (11ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (819075018U)))))));
    var_15 *= ((/* implicit */signed char) var_9);
    var_16 -= ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-99)) + (((/* implicit */int) var_5)))) & (var_8)));
}
