/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99782
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((var_2) <= (((/* implicit */long long int) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (short)-19065)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)94))))))))))));
    var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)63)) : (-1420165318)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_3))));
    var_16 = ((/* implicit */int) ((_Bool) ((long long int) var_11)));
    var_17 = ((/* implicit */unsigned short) 3LL);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_3 [0LL] = ((((((/* implicit */_Bool) max((arr_0 [i_0 + 2] [i_0]), (((/* implicit */unsigned long long int) arr_2 [4LL] [(_Bool)1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) / (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15174))))) << ((((~(((/* implicit */int) arr_1 [i_0 - 2])))) + (57631))));
        var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) max((min((arr_2 [i_0 - 1] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))), (((((/* implicit */_Bool) arr_0 [22U] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [7ULL]))) : (arr_2 [(unsigned short)18] [(unsigned short)3])))))) ? (((/* implicit */int) ((arr_0 [i_0 - 1] [i_0 - 1]) <= (arr_0 [17U] [i_0 - 1])))) : (((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [i_0]))) ? ((+(arr_2 [8ULL] [(unsigned short)8]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0 + 1] [i_0 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18637)))))) ? (arr_0 [i_0] [17ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_20 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))), ((-(((/* implicit */int) (short)31))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24093)) ? (arr_0 [i_1] [(unsigned char)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (33554176U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((((/* implicit */int) (signed char)109)) << (((min((arr_2 [i_1] [i_1]), (((/* implicit */unsigned int) (short)32763)))) - (32752U))))) : ((~(-477372188)))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (-(262143U)));
    }
}
