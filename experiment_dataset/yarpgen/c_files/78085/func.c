/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78085
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */signed char) min(((unsigned char)110), (((/* implicit */unsigned char) ((((var_5) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_13 = ((/* implicit */signed char) ((min((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) * (arr_2 [i_0]))), (((((/* implicit */_Bool) (unsigned char)114)) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_0] [i_1]))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_7)))))))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (unsigned char)142)))) >= (((/* implicit */int) arr_0 [i_0] [i_1]))));
        }
    }
    var_14 = ((/* implicit */unsigned long long int) ((int) var_2));
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (~(((/* implicit */int) (_Bool)0))))))));
}
