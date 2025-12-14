/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57805
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(var_13)));
        var_17 *= ((/* implicit */unsigned short) min((min((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_0 [i_0]))))), ((~(((/* implicit */int) (short)-18290)))))), (((((/* implicit */int) var_2)) & (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3537)))))))));
    }
    var_18 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)-3543)))))))));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_8 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_1] [(signed char)5])) >> (((((/* implicit */int) (signed char)39)) - (27))))))));
                var_19 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2] [i_1]))) : (3943816404904315850LL))))))) >= (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) ((signed char) var_14))) : (((/* implicit */int) var_4))))));
                arr_9 [i_1] [(_Bool)1] [i_1] = ((/* implicit */short) arr_6 [i_1] [i_1] [i_2]);
            }
        } 
    } 
}
