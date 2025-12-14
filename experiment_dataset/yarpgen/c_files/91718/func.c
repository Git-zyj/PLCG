/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91718
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
    var_12 += ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_11))));
    var_13 = ((/* implicit */long long int) (unsigned short)40963);
    var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (10299624830352908805ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40960)))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((arr_0 [i_0] [i_0 + 1]) ? (-5632478826803133366LL) : (var_4))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))))))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)33)) ? (arr_5 [i_1]) : (arr_5 [i_1]))) == ((~(arr_5 [i_1])))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 1])))))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))) ? (((unsigned int) arr_6 [i_2 - 1])) : (((/* implicit */unsigned int) max((arr_9 [i_2 + 1]), (((/* implicit */int) var_0)))))));
            var_19 = ((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_2])), ((~((~(((/* implicit */int) (short)-32742))))))));
        }
        var_20 = var_11;
    }
}
