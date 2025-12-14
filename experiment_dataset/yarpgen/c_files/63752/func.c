/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63752
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-25811)) : ((~(((/* implicit */int) (short)25797))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_1 [i_0])))) && (((/* implicit */_Bool) ((unsigned long long int) var_9)))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [8ULL])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        arr_5 [i_0] = ((/* implicit */unsigned short) arr_1 [(short)11]);
        var_14 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned int) var_7)) == (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (0U))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((long long int) -1LL))))) ? ((-(((/* implicit */int) (short)25742)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4294967295U)))))));
        var_15 ^= ((/* implicit */unsigned short) (~(min((arr_6 [i_1]), (((/* implicit */unsigned int) arr_0 [i_1]))))));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (short i_5 = 3; i_5 < 21; i_5 += 4) 
                {
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (short)26185))) ? (max((8011679463824852982ULL), (((/* implicit */unsigned long long int) arr_9 [i_5 - 2])))) : ((~(max((var_4), (var_4)))))));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_15 [i_2] [i_3] [i_4] [i_5]))));
                        arr_19 [i_5] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((7423620168159796423ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28)))));
                        var_18 -= ((/* implicit */int) ((((/* implicit */int) ((short) (short)25824))) > (((((/* implicit */int) (short)0)) >> (((((/* implicit */int) arr_18 [i_5 + 1] [i_5 + 1] [i_4] [i_5])) - (125)))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) (-(arr_15 [i_2] [(unsigned char)5] [i_2] [(short)8])));
    }
}
