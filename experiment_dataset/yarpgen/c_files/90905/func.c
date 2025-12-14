/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90905
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_8 [(unsigned short)5] [(short)11] [i_2] = (+(arr_3 [i_1 + 1]));
                    var_10 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_2 + 1] [i_1 + 2]))))));
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)41163)) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_1] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 + 1] [i_1 + 2] [i_0] [(_Bool)1]))));
                }
                arr_9 [i_0 - 1] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_1 + 1])) <= (arr_3 [i_0 + 1]))), ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_6))) <= (((/* implicit */long long int) (+(arr_2 [i_0] [9]))))))));
                var_12 = ((/* implicit */signed char) 320468629114968700LL);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_9))));
}
