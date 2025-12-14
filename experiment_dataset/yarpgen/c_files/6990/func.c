/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6990
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) ? (var_6) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) ((_Bool) var_2)))))) : (max((1312352967U), (((/* implicit */unsigned int) ((1312352957U) == (((/* implicit */unsigned int) 1944815933)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38946)))))) ? (((((arr_0 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */long long int) 4294967287U)) : (90641521767614894LL))))));
        var_13 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 19ULL)) ? (5693049361069284771LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28913)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(((max((arr_0 [i_1] [8ULL]), (((/* implicit */unsigned long long int) (_Bool)1)))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)25))))))))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(2620369641U))), (((1312352963U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26589)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4294967273U)))) ? (((((/* implicit */_Bool) -605081140611817216LL)) ? (((/* implicit */unsigned long long int) 70368744177663LL)) : (arr_0 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) (-(arr_1 [i_1])))))))));
    }
    var_16 = ((/* implicit */unsigned short) min((0ULL), (((/* implicit */unsigned long long int) ((signed char) (_Bool)1)))));
}
