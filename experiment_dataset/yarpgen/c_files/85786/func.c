/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85786
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
    var_16 = ((/* implicit */unsigned char) ((((var_3) | (((((/* implicit */int) var_8)) % (var_14))))) % (((((/* implicit */int) var_1)) + (((-2147483642) | (((/* implicit */int) var_11))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), (max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)225)) > (((/* implicit */int) (unsigned char)11))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)250)))))))), (max(((~(arr_0 [i_1]))), (((((/* implicit */int) (unsigned char)4)) - (((/* implicit */int) (unsigned char)13))))))))));
                var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned char)8])) - (max((((/* implicit */int) arr_3 [(unsigned char)9] [(unsigned char)9] [i_0])), (arr_0 [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((((/* implicit */int) (unsigned char)229)) | ((-(((/* implicit */int) (unsigned char)255))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_10);
    var_20 = (~((-(var_10))));
    var_21 &= max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255)))))))), (((((var_0) > (((/* implicit */int) var_7)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)243))) : (((/* implicit */int) max(((unsigned char)11), ((unsigned char)130)))))));
}
