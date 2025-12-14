/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55804
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
    var_19 = ((/* implicit */int) min((var_19), (min((((/* implicit */int) ((((/* implicit */unsigned long long int) (~(1474579251U)))) > (((((/* implicit */_Bool) (signed char)11)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))), ((~((-(((/* implicit */int) var_10))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (min(((~(var_12))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_17)))))))));
        var_21 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_13)), (max(((~(var_12))), (((/* implicit */unsigned int) var_6))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-6874))));
            var_23 = ((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)107))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_12)))))), (max((arr_3 [i_0]), (((/* implicit */long long int) ((var_12) << (((var_5) - (16102154921430625788ULL))))))))));
            arr_6 [i_0] [i_1] [2LL] = ((/* implicit */short) (-((~((-(((/* implicit */int) (unsigned short)58689))))))));
        }
        arr_7 [(short)0] [(short)0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        var_24 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))), (max((var_15), (var_12)))))));
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                var_25 = ((/* implicit */short) ((int) arr_10 [i_2] [i_2]));
                arr_15 [(unsigned short)6] [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(0)))) ? (var_16) : (((/* implicit */unsigned int) (+(var_4))))))));
            }
        } 
    } 
}
