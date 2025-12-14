/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7623
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
    var_16 = ((/* implicit */unsigned short) var_1);
    var_17 = ((/* implicit */unsigned short) max(((+(((var_4) + (((/* implicit */unsigned long long int) var_2)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_13)) : (var_4))) : (((/* implicit */unsigned long long int) (+(2097500977))))))));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((var_5) + (249024675)))))) ? (((/* implicit */long long int) ((/* implicit */int) (((-(8202347747218855691LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 1659203322)) ? (var_13) : (((/* implicit */int) (unsigned short)57418))))))))) : (((var_14) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)10)) <= (-317319299))))))))))));
    var_19 &= ((/* implicit */unsigned short) (-(((((/* implicit */int) ((signed char) 1125689581))) + (((/* implicit */int) ((((/* implicit */int) var_1)) != (2097500977))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) var_4);
        var_20 += ((/* implicit */int) (unsigned char)190);
        var_21 = ((((/* implicit */int) (unsigned char)78)) ^ (((/* implicit */int) arr_1 [i_0])));
    }
}
