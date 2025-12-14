/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87156
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) (~(((/* implicit */int) var_9))))) : (((var_4) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57)))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_4))) ? (var_11) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-1761))))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-15))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_1)))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((var_11) / (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-15)) & (((/* implicit */int) (unsigned short)24745))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_11) != (-749001437240839625LL))))) : (max((((/* implicit */long long int) var_14)), (var_6))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] = (~(min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)40791))))), (((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_2])) / (arr_7 [i_0]))))));
                        var_18 = ((/* implicit */short) min((var_18), ((short)1761)));
                        arr_11 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)63975);
                    }
                } 
            } 
        } 
        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4076)))))) ? (max((arr_7 [(short)0]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)47703)) >> (((arr_4 [i_0] [i_0] [i_0]) + (4157994802069355748LL)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)20))) > (max((((/* implicit */long long int) (short)1753)), (arr_7 [(signed char)8])))))))));
        var_20 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0])) * (arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1759)) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    }
    var_21 += var_14;
}
