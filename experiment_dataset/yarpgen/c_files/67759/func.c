/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67759
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
    var_10 = ((/* implicit */long long int) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [1U] [i_1] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
                        var_12 = ((/* implicit */signed char) (-(arr_1 [i_0])));
                        arr_13 [i_3] [i_1] = ((/* implicit */signed char) arr_6 [i_0]);
                    }
                    arr_14 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))))), (var_3)));
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((arr_1 [i_0]) > (arr_1 [i_0]))) && (((/* implicit */_Bool) (+(arr_1 [i_1])))))))));
                    var_14 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_2]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned long long int) 2741737004737670349LL)), (1ULL))));
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_4))));
}
