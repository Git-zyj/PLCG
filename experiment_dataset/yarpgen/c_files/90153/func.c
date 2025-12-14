/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90153
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
    var_15 = ((/* implicit */unsigned char) (~(4255233513318076166ULL)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (370458737U)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) var_3))))) : (((/* implicit */int) arr_2 [i_0]))))) < ((~(4255233513318076156ULL)))));
        var_17 = ((/* implicit */unsigned long long int) max((-6732717903694592814LL), (((/* implicit */long long int) ((_Bool) -3266504790267019945LL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
    }
    var_18 = ((/* implicit */short) ((min((((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)20)), ((short)-18)))), (var_7))) << ((((~(((/* implicit */int) ((var_9) > (var_7)))))) + (10)))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (14191510560391475423ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)50290), (((/* implicit */unsigned short) (unsigned char)1)))))))))));
}
