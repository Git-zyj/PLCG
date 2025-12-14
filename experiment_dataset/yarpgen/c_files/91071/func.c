/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91071
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 2147483624))));
    var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((2147483611), (2147483624))) / (((/* implicit */int) var_8))))) ? (max((((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */int) var_3)))), ((+(((/* implicit */int) var_10)))))) : (((((/* implicit */int) ((unsigned char) 2147483615))) * (((/* implicit */int) var_17))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (signed char)4);
        var_21 += ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (-2147483611) : (((/* implicit */int) (unsigned short)65517)))))) : (((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) var_17)), (var_1))))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (+(arr_1 [i_0])));
        var_22 += ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7614100278784508274LL)) ? ((~(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) 5579855570666866661LL)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (signed char)25))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)24))))) ? (((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */long long int) -2147483611)) : (var_0))))))));
    }
    var_23 &= ((/* implicit */unsigned long long int) var_11);
}
