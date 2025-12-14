/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61186
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
    var_15 = ((/* implicit */unsigned int) (+(max(((~(((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */short) (signed char)55))))), (var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9899244531241511815ULL)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0])))))))));
        arr_3 [(unsigned short)13] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) ((unsigned short) arr_5 [i_1]))) : ((+(((/* implicit */int) var_3)))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (signed char)113))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (arr_5 [i_1])));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_19 = ((/* implicit */signed char) ((min((arr_7 [i_2] [i_1] [i_1]), (arr_4 [i_1]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) arr_4 [i_2]))))) << (((var_10) - (589871476U))))))));
            var_20 = ((/* implicit */_Bool) var_3);
        }
        for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_3] [0LL]))));
            arr_12 [i_3] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_1]))) : (arr_5 [i_1])))) : (arr_10 [i_1] [i_1] [i_3])))) ? (((unsigned long long int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-51)))));
        }
        arr_13 [i_1] = ((/* implicit */short) ((unsigned int) ((arr_10 [i_1] [i_1] [i_1]) >> (((340048928846311951LL) - (340048928846311949LL))))));
    }
    var_22 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_12)))))) <= (var_7))) ? ((~(-9223372036854775797LL))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
}
