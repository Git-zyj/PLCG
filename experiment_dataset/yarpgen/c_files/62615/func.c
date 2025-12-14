/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62615
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)153)))) * (((/* implicit */int) min(((signed char)-52), ((signed char)-58))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (var_7) : (((/* implicit */unsigned long long int) (~(var_8)))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((((/* implicit */int) var_18)) - (20)))))) ? (((/* implicit */unsigned long long int) ((-6LL) % (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_11)), (var_12)))))))) : (((max((var_15), (((/* implicit */unsigned long long int) var_5)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (var_2))))))));
    var_21 = ((/* implicit */long long int) ((_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (262143) : (((/* implicit */int) (signed char)-36))))), (var_7))));
    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_15)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */short) var_1);
                arr_5 [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))));
                arr_6 [(signed char)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (signed char)43))) ? ((~(((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))));
                var_24 ^= ((/* implicit */long long int) ((-1632181506163701556LL) < (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)21)))))));
            }
        } 
    } 
}
