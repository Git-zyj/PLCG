/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78545
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
    for (int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */unsigned long long int) (+(arr_0 [(unsigned char)14])))) & (max((arr_2 [(short)8]), (((/* implicit */unsigned long long int) (unsigned short)44274)))))))));
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (2097151)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_1]))))) : (((((/* implicit */_Bool) (short)-12559)) ? (6072967600872507855LL) : (((/* implicit */long long int) ((/* implicit */int) (short)19357)))))))) ? (((/* implicit */int) arr_3 [i_0])) : (arr_4 [0LL]))))));
                arr_7 [i_0] = ((/* implicit */short) 8926181643863487315LL);
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(var_9))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)16286)), (-6072967600872507855LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2097144)))))) : (var_9)));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (((+(((((/* implicit */_Bool) 13624920794752407784ULL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))) == (((/* implicit */long long int) min((((-7) / (((/* implicit */int) (short)-10627)))), (((/* implicit */int) var_2))))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (short)-22737)) : (-569264577)))) + (max((((/* implicit */long long int) var_2)), (var_15)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((var_16) % (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
