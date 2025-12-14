/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73937
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
    var_14 = ((((((/* implicit */_Bool) 12863014278489431775ULL)) || ((_Bool)1))) ? (((var_13) - (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : ((((+(var_3))) - (((((/* implicit */_Bool) var_13)) ? (var_5) : (var_3))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [(_Bool)1] [i_0] = (+((-(arr_2 [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 += (!(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) var_9)))));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                    var_16 ^= ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) + (arr_2 [i_0] [i_0])))) ? (((arr_2 [i_0] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : ((-(arr_2 [i_1] [i_2]))));
                    var_17 *= ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_1] [17ULL])) != (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) < (((/* implicit */int) (!(arr_0 [i_0])))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_18 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) var_6))))));
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_11 [i_0])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(arr_5 [i_0] [i_0] [i_3]))))))) : ((~(arr_4 [i_0])))));
                    var_19 -= arr_0 [i_0];
                }
            }
        } 
    } 
    var_20 ^= ((/* implicit */_Bool) (~((~((~(((/* implicit */int) var_1))))))));
    var_21 = ((/* implicit */_Bool) (+(var_10)));
}
