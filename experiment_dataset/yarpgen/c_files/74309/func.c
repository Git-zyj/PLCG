/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74309
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
    var_16 = ((/* implicit */signed char) ((max((var_3), (((/* implicit */unsigned long long int) var_14)))) > (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_2))) << (((var_15) + (1996543564))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) var_9);
                    /* LoopSeq 1 */
                    for (int i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        var_18 -= ((/* implicit */unsigned char) arr_7 [i_1] [i_3] [i_1]);
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned short) max((arr_6 [i_1] [i_3] [i_2] [i_1]), (((/* implicit */short) arr_0 [i_0]))))), (max((arr_2 [i_0]), (((/* implicit */unsigned short) arr_10 [i_3] [(unsigned short)2] [i_2] [i_2]))))))), (arr_8 [i_0] [i_0 + 1] [i_0]))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_3);
}
