/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87923
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
    var_13 ^= ((/* implicit */unsigned char) var_7);
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) max((max((max((var_1), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((var_2) / (var_2)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
        arr_3 [21] [(_Bool)1] = ((/* implicit */signed char) arr_2 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-3)) - (((((/* implicit */int) (signed char)33)) >> (((252852234513893933ULL) - (252852234513893911ULL)))))));
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
    {
        arr_12 [13] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2])) < (((/* implicit */int) arr_4 [i_2]))))), (max((((/* implicit */unsigned long long int) var_4)), (252852234513893929ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_10 [i_2]))))))))));
        var_17 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18193891839195657693ULL))) << (((252852234513893923ULL) - (252852234513893898ULL))))) | (((((/* implicit */_Bool) 18193891839195657685ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) : (((((/* implicit */_Bool) var_1)) ? (18193891839195657683ULL) : (252852234513893933ULL)))))));
    }
    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_9)) * (((/* implicit */int) var_0))))))), ((+(var_12)))));
}
