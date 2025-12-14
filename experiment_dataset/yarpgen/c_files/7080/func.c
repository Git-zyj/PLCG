/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7080
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))) ? (min((((/* implicit */int) var_11)), (((((/* implicit */int) (unsigned short)65530)) / (((/* implicit */int) var_7)))))) : (((/* implicit */int) (unsigned short)65527))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_0 [i_0 - 2]), (((/* implicit */unsigned char) var_7))))) + ((~(arr_1 [i_0 - 2])))));
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_13))))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (arr_1 [i_0 - 1]) : (((((/* implicit */int) max(((unsigned short)8), (var_0)))) * (((/* implicit */int) var_0))))));
    }
    for (short i_1 = 2; i_1 < 11; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            for (short i_3 = 3; i_3 < 13; i_3 += 1) 
            {
                for (int i_4 = 3; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_12)))));
                        var_23 = ((/* implicit */unsigned short) max((((/* implicit */int) min((((unsigned short) arr_10 [i_1] [i_1 + 3] [i_2] [4U])), (((unsigned short) (_Bool)0))))), (((((/* implicit */_Bool) ((arr_12 [10ULL] [10ULL]) >> (((4181764278U) - (4181764276U)))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) var_3))))))));
                        arr_15 [i_1] [i_2] = ((/* implicit */unsigned char) arr_8 [i_1] [i_1 + 3] [i_2]);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */int) ((((/* implicit */int) var_16)) == (((int) arr_10 [0] [0] [i_1] [i_1 + 3]))));
        var_25 = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_9 [i_1 - 2] [i_1 + 2])) >= (arr_11 [i_1] [i_1 + 2] [i_1 + 1] [i_1]))));
    }
    var_26 *= ((/* implicit */signed char) var_8);
    var_27 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))), (var_15)))), (((((/* implicit */_Bool) (unsigned char)209)) ? (min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16)))))))));
}
