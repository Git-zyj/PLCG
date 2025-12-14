/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86455
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) - (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((((/* implicit */_Bool) var_8)) ? (var_5) : (var_4))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 + 1])))) ? (arr_2 [i_0 - 2]) : (min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1]))))))));
                        arr_12 [i_3] = ((/* implicit */unsigned short) ((arr_5 [i_1] [i_1] [i_1]) & (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22667))) & (1073741568ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)5]))) : (arr_5 [i_0] [i_1] [i_3])))))));
                    }
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)7))) ? (((/* implicit */int) (unsigned short)1216)) : (((/* implicit */int) min((arr_9 [i_0 + 1] [i_2]), (arr_9 [i_0 + 1] [i_2]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (_Bool)1);
}
