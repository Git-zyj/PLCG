/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93618
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~((-(((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))))));
        var_20 = ((/* implicit */long long int) ((unsigned int) (~(arr_0 [i_0] [i_0]))));
        var_21 *= ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-43))))), (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))) : (0U))))));
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned char)219), (((/* implicit */unsigned char) (signed char)-56))))) * ((-(((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) var_11))))))));
        arr_7 [i_1] [i_1 - 1] = ((/* implicit */long long int) ((signed char) ((unsigned char) arr_3 [i_1 - 1])));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_1] [i_1 - 1]), (arr_0 [(signed char)7] [i_1 - 1])))) || (max((((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) (signed char)-111))))))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((var_16) < (arr_5 [i_1]))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_1 [i_2] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [1LL])))))) ? (((/* implicit */long long int) ((1428034868U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63)))))) : (max((((/* implicit */long long int) arr_8 [i_1] [i_2] [i_2])), (var_9)))))));
            var_24 = ((/* implicit */long long int) max((var_24), (max((((/* implicit */long long int) max((arr_0 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned int) (unsigned char)166))))), (min((2649732631706288214LL), (((/* implicit */long long int) (signed char)90))))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                var_25 = ((/* implicit */signed char) arr_11 [i_1] [i_2]);
                arr_14 [(unsigned char)8] [7LL] [i_3 + 1] = (signed char)-24;
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1] [i_1])) <= (((/* implicit */int) (signed char)44))))), (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (arr_10 [i_3] [i_2])))))) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) ((((long long int) arr_4 [i_1 + 1])) != (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-47))))))))));
                arr_15 [i_2] [i_2] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) % (((((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) arr_4 [i_1 + 1]))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_1] [7LL])))))));
            }
            var_27 = ((/* implicit */signed char) var_6);
        }
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_1] [i_1] [i_1 - 1]))))), (((unsigned int) (+(((/* implicit */int) arr_4 [i_1]))))))))));
    }
    var_29 += ((/* implicit */unsigned int) ((unsigned char) 3165312727U));
}
