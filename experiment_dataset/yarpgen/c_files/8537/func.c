/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8537
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
    var_16 = ((((/* implicit */int) var_2)) * (((((/* implicit */int) (unsigned char)189)) / (-1926139912))));
    var_17 = (+(min((((int) var_4)), ((-(((/* implicit */int) var_1)))))));
    var_18 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_7 [i_0] = arr_3 [i_0] [i_1];
                arr_8 [i_0] [i_0] [i_1] = arr_5 [i_0];
                var_19 *= ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))), (arr_2 [(unsigned char)8] [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */int) arr_1 [i_1] [i_1]))))) ? ((~(arr_6 [i_0] [i_1]))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)254)), ((short)-21713))))))));
            }
        } 
    } 
}
