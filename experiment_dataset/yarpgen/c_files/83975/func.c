/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83975
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
    for (int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) 1546270872872491773ULL);
                    arr_7 [i_0 - 1] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)95);
                }
            } 
        } 
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_3 [4LL])))) ? (max((((/* implicit */unsigned long long int) var_5)), (max((arr_5 [i_0 - 1] [i_0] [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))))))));
        var_17 = ((/* implicit */short) (-((+(((/* implicit */int) var_14))))));
    }
    for (long long int i_3 = 4; i_3 < 9; i_3 += 3) 
    {
        var_18 |= ((/* implicit */unsigned char) var_8);
        arr_10 [i_3] = ((/* implicit */signed char) ((16900473200837059855ULL) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (var_8)))))))));
    }
    var_19 = ((/* implicit */unsigned short) var_7);
    var_20 = ((/* implicit */long long int) var_1);
    var_21 = ((/* implicit */unsigned long long int) (+(((int) var_7))));
}
