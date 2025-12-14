/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77092
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (8237640135057623792LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((var_6), (((/* implicit */unsigned long long int) var_12)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(-4321144129518899452LL))))))));
        var_14 = var_6;
    }
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)56)) | (((/* implicit */int) (signed char)-86))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18950)) ? (var_8) : (((/* implicit */unsigned long long int) var_1)))))))), (var_8)));
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((var_6), (((/* implicit */unsigned long long int) var_7)))))));
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) var_2))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2169521687520423421LL)))))) >> ((((((~(var_1))) & (((/* implicit */unsigned int) var_7)))) - (2149590048U)))));
}
