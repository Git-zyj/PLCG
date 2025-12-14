/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83182
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [(signed char)18] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) arr_0 [i_0])) : (((int) var_12))));
        var_20 = ((/* implicit */short) var_2);
        var_21 = 1423336407;
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    arr_12 [i_1 - 1] [i_1 - 1] [i_3] [i_3] = ((/* implicit */short) var_8);
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)126)), (((((/* implicit */_Bool) var_2)) ? (arr_9 [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (var_13)))), (max((16ULL), (((/* implicit */unsigned long long int) arr_4 [i_2]))))))));
                    var_23 = ((/* implicit */signed char) ((unsigned int) (unsigned char)29));
                }
            } 
        } 
        var_24 = (+(var_10));
    }
    for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned short) (+(((long long int) min((9ULL), (((/* implicit */unsigned long long int) (short)-32037)))))));
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_4] [i_4] [i_4]))))), (((((/* implicit */unsigned int) var_19)) & (arr_6 [i_4]))))))))));
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32036))) - (var_12)));
    var_27 = ((/* implicit */int) max((var_27), (var_4)));
}
