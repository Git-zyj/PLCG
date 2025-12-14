/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93346
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
    var_17 = ((/* implicit */unsigned char) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-13))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [20ULL] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [(signed char)6]) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_1]) : (arr_5 [(unsigned short)18] [i_1] [i_1]))))))) : (min((arr_5 [(unsigned char)0] [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_0]))))));
                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [8U])) ? (arr_1 [9ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_4 [22ULL] [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [15ULL]))))))) - (((arr_2 [i_0]) - (arr_1 [i_0])))));
                var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)14155)), (18446744073709551613ULL)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_16), (var_0))))))) : ((+(((/* implicit */int) var_12))))));
    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) max((var_12), (var_4)))) && (((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned long long int) var_11)) : (var_3)))))))));
}
