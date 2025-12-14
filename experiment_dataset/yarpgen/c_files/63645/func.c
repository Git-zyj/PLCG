/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63645
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */short) (signed char)-107)), (var_16)))), (var_0)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101)))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-27299)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (unsigned short)8646))))), (var_12))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)119)), (var_9))))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [(_Bool)1] [i_1 + 1] [i_1] = ((/* implicit */short) min((((/* implicit */int) (((!(((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) arr_2 [i_1 - 3]))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_6 [i_0] [i_0]) : (arr_6 [i_0] [i_2 - 1])))));
                    arr_10 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 3056759228887568243ULL)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) arr_1 [i_0] [i_1 - 3])))), ((~(255)))));
                    arr_11 [(short)16] = ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (max((((/* implicit */int) arr_1 [i_1] [i_2])), (((((/* implicit */_Bool) 7091414372297686696ULL)) ? (((/* implicit */int) (unsigned short)56900)) : (((/* implicit */int) (unsigned short)4)))))) : (((/* implicit */int) arr_1 [i_2 + 1] [i_1 - 1])));
                    arr_12 [i_0] [i_0] [i_1] [i_2 + 1] &= ((/* implicit */long long int) 16090339880298133345ULL);
                    var_22 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) arr_5 [i_1] [i_2])), (max((var_12), (var_17))))), (((((/* implicit */_Bool) ((var_12) << (((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)98), (((/* implicit */signed char) (_Bool)1)))))) : (min((arr_0 [10U] [i_0]), (((/* implicit */unsigned int) (signed char)87))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((max((7091414372297686681ULL), (((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-107)), ((short)28954)))))), (((/* implicit */unsigned long long int) var_14))));
    var_24 += ((/* implicit */unsigned char) 5ULL);
}
