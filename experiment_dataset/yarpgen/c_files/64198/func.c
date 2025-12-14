/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64198
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
    var_18 *= ((/* implicit */signed char) var_2);
    var_19 &= ((/* implicit */unsigned long long int) ((short) (_Bool)1));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? ((~(((var_1) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((short)8191), (((/* implicit */short) var_0))))))))))))));
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 2147483634)), (var_10)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */int) ((long long int) var_12));
                arr_7 [i_0] [i_0] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_1)), (arr_3 [i_1])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (576460752303423487ULL)))))));
                var_22 = ((/* implicit */short) 11983953759955403400ULL);
                arr_8 [(_Bool)0] [(_Bool)0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6202017858576211673ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0] [i_1]) && (((/* implicit */_Bool) var_12)))))) : (arr_4 [i_1]))));
            }
        } 
    } 
}
