/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79967
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
    var_11 = ((/* implicit */unsigned long long int) var_6);
    var_12 = ((/* implicit */int) var_4);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_1))) ? (2305843009213693951LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (var_4)))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((var_0), (((/* implicit */short) var_5)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)32767)));
        arr_4 [(_Bool)1] [11LL] = ((/* implicit */unsigned short) ((((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) var_7))))) ? (min((((/* implicit */int) var_1)), (arr_0 [i_0 - 1]))) : (((/* implicit */int) min((arr_1 [(short)13]), (((/* implicit */unsigned short) var_10)))))))));
    }
    for (short i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7442379215390526572LL)))))) == (min((2305843009213693961LL), (2305843009213693951LL)))))) == (((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)65535))))));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((max((arr_0 [i_1 + 3]), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) -324877025))))))) * (((((/* implicit */int) ((((/* implicit */int) (signed char)-46)) <= (arr_0 [i_1])))) * (((/* implicit */int) var_1))))));
    }
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42620)) && (((/* implicit */_Bool) var_10))))))))))));
}
