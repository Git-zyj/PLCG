/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86341
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
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((+(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9)))))) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_14)))) - (233)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) min((var_21), (max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 657048658)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (unsigned char)239))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [(signed char)12])))) : (((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0])))))), ((-((-(((/* implicit */int) arr_1 [i_0]))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_2 [i_0 + 3] [i_0 + 3]))))));
                    arr_6 [i_2] = min((((((arr_4 [i_2 - 2] [i_1] [i_0 + 4]) < (arr_3 [i_0]))) ? (((((/* implicit */_Bool) arr_2 [i_2 - 2] [0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_2 [i_0] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))), (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_0 [i_2]))))))));
                }
            } 
        } 
        arr_7 [i_0 + 4] [i_0] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0 + 4] [(signed char)14])) ? (arr_5 [i_0 - 1] [(signed char)0]) : (arr_4 [i_0 + 3] [i_0 + 3] [i_0 + 2]))) > (min((min((1748437537), (((/* implicit */int) (unsigned char)189)))), (-1748437538)))));
    }
}
