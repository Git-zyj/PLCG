/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78966
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = min(((unsigned char)2), ((unsigned char)254));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)254))))) ? (var_15) : (((/* implicit */unsigned long long int) min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1]))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)16))))), (min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned int) var_14))))))) * (((var_15) & (((/* implicit */unsigned long long int) min((arr_2 [i_1] [i_1]), (arr_3 [i_1] [i_1]))))))))));
    }
    var_20 += ((/* implicit */short) var_2);
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((max((((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned char)254)))), (((/* implicit */int) min(((unsigned char)254), (var_12)))))) >> (((/* implicit */int) min(((unsigned char)13), (((/* implicit */unsigned char) (signed char)-121))))))))));
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(min((var_8), (((/* implicit */int) var_14)))))))));
}
