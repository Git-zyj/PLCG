/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59376
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(3112899274U)))) - (((var_3) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11602462570191845024ULL)) ? (var_10) : (((/* implicit */int) arr_1 [12ULL]))))) : (((((/* implicit */unsigned long long int) var_8)) + (var_7)))))));
                var_14 = ((int) 952870744);
                var_15 += ((max((((/* implicit */unsigned long long int) (_Bool)1)), (13303387110718186857ULL))) <= (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) : (arr_4 [i_0 - 1] [(unsigned short)8] [i_1]))), ((+(var_8)))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) 1182068022U);
                    arr_10 [i_0 - 1] [i_0] = ((/* implicit */long long int) var_10);
                }
            }
        } 
    } 
    var_16 ^= ((/* implicit */unsigned int) ((signed char) ((signed char) min((((/* implicit */unsigned int) -86292125)), (var_9)))));
}
