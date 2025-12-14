/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87843
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
    var_11 = ((/* implicit */signed char) var_7);
    var_12 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (~(((/* implicit */int) min((((short) arr_1 [i_0] [i_1])), (((/* implicit */short) arr_5 [(unsigned char)6] [i_2]))))))))));
                    var_14 = max((((/* implicit */long long int) arr_3 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_4 [i_1]))))) ? (((((/* implicit */_Bool) 16499476524849946496ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_6))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)1023))))))));
                    arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (arr_1 [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_0 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6061))))))))) ? (max((((/* implicit */unsigned int) (_Bool)0)), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_1 + 1])), ((unsigned char)21)))))));
                }
            } 
        } 
    } 
}
