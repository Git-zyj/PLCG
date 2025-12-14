/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80296
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
    var_17 = min((((/* implicit */unsigned long long int) ((long long int) (-(var_10))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (var_14))))));
    var_18 &= ((/* implicit */unsigned char) ((var_14) >> (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
        var_20 = ((/* implicit */_Bool) var_8);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147522995U)) ? (min(((+(-6521668777827045341LL))), (((/* implicit */long long int) ((int) arr_4 [6U]))))) : (((((arr_6 [i_1] [i_2] [i_2]) ? (arr_0 [i_2]) : (((/* implicit */long long int) var_15)))) - (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))))));
                    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_6 [i_1] [i_1] [i_1 - 1]))) ? (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) var_0))))) : (((var_2) >> (((/* implicit */int) arr_1 [i_1]))))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-57)) ? (((((/* implicit */int) (signed char)-57)) * (((/* implicit */int) (signed char)-64)))) : (((/* implicit */int) min(((signed char)-47), (((/* implicit */signed char) var_4)))))));
        var_24 = ((/* implicit */unsigned long long int) (((+(((unsigned int) arr_3 [i_1])))) >> ((((~(-376699678930469387LL))) - (376699678930469381LL)))));
        var_25 &= ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) (unsigned char)250)), ((~(arr_0 [i_1 - 1])))))));
    }
}
