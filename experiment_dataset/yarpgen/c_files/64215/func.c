/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64215
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
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((arr_1 [(short)12]) | (arr_1 [4U]))) >> (((min((arr_1 [6U]), (arr_1 [(unsigned short)16]))) - (357849961))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 2])) || (((/* implicit */_Bool) arr_3 [i_0 + 3] [i_1 - 1] [i_1 - 1]))))) > (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_1 - 2]) : (((/* implicit */unsigned int) arr_1 [i_0])))) > (((/* implicit */unsigned int) max((arr_3 [i_0] [i_1] [i_0]), (arr_4 [i_0] [i_1])))))))));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)42702))));
        }
    }
    var_20 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_15)), ((+(((/* implicit */int) var_1)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((var_10) - (10275243760507016943ULL)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))));
}
