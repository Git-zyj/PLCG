/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58925
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
    var_15 = ((/* implicit */unsigned int) var_4);
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((signed char) var_13))), ((-(-1LL)))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (((-(((/* implicit */int) var_3)))) >= (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_13)) : (-1LL))))))))));
    var_18 = ((/* implicit */unsigned char) min((4072300500819852829ULL), (((/* implicit */unsigned long long int) -2496986530361435150LL))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)252))) ? (((((/* implicit */unsigned int) var_7)) & (arr_7 [i_2] [i_2] [i_2 + 1] [i_2 + 2]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)3)), ((short)-12640)))))))));
                        arr_12 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) 24LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_1] [i_2]))))) & (((/* implicit */long long int) (-(((/* implicit */int) (signed char)70))))))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_1 [i_3])))))));
                    }
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((1472218234104281801ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2 + 1] [i_2] [i_0])) : (arr_2 [i_1] [i_0]))))));
                    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_3 [i_2 + 1]), (((/* implicit */signed char) ((24LL) >= (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
                }
            } 
        } 
    } 
}
