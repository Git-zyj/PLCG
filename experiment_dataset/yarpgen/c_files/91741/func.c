/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91741
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
    var_18 = ((/* implicit */int) min((min((var_5), (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23))) : (8806138937676008559LL))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)50746)))))))));
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))) - (var_17)))) ? (((/* implicit */int) max(((signed char)40), (((/* implicit */signed char) var_2))))) : (((((/* implicit */_Bool) 6628321998489389183ULL)) ? (((/* implicit */int) (short)32389)) : (-779740603))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (min(((unsigned short)40063), ((unsigned short)36461))))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((var_3) + (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_12)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_17)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) : (min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            var_21 = ((/* implicit */int) max((var_21), (arr_4 [i_0] [i_0])));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_1] [12U] [i_2] [i_1] = max((3737920038776988413ULL), (((/* implicit */unsigned long long int) 182166568U)));
                        arr_13 [i_0] [i_1] [i_1] [i_3] [i_1] [i_3] |= arr_3 [(signed char)16] [i_1];
                        var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? ((-(arr_0 [i_1 + 1]))) : (((/* implicit */unsigned int) min((((/* implicit */int) max(((unsigned char)93), (arr_6 [i_3] [i_2] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_6 [i_3] [i_2] [i_0])))))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (max((((/* implicit */unsigned short) (short)-14407)), ((unsigned short)14789)))))), ((-(((/* implicit */int) (short)-14407)))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
        }
        arr_14 [i_0] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_9 [i_0])))), (((arr_9 [i_0]) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_25 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)39))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_13))) : (1541166242U)))), (max((var_0), (((/* implicit */long long int) var_13))))));
}
