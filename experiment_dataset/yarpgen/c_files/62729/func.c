/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62729
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
    var_14 += ((((/* implicit */_Bool) max(((-(var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_11)))))))) || (((/* implicit */_Bool) (~(((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_3 [i_1 + 1]));
            var_15 = ((/* implicit */_Bool) 2175891356824133246LL);
        }
        arr_6 [i_0 - 1] = ((/* implicit */_Bool) var_7);
        var_16 = ((/* implicit */long long int) (~(arr_2 [i_0] [i_0])));
        var_17 = ((/* implicit */_Bool) min((var_17), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), ((+(var_2))))))))));
        var_18 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)101))) : (-2175891356824133255LL)))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24716)) && ((_Bool)1)));
}
