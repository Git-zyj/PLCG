/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9755
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
    var_17 = ((/* implicit */unsigned short) ((unsigned int) 768008762));
    var_18 = 11874329102848087759ULL;
    var_19 |= ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)38589)) ? (-3491228555729458940LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7305)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_20 = ((/* implicit */_Bool) arr_1 [i_1]);
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_14))))))), (((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [(unsigned char)1] [i_1]))) ? (((/* implicit */unsigned long long int) var_9)) : (((var_5) << (((((/* implicit */int) var_10)) - (1503)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) var_9);
                arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (arr_1 [i_0])));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61451)))));
                var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_1 [i_2])))) ? (((11874329102848087759ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (var_0) : (376951664758675224ULL)))));
            }
            arr_12 [(signed char)4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((arr_10 [i_0] [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) -768008752)))))), (((/* implicit */unsigned long long int) min((min((866584279), (((/* implicit */int) arr_4 [i_0] [i_1])))), (((/* implicit */int) var_15)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned int) (+(arr_14 [i_0] [i_3])));
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) ((unsigned char) 13117048636574986934ULL))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : (arr_6 [i_0] [i_0] [i_3])))));
            var_24 = ((/* implicit */_Bool) arr_13 [i_0]);
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) * (((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)8] [i_3])) ? (((/* implicit */int) arr_9 [(signed char)10] [i_3] [i_0])) : (((/* implicit */int) arr_9 [i_3] [i_3] [i_0]))))));
        }
    }
}
