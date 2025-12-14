/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84969
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 = ((((/* implicit */_Bool) max((((unsigned long long int) var_16)), (((unsigned long long int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(var_11))) : (((var_3) ^ (arr_2 [6LL]))))));
                arr_4 [18LL] [18LL] = ((/* implicit */int) min((((long long int) min((arr_2 [3ULL]), (var_15)))), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 8634700201736696350LL)) < (14065331940610264538ULL)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((unsigned short) (unsigned short)6129)))));
}
