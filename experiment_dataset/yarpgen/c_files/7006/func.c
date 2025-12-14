/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7006
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
    var_12 = var_11;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) ^ (((int) ((((/* implicit */_Bool) (short)-26271)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15037767783593822727ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2]))))) : (((/* implicit */int) max((((/* implicit */short) var_9)), ((short)-26263)))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(unsigned char)14] [i_1])) || (((/* implicit */_Bool) var_3)))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_11))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_0] [16U] [i_0])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (arr_7 [i_0] [(unsigned short)4] [i_0])))));
        var_18 += (-(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) (signed char)7)))));
    }
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_2))));
    var_20 = ((/* implicit */long long int) (+(min((var_7), (15037767783593822727ULL)))));
    var_21 ^= ((/* implicit */_Bool) var_7);
}
