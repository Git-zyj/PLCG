/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94083
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
    var_11 = ((/* implicit */signed char) min((min((var_2), (((/* implicit */unsigned short) var_7)))), (((/* implicit */unsigned short) min((((/* implicit */signed char) var_7)), (((signed char) (unsigned char)170)))))));
    var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) (signed char)52)) : ((~(((/* implicit */int) (signed char)-49)))))) == (((((/* implicit */_Bool) (signed char)-50)) ? ((-(((/* implicit */int) (signed char)70)))) : ((+(((/* implicit */int) (signed char)-92))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = min((min((min((arr_3 [i_0] [i_0] [(unsigned short)8]), ((unsigned char)48))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [(unsigned short)1] [i_1] [i_1])) < (((/* implicit */int) (signed char)-80))))))), (((/* implicit */unsigned char) max(((signed char)-46), ((signed char)-67)))));
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (unsigned char)64)))) : (((((/* implicit */int) arr_3 [i_0] [(signed char)3] [i_0])) + (((/* implicit */int) (signed char)-56)))))) << (((min((((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_2)))), (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_2 [i_0])))))) - (27)))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((var_0) ? ((~(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) min(((unsigned char)155), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_3);
}
