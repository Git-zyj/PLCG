/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73504
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_0))));
    var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_4)))) && ((((!(var_0))) || ((!(((/* implicit */_Bool) var_11))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_6))))))) ? (min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 7976395182371074603LL)) ? (-7976395182371074603LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
        var_19 *= ((/* implicit */short) ((((arr_1 [i_0] [i_0]) ? (7976395182371074602LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) == (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_6))));
    }
    for (short i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        var_21 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_5 [i_1 - 1]))))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (0U))))) >= (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_0))))), (var_10)))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) var_1);
        arr_11 [i_2] = ((/* implicit */long long int) ((unsigned long long int) (((~(var_7))) == (arr_8 [i_2]))));
    }
    var_23 = ((/* implicit */short) 3069057938342945524ULL);
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | ((+(((/* implicit */int) (signed char)(-127 - 1)))))));
}
