/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66660
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
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) min((4053135857U), (215562179U)));
                    arr_7 [i_0] [i_0 - 3] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), ((unsigned char)191)))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (short)-14820))))) : (((/* implicit */int) var_10))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (((((/* implicit */int) arr_1 [i_0] [i_1])) | (((/* implicit */int) var_8)))))) : (min((((/* implicit */int) ((unsigned short) (short)20239))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 4] [(unsigned short)3] [(unsigned short)11])) : (((/* implicit */int) (short)(-32767 - 1)))))))));
                    var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((299430464424654651LL) & (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_8)))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((var_7), (((/* implicit */short) ((signed char) var_8))))))));
    var_19 = ((/* implicit */short) (signed char)-85);
}
