/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94147
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
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-4731))));
    var_17 += ((/* implicit */_Bool) ((8589934576ULL) & (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)187)), (0LL))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (arr_0 [12LL] [i_0]))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned short) (unsigned char)187)))))))) ? (((int) ((arr_2 [i_0 + 1] [7]) || (((/* implicit */_Bool) arr_1 [(short)10]))))) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0]))));
        arr_4 [i_0] = arr_1 [i_0];
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (short)4730))));
    }
    for (int i_1 = 2; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) max(((-(((/* implicit */int) (short)-11166)))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(2147483647))))));
        var_22 ^= ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned char)187)) < (((/* implicit */int) (unsigned char)186)))), ((_Bool)0)));
    }
    for (int i_2 = 2; i_2 < 11; i_2 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4730))))) : (3603588151950322475LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((var_13) > (((/* implicit */int) var_11))))) : (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_10))))))))));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_0)))))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (3174294068272602449LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14117))))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) max((max((var_15), (((/* implicit */long long int) arr_6 [i_2])))), (((/* implicit */long long int) ((arr_0 [i_2 - 2] [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
        arr_12 [i_2] = ((/* implicit */signed char) ((unsigned char) (-(arr_7 [i_2]))));
        var_25 = ((/* implicit */unsigned short) var_11);
    }
}
