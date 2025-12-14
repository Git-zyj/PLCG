/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8423
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 352649484523651582LL)) ? (((771039463121677554LL) * (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)210)) >> (((((/* implicit */int) (unsigned short)15547)) - (15526)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min(((short)-32185), (((/* implicit */short) (_Bool)1))))) <= (((/* implicit */int) var_8))))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) min((((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1)))), (var_0))))));
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) max((var_13), (var_1))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2 + 1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)161))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_2 - 1] [i_1])))) + (2147483647))) >> (((/* implicit */int) max((arr_5 [i_2 + 2]), (arr_5 [i_2 - 1])))))))));
                    arr_11 [i_2] [i_2] [i_2 + 1] = ((/* implicit */signed char) min((max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))), ((~(((/* implicit */int) (short)32185))))));
                    var_18 = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) - (((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
}
