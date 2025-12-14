/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6865
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_4 [15U] [(signed char)6] &= ((/* implicit */long long int) max((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1]))) : (arr_3 [(_Bool)1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) ((_Bool) 4294967295U))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))) <= (arr_3 [5LL])))))))));
        var_16 -= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) arr_1 [(_Bool)1])) > (((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))))), (((((/* implicit */int) ((signed char) arr_2 [i_0]))) ^ (((/* implicit */int) ((signed char) var_10)))))));
        var_17 = var_14;
    }
    var_18 += ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)197)) - (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)200))))))), (((long long int) var_5))));
    var_19 = ((/* implicit */unsigned char) var_0);
}
