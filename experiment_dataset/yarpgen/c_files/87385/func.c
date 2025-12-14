/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87385
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
    var_11 ^= ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) (signed char)114)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((((/* implicit */short) (signed char)-114)), ((short)-20033)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))));
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) (signed char)114)) ? (268435455U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))))), (((/* implicit */unsigned int) var_4)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_13 = ((/* implicit */short) ((unsigned int) arr_2 [i_0] [i_0]));
        var_14 = ((((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))) ? (max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) ((unsigned int) max(((+(((/* implicit */int) arr_6 [i_0] [i_1])))), ((-(((/* implicit */int) var_0)))))));
                        arr_12 [i_1] [i_2 + 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_6 [i_0] [i_0]))))) : (min((((/* implicit */long long int) arr_5 [i_0])), (arr_8 [i_3] [i_0] [i_3])))))) && (((/* implicit */_Bool) min((min((arr_10 [i_0 + 1] [i_0 + 1] [i_3] [i_3]), (arr_1 [i_0]))), (((/* implicit */long long int) arr_9 [i_0] [i_2 - 1] [i_2] [i_0 + 1] [i_1] [i_1])))))));
                        var_16 ^= ((/* implicit */unsigned char) (+((~(min((((/* implicit */long long int) arr_3 [10ULL])), (var_6)))))));
                        var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 + 1] [(unsigned short)17])) == (((/* implicit */int) arr_6 [i_0 + 1] [i_3]))))), (((arr_6 [i_0 - 1] [0]) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1]))))));
                    }
                } 
            } 
        } 
    }
}
