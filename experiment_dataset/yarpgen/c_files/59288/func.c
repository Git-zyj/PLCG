/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59288
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
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) (+(((arr_2 [i_0 - 1] [i_0 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))));
        var_15 *= ((/* implicit */unsigned long long int) (unsigned short)22246);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0 + 1] [i_0 + 1]))) ? (((((/* implicit */_Bool) var_5)) ? (4294967270U) : (((/* implicit */unsigned int) -811761116)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
    }
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_13))))), (var_1))))));
    var_18 = (unsigned short)22246;
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            {
                var_19 &= ((((/* implicit */_Bool) ((((/* implicit */long long int) 2U)) / (-3132979828595331722LL)))) ? (((/* implicit */int) arr_5 [i_1])) : (var_12));
                arr_8 [i_1] [i_2] [6] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)43284)))) : (((unsigned int) var_0)))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_5 [i_1]))));
                var_21 = ((/* implicit */_Bool) var_3);
            }
        } 
    } 
}
