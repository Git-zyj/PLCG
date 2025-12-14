/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71543
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
    var_15 = ((/* implicit */signed char) var_0);
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)128)) ? ((~(((/* implicit */int) (unsigned char)123)))) : (((/* implicit */int) (short)798))));
    var_17 = ((/* implicit */long long int) ((((max((var_14), (((/* implicit */unsigned long long int) var_2)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) (signed char)40)), (var_5)))))) : (max((var_14), (((/* implicit */unsigned long long int) var_7))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) 2147483647);
        arr_4 [i_0] [(unsigned char)6] = (-(((/* implicit */int) ((unsigned short) var_7))));
    }
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) arr_6 [i_1] [i_1]);
        var_20 = ((/* implicit */unsigned char) ((((_Bool) var_4)) ? ((~(((unsigned long long int) 9007199254738944LL)))) : (((/* implicit */unsigned long long int) var_5))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_6 [i_1] [i_1]) >= ((-(((((/* implicit */_Bool) var_6)) ? (arr_6 [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57340)))))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) var_5);
    }
    for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) /* same iter space */
    {
        arr_13 [9] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 0ULL))))) == (((/* implicit */int) var_3))))), (((((/* implicit */int) arr_10 [i_2 + 3])) - (((/* implicit */int) var_13))))));
        var_21 = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) (short)776)), (arr_5 [i_2 - 1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-799)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (unsigned char)97))))) : (max((arr_12 [i_2 - 1] [i_2 + 1]), (var_14)))));
    }
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) max((arr_17 [i_3]), (((/* implicit */unsigned short) var_12)))));
        arr_19 [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (unsigned short)8221))) > (((/* implicit */int) (unsigned char)15))));
        arr_20 [i_3] = ((/* implicit */unsigned long long int) ((signed char) max((((((/* implicit */int) var_2)) / (arr_14 [i_3]))), ((+(((/* implicit */int) (_Bool)0)))))));
    }
}
