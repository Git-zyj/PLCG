/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70239
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [(unsigned char)3] [(unsigned char)3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)7]))) : (((((/* implicit */_Bool) 4294967295U)) ? (3384087804890542411LL) : (((/* implicit */long long int) var_12))))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3384087804890542406LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_13))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))))))));
        arr_3 [i_0] [(unsigned char)14] = ((/* implicit */long long int) var_9);
        arr_4 [i_0] = ((/* implicit */unsigned char) max((min((var_12), (var_12))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)52154)) || (((/* implicit */_Bool) 3384087804890542411LL)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((/* implicit */long long int) var_1)), (max((3384087804890542413LL), (3384087804890542413LL))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7907670205719731046LL)) ? (2539087840215637755LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((((/* implicit */_Bool) -3384087804890542407LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : (var_12))))));
        arr_8 [i_1] = ((/* implicit */long long int) ((unsigned char) arr_6 [i_1] [i_1]));
        arr_9 [i_1] = ((/* implicit */unsigned char) var_11);
    }
    var_22 = ((/* implicit */unsigned char) var_12);
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_7)) << (((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) var_2))))) >= (min((((/* implicit */long long int) var_9)), (3384087804890542413LL)))))) : (((/* implicit */int) ((unsigned char) max((var_6), (977628588249408490LL)))))));
}
