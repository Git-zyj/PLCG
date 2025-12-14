/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86183
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_1 [(signed char)8] [i_0 - 1]))) << (((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned short)14829))))))));
                    arr_8 [i_2] [(unsigned short)7] = ((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))))) : (((((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2])) << (((((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 1])) - (82))))));
                    var_16 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (signed char)-95))))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((((/* implicit */int) (signed char)115)) ^ (((/* implicit */int) (unsigned short)50706)))))) + (((((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2])) & (((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_2] [i_2] [i_2])), (var_2))))))));
                    var_17 -= ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [3] [3] [i_2])), ((+(((/* implicit */int) var_7))))))) ? (max((((/* implicit */int) (signed char)-97)), ((+(((/* implicit */int) (signed char)48)))))) : ((-(var_9))));
                    arr_9 [i_0 - 2] [i_1] [(unsigned short)2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)60))))) ? (((/* implicit */int) min((var_14), (((/* implicit */unsigned char) arr_5 [i_2] [i_2] [i_2] [i_2]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)16)), ((unsigned short)3667)))))) < (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) arr_4 [i_0 - 2])) : (((/* implicit */int) (signed char)-27))))));
                }
                var_18 ^= ((/* implicit */signed char) arr_1 [i_0] [i_1]);
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((((((/* implicit */int) (signed char)-62)) > (((/* implicit */int) var_7)))) ? (((var_9) + (var_15))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)26))))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
    var_21 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_2)) ^ (var_5))))));
}
