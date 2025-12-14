/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57739
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
    var_19 = ((/* implicit */unsigned char) ((_Bool) min((((((/* implicit */_Bool) (short)26309)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (short)-26310)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */long long int) (((-(1181840637U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) : (min((((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), (var_0)))), (1479408417623375072LL))));
        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) | (((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23603)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3113126658U)) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) arr_1 [i_0]))), ((-(((/* implicit */int) arr_3 [(unsigned char)9] [i_1] [(unsigned char)9]))))))) : (((unsigned int) min((((/* implicit */long long int) (_Bool)1)), (arr_7 [i_1] [(signed char)12] [i_2] [i_1]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) var_4)))));
                        var_21 += ((/* implicit */long long int) min((((/* implicit */int) arr_10 [i_0] [i_0])), (min((((/* implicit */int) arr_4 [i_3])), (((((/* implicit */_Bool) 7069897947241955356LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))));
                        var_22 = ((/* implicit */unsigned short) 983086253U);
                        arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_6 [i_0] [i_2]), (arr_6 [i_1] [i_0]))))));
                    }
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((min((((/* implicit */int) arr_1 [i_2])), ((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_2])))))), (min(((-(((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) arr_5 [i_1])))))))));
                    arr_14 [i_0] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)102)) | (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_2])) + (123)))));
                }
            } 
        } 
    }
}
