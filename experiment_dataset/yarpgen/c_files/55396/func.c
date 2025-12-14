/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55396
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_4 [i_1 - 1] [i_1 - 1])))));
                var_12 = ((/* implicit */unsigned short) max((max((arr_3 [i_1 - 1]), (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [(unsigned short)12] [i_1]))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) arr_4 [3] [i_1 + 1])), (var_2))) <= ((-(var_0))))))));
                arr_5 [i_1] = ((/* implicit */signed char) max((((max((var_10), (((/* implicit */unsigned int) arr_4 [(unsigned char)7] [(unsigned char)0])))) % (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) arr_2 [(unsigned char)11] [i_1])) : (var_10))))), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 2094628802)) ? (2094628802) : (((/* implicit */int) (unsigned char)23))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((signed char) (-(var_0))));
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_10)) : (var_0))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    var_15 = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (var_4)))) - (min((var_2), (var_2))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6961091745269106371LL)) ? (2094628817) : (12)));
}
