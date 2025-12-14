/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84963
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
    var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min(((unsigned short)12359), ((unsigned short)12381)))))) >= (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 -= ((/* implicit */unsigned char) var_3);
                    var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [(_Bool)1] [i_1] [(short)2])) <= (((/* implicit */int) var_5)))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [(short)2] [i_1] [i_2]))))), (((unsigned int) ((arr_1 [i_1] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_2] [(_Bool)1]))))))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_5))))), (min(((unsigned short)12349), (((/* implicit */unsigned short) (_Bool)1))))))), (min((((unsigned int) var_8)), (((/* implicit */unsigned int) max((var_9), (((/* implicit */short) var_5)))))))));
}
