/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60382
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) (-(-8494197824929185603LL)));
                var_17 = ((/* implicit */short) min((((/* implicit */int) ((short) arr_1 [i_1]))), ((~(arr_6 [i_0] [i_0] [i_0])))));
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 15; i_2 += 4) 
                {
                    arr_12 [i_2] [i_2] = ((/* implicit */int) ((unsigned char) (((_Bool)1) ? (8494197824929185593LL) : (((/* implicit */long long int) -1030104746)))));
                    var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [(short)0] [i_1] [i_2])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1]))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))));
                    arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [16LL] [i_2 - 2])) * (((/* implicit */int) arr_11 [i_2] [(_Bool)1] [i_0]))))) ? (((((/* implicit */_Bool) var_10)) ? (72057594037927935LL) : (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned short) (signed char)127))))))))) ? (((int) 9223372036854775807LL)) : ((+(((/* implicit */int) arr_8 [i_1]))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_4);
    var_20 = var_1;
    var_21 = (~(((/* implicit */int) ((_Bool) var_6))));
}
