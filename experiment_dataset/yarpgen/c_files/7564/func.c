/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7564
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
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */short) ((arr_6 [i_0]) * (var_1)));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16256))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((16744448U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53859))))))))))));
                    var_18 = ((/* implicit */long long int) (-(((4278222847U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-13161)))))));
                    var_19 = ((/* implicit */unsigned long long int) ((((2147483626) | (-1426617247))) <= (((((((/* implicit */_Bool) 16744448U)) ? (((/* implicit */int) var_0)) : (-1426617247))) >> (((((2076162912U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50396))))) - (49276U)))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_1] [i_2 + 3])) ? (((/* implicit */int) arr_2 [i_0] [i_2 + 2])) : (((/* implicit */int) var_15)))) < (((1426617246) - (((/* implicit */int) arr_2 [i_0 - 2] [i_2 + 2]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((((/* implicit */int) var_8)) ^ (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)25645)))))))))));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(((((/* implicit */int) var_10)) + (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_3))))))))))));
}
