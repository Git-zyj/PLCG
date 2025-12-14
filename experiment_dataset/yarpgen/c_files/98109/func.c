/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98109
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)99), (((/* implicit */unsigned char) arr_1 [i_0])))))) : (var_5))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (arr_0 [9LL])))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1]))) <= (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
        arr_6 [i_0] = ((/* implicit */short) (-(min((arr_0 [i_0 - 2]), (((/* implicit */long long int) max((((/* implicit */short) (unsigned char)255)), (var_9))))))));
    }
    var_10 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)17296)) : (((/* implicit */int) (unsigned char)25))))) ? (var_5) : (((/* implicit */long long int) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) (short)32495)) ? (((min((var_5), (((/* implicit */long long int) var_2)))) / (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) (-(((int) (unsigned char)207))))))))));
    var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) | (var_5))), (((/* implicit */long long int) max((var_9), ((short)-13763))))))) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) var_2))));
}
