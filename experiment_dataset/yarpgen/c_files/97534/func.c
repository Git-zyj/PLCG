/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97534
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
    var_12 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_2))))) ? (4294967294U) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -600066339)) : (3231820347U)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 = min(((~(((/* implicit */int) arr_0 [i_2] [i_1])))), (((arr_0 [i_0] [i_1]) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned short)58256)))));
                    arr_8 [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1] [i_0]))));
                }
            } 
        } 
        var_14 += ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0])))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) (unsigned char)141))))))));
        arr_9 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (arr_3 [i_0] [i_0] [i_0]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (arr_6 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))) : (arr_2 [i_0])))))));
    }
    var_15 = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_11))));
    var_16 += ((/* implicit */int) ((unsigned int) (((((_Bool)1) && (((/* implicit */_Bool) var_1)))) ? (min((var_11), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_6))))));
}
