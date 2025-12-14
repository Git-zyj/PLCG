/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8469
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
    var_12 -= ((((/* implicit */_Bool) (((~(var_5))) & (((int) var_9))))) ? (((/* implicit */int) ((((var_8) % (((/* implicit */unsigned long long int) var_0)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) : ((-(var_5))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_13 -= ((/* implicit */signed char) var_11);
        var_14 = ((/* implicit */unsigned int) ((unsigned short) ((short) var_5)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_5 [(signed char)2] [i_1]))))))) == ((~(max((((/* implicit */unsigned long long int) (unsigned short)4108)), (arr_3 [i_1])))))));
        var_15 = ((/* implicit */unsigned short) max((max((((/* implicit */short) var_9)), ((short)-7539))), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1])))))));
        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_1 - 1]))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2])) < (var_0)))) : ((~(((/* implicit */int) (signed char)113)))))) : (((/* implicit */int) max((((/* implicit */short) arr_4 [i_1 + 2] [i_1 + 2])), (arr_1 [i_1] [i_1 + 1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (int i_3 = 4; i_3 < 14; i_3 += 4) 
            {
                {
                    var_17 -= ((/* implicit */unsigned int) var_5);
                    arr_15 [6ULL] [i_3 - 2] = ((/* implicit */signed char) max((max((((((/* implicit */int) var_11)) % (((/* implicit */int) var_2)))), ((-(((/* implicit */int) (signed char)-115)))))), (((/* implicit */int) ((short) max((-2), (((/* implicit */int) var_9))))))));
                }
            } 
        } 
    }
    for (long long int i_4 = 1; i_4 < 23; i_4 += 3) /* same iter space */
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) ((((arr_16 [i_4 - 1]) / (arr_16 [i_4 + 1]))) + (((/* implicit */int) var_6))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_16 [i_4 + 1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (1152850093U))))))));
        var_19 = ((/* implicit */unsigned short) var_0);
    }
    for (long long int i_5 = 1; i_5 < 23; i_5 += 3) /* same iter space */
    {
        arr_21 [i_5] = max((var_4), (((int) ((((/* implicit */int) (unsigned short)61417)) & (((/* implicit */int) var_2))))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_9))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned long long int) max(((~(arr_16 [i_5 - 1]))), (((/* implicit */int) max((arr_17 [i_5 + 1]), (((/* implicit */unsigned char) (_Bool)0)))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_5 - 1])))));
    }
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((max((((/* implicit */unsigned long long int) var_7)), (16216936557201575149ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */int) var_9)))))))) : (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) var_7))))))))));
    var_23 = ((/* implicit */unsigned long long int) ((int) var_7));
}
