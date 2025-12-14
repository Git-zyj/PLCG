/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92044
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_6 [i_2 + 1] [(_Bool)1])), (arr_2 [i_1 - 2]))))));
                    var_11 = ((/* implicit */long long int) ((((_Bool) (_Bool)1)) ? (1036751714U) : (max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))) + (arr_8 [i_0] [i_2 - 2]))), (((/* implicit */unsigned int) arr_7 [i_1 + 1] [i_1 - 2] [i_1 + 1]))))));
                    var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((2723385516U) / (((/* implicit */unsigned int) -2147483620)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 2])) * (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))) : (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) 1918019728)) : (var_6))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0]))))))));
                    arr_9 [i_0] [5U] [i_2] = ((/* implicit */unsigned short) ((unsigned int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_4 [(_Bool)1] [(unsigned short)9] [i_1 - 1])))));
                }
            } 
        } 
    } 
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_6));
    var_14 = ((/* implicit */unsigned long long int) var_8);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_4)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (min((var_6), (((/* implicit */unsigned int) var_9))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) var_4))))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_9))));
}
