/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81412
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        arr_8 [i_1] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */long long int) var_15)))) <= (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)242)), (1564356013U))))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(short)7] [i_0] [(short)7] [i_1] [2LL] [(short)7])) || (((/* implicit */_Bool) var_8)))))) + ((-(var_12)))))));
                        var_18 = ((/* implicit */unsigned int) var_8);
                        var_19 = ((/* implicit */long long int) ((signed char) (~((~(((/* implicit */int) (signed char)47)))))));
                    }
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((long long int) arr_2 [i_1] [i_1 + 3])))) <= ((+(((/* implicit */int) var_10))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (var_1)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))) : (((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_22 = ((/* implicit */signed char) (unsigned char)16);
}
