/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82615
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
    var_18 = max((var_6), (((/* implicit */long long int) var_14)));
    var_19 &= ((/* implicit */short) (unsigned char)24);
    var_20 = ((/* implicit */long long int) max((var_15), (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))))))));
    var_21 = ((/* implicit */int) (_Bool)1);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) < (18446744073709551606ULL))))));
        var_23 = ((/* implicit */signed char) ((((((176246155264613803LL) + (((/* implicit */long long int) ((/* implicit */int) var_2))))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_24 ^= ((/* implicit */long long int) ((min((((((/* implicit */int) (_Bool)1)) - (arr_4 [i_1] [i_1]))), (min((var_1), (((/* implicit */int) var_16)))))) > (((((/* implicit */_Bool) ((short) arr_4 [(unsigned short)16] [i_1]))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)57976))))))));
        arr_7 [i_1] [i_1] = ((short) arr_1 [5ULL] [5ULL]);
    }
}
