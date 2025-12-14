/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68943
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
    var_17 = ((/* implicit */unsigned char) ((((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_0)))) - (((/* implicit */int) var_9)))) / (((/* implicit */int) var_7))));
    var_18 ^= ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */unsigned char) var_10);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_3))))))) <= (((1099511627648LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_11 [(unsigned char)14] [i_1] [(unsigned char)14] = ((/* implicit */_Bool) max((((/* implicit */int) ((short) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_8)))))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)240))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_7 [i_1]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_2 [i_0])))) * (((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) max((arr_8 [i_0] [i_1] [i_2]), (arr_8 [i_0] [i_1] [i_1])))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (arr_6 [i_0])))))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0])), (arr_6 [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_2]))));
                }
            } 
        } 
    } 
}
