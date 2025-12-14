/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91495
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
    var_17 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (short)6165))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            var_18 |= ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
            var_19 = ((/* implicit */signed char) var_15);
            var_20 += ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 3187793187U)) != (5428013748137681040ULL))))))));
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_5 [i_0])))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)62013)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned short)62013))));
        }
        for (int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_22 = ((/* implicit */long long int) arr_4 [i_0]);
            var_23 = ((/* implicit */short) ((signed char) ((signed char) (unsigned short)62019)));
        }
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (unsigned short)62013)) * (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))));
    }
    for (unsigned short i_4 = 3; i_4 < 22; i_4 += 2) 
    {
        var_24 = ((((((/* implicit */int) (short)32767)) == (((/* implicit */int) (unsigned short)53789)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 - 2] [i_4])) ? (arr_12 [i_4 + 3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
        arr_13 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (-274091274))))))) ? (((/* implicit */int) (signed char)-54)) : (((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned short)14))))));
        var_25 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((signed char) (signed char)59))))), ((~(((/* implicit */int) arr_11 [i_4]))))));
    }
}
