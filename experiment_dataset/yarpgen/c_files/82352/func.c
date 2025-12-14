/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82352
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) min((((/* implicit */unsigned int) max((max((962304327), (((/* implicit */int) var_8)))), (((/* implicit */int) min((arr_4 [(short)13] [(short)13] [i_0]), (arr_4 [3U] [i_1] [i_1]))))))), (min((((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned short) var_0))))), (max((1152424218U), (((/* implicit */unsigned int) arr_2 [3U]))))))));
                var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)134)), (112U)));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) min((min((max((((/* implicit */unsigned short) var_6)), (var_3))), (min((var_10), (((/* implicit */unsigned short) (unsigned char)177)))))), (min((min((var_10), (((/* implicit */unsigned short) var_9)))), (min((var_10), (((/* implicit */unsigned short) var_6))))))));
    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((max((var_10), (((/* implicit */unsigned short) var_9)))), (((/* implicit */unsigned short) min((var_0), (((/* implicit */unsigned char) var_8)))))))), (min((max((((/* implicit */unsigned int) (_Bool)1)), (var_5))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (var_10))))))));
    var_15 = ((/* implicit */unsigned char) max((min((min((((/* implicit */unsigned int) (_Bool)1)), (2796020365U))), (max((var_1), (((/* implicit */unsigned int) var_3)))))), (((/* implicit */unsigned int) max((min((var_2), (var_7))), (min((var_3), (var_2))))))));
}
