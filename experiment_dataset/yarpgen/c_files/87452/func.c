/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87452
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
    var_13 = max((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 8935141660703064064ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_8)))), ((~(((/* implicit */int) var_10)))));
    var_14 = var_6;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), ((unsigned short)120)))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))))));
        arr_3 [i_0 + 2] = var_10;
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) (-(arr_5 [i_1] [i_1])));
        arr_8 [i_1] = max(((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_1])) : (-307280935))))), (((/* implicit */int) max((((/* implicit */short) arr_6 [i_1])), (var_12)))));
        arr_9 [i_1] = ((/* implicit */short) (!(arr_4 [i_1])));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 5934650825581179242LL)) ? (-5266264944731555557LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3)))));
        arr_10 [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_5 [i_1] [i_1])))) : (((long long int) arr_5 [i_1] [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((arr_4 [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (arr_11 [9] [i_2]))), (((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_1)) : (var_4))))))));
        arr_14 [i_2] = ((/* implicit */int) (short)10921);
        var_17 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) + (var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : ((-(var_2)))));
        var_18 = (-(((/* implicit */int) (unsigned char)5)));
        var_19 = max((((/* implicit */int) var_7)), ((~(((/* implicit */int) arr_4 [i_2])))));
    }
}
