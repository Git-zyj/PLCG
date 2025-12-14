/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77822
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)139)), ((short)-18381))))))) ? (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) var_6))))) : (max((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))));
    var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (min((0ULL), (((/* implicit */unsigned long long int) 2348386901U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1)))))))));
    var_20 = ((/* implicit */int) var_11);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_3 [(unsigned short)3] = ((/* implicit */_Bool) (unsigned char)63);
        var_21 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) (~(arr_2 [i_0])))), (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) 572778260))))))));
        var_22 &= var_8;
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1]);
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((arr_6 [(unsigned short)16]) ? (((/* implicit */int) arr_6 [20])) : (((/* implicit */int) arr_6 [(_Bool)1])))))));
        arr_8 [(unsigned short)8] |= ((/* implicit */signed char) arr_4 [(unsigned short)8] [(unsigned short)8]);
        arr_9 [i_1] = ((/* implicit */unsigned short) (unsigned char)8);
    }
}
