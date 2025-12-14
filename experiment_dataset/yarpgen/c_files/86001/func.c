/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86001
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
    var_11 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_0)) ? (906716735) : (((/* implicit */int) (signed char)69)))) : (var_6)))));
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_4))));
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_4))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((4294967295U) + (0U))))));
                        var_15 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 9223372036854775807ULL)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) var_0)))) ^ (((/* implicit */int) min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 2]))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_0 - 2] [(short)15] [i_0 + 1]) ? (((/* implicit */int) arr_7 [i_0 + 1] [(unsigned char)6] [i_0 - 2] [(unsigned char)6])) : (((/* implicit */int) (unsigned short)63374))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967295U)), (arr_11 [4ULL] [i_1] [i_0 - 2] [4LL] [4ULL] [i_1])))))))));
            var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_7)), (min((arr_11 [i_0] [i_0] [i_0 - 1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_1] [(unsigned char)19]))))));
        }
        for (int i_4 = 2; i_4 < 19; i_4 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_3)), (min((((/* implicit */unsigned short) (signed char)69)), ((unsigned short)39423)))))), (min((((/* implicit */unsigned int) min((((/* implicit */int) arr_14 [i_0 + 2] [i_0 + 2])), (var_10)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_6)) : (4294967281U)))))));
            var_19 = ((/* implicit */unsigned char) min((min(((~(((/* implicit */int) arr_6 [i_0] [i_0] [(short)6])))), (((/* implicit */int) arr_8 [(signed char)10] [0ULL] [i_0 - 2])))), (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_8 [(short)4] [(unsigned short)8] [(unsigned char)16]))))))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 2; i_5 < 19; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) : (min((((/* implicit */int) (signed char)-69)), (var_6))))), (((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_6)))))))));
                        arr_19 [i_0] [i_0 + 3] [i_0 + 1] [7ULL] [7ULL] [7ULL] = ((/* implicit */long long int) (signed char)83);
                    }
                } 
            } 
        }
        arr_20 [(unsigned char)16] [(unsigned char)16] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (min((-6023844107032642257LL), (((/* implicit */long long int) (short)29127)))) : (((/* implicit */long long int) var_10))))));
    }
}
