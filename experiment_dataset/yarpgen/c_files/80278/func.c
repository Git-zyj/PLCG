/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80278
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) max((max((var_4), (((/* implicit */unsigned int) arr_0 [i_0])))), (3656446157U))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_19 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)130))) : (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_1])), (-4256044524784848113LL)))));
            var_20 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (-(var_3)))) : (var_0))) * (max((((var_7) / (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((var_9) / (-4256044524784848113LL))))))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned short) (-(-2820341071107382176LL)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((((/* implicit */_Bool) 1373259762)) ? (arr_7 [i_2]) : (((/* implicit */int) (unsigned short)55992)))) + (2147483647))) >> ((((+(-1))) + (7))))))));
        var_22 = arr_7 [i_2];
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8388607LL)))))));
        arr_8 [(unsigned char)4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)130)) << (9)))) & (arr_6 [i_2])))) ? ((+(((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (var_0)));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))), (var_4)))) ? (((/* implicit */long long int) ((int) (unsigned short)39859))) : (((((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_8))))) + (var_9)))));
}
