/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95548
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))))));
                    var_14 = ((/* implicit */long long int) arr_2 [i_2]);
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)10])) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (min((arr_5 [i_0] [i_1] [i_2] [i_0]), (((/* implicit */unsigned int) arr_4 [(short)12])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)24]))))))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((arr_5 [i_0] [(unsigned short)1] [i_0] [i_0]), (((/* implicit */unsigned int) arr_3 [(_Bool)1] [12LL] [12LL]))))))) ? (max((((/* implicit */unsigned int) arr_3 [i_0] [20] [i_0])), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) arr_3 [22U] [(short)18] [22U]))))) ? (((/* implicit */int) arr_4 [8U])) : (((/* implicit */int) (unsigned short)10139)))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [(unsigned short)12]), (arr_4 [(signed char)6])))) ? (((/* implicit */int) arr_3 [i_0] [0U] [i_0])) : (((((/* implicit */_Bool) 14443599564949401959ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))));
        var_17 = ((/* implicit */int) (unsigned char)147);
    }
    var_18 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5385451166944986678LL))));
}
