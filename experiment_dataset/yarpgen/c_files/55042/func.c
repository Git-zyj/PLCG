/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55042
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
    var_10 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (max((((/* implicit */long long int) (unsigned char)14)), (var_0)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max((var_1), (((/* implicit */unsigned long long int) 2052589007)))))));
                        arr_10 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_2])), (max((arr_3 [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)22)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_1] [i_0])) ? (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) 849731381)))) : (arr_8 [i_0] [i_3]))))));
                        arr_11 [i_2] = ((/* implicit */unsigned short) 8885220010056283160LL);
                    }
                }
            } 
        } 
    } 
}
