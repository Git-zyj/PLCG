/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5721
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_5)))), (((((/* implicit */int) var_5)) + (((/* implicit */int) (short)0))))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24291)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */short) ((((/* implicit */int) ((arr_3 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)8] [i_0])))))) ^ (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_16 = ((/* implicit */int) 8860722550312305352LL);
            arr_8 [i_0] = var_3;
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        }
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_18 = ((/* implicit */long long int) max((var_18), (arr_5 [i_2])));
            var_19 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (short)-24293)) >= (((/* implicit */int) var_5)))))));
            arr_14 [(unsigned short)4] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (arr_7 [i_0] [i_0] [i_0])));
        }
    }
    var_20 = ((/* implicit */unsigned char) (!(var_2)));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_0)) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_9)))))))))));
}
