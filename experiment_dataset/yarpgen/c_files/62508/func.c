/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62508
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
    var_14 -= ((/* implicit */unsigned char) max((((((((/* implicit */int) var_5)) & (((/* implicit */int) var_8)))) << (((((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned char)57)))) - (46))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 7; i_2 += 1) 
            {
                {
                    var_15 -= ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */short) var_7)), (var_13)))) ? (min((((/* implicit */unsigned long long int) arr_3 [2ULL] [i_1])), (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)57)) * (((/* implicit */int) var_6))))))), (((((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)4] [i_2]))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) arr_3 [(unsigned char)8] [(unsigned char)8])))))))));
                    var_16 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [6U]))))) % (max((var_11), (arr_2 [8ULL])))));
                    var_17 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned char)194))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((((/* implicit */int) var_8)) | (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))))));
}
