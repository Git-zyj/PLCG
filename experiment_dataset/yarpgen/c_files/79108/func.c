/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79108
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
    var_10 = ((/* implicit */_Bool) (short)-15486);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6329773440503164105ULL)))))) : (12116970633206387493ULL))))));
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((int) var_0))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) arr_3 [i_1]);
        var_14 = (((-(((/* implicit */int) var_9)))) == (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])));
        var_15 = ((int) var_0);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_6 [i_2]) | (((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(var_2)))) : (((/* implicit */int) var_0))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((430860921U) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((((arr_7 [i_3] [i_3]) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((arr_7 [i_3] [i_3]) % (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
        var_19 = ((/* implicit */unsigned short) arr_3 [(unsigned char)22]);
        arr_9 [i_3] &= ((/* implicit */_Bool) ((int) (~(arr_3 [4LL]))));
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (max((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (149755685U))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) var_0))))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_0))))) : (var_7)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))));
}
