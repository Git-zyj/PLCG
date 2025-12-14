/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71922
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
    var_12 = ((/* implicit */long long int) var_2);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [(unsigned short)0])) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) var_0)))), (((arr_1 [i_0] [(signed char)10]) & (((/* implicit */int) arr_2 [(unsigned char)6])))))))));
        var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), ((-2147483647 - 1))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))));
        var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [8ULL])) ? (((/* implicit */int) arr_2 [10])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)30)) : (((((/* implicit */_Bool) (unsigned char)49)) ? (var_5) : (arr_1 [i_0] [i_0])))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned short) var_10))))) ? (min((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_2 [i_0])))))) : (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) arr_2 [i_0])) : (arr_1 [i_0] [(signed char)4])))));
        var_17 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 1])) && (((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1])) ? (arr_4 [i_1 + 2] [i_1 + 2]) : (arr_4 [i_1 + 1] [i_1 + 1]))) : (arr_4 [i_1 + 2] [i_1 - 1])));
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            arr_8 [(unsigned short)11] [13] = ((/* implicit */int) var_8);
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_1 + 1])) : (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_4 [i_1] [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (max((arr_6 [i_2 + 1] [i_2 - 2] [i_2 - 2]), (((/* implicit */unsigned long long int) arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 2]))))));
            var_20 += ((/* implicit */unsigned char) arr_6 [i_1] [i_1 + 1] [i_1]);
        }
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 14; i_3 += 4) 
        {
            var_21 = ((/* implicit */int) arr_4 [i_1] [i_1]);
            var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_3 + 1]))));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((arr_6 [i_3] [i_1 + 2] [i_3 + 2]) & (((((/* implicit */_Bool) var_11)) ? (arr_6 [i_1] [i_1] [i_3 - 1]) : (arr_6 [i_1 - 1] [i_1] [i_1]))))))));
        }
    }
    for (int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_24 = ((/* implicit */short) arr_13 [i_4]);
        var_25 = ((/* implicit */int) ((arr_13 [i_4]) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_13 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_13 [i_4]) : (arr_13 [i_4]))) : (((((/* implicit */_Bool) arr_12 [i_4])) ? (arr_13 [i_4]) : (arr_13 [i_4])))))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_4] [i_4]) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) arr_11 [(unsigned short)18] [i_4]))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_13 [(unsigned short)19]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4]))))) : (arr_13 [i_4])))) ? (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (short)-22405))))) : (((arr_11 [(unsigned short)0] [i_4]) ? (((/* implicit */long long int) 2147483647)) : (arr_13 [i_4]))))) : (max((((/* implicit */long long int) arr_12 [i_4])), (((arr_11 [(unsigned char)2] [(unsigned char)2]) ? (arr_13 [i_4]) : (((/* implicit */long long int) var_5)))))))))));
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_11 [1] [i_4]) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_4] [i_4])) : (((/* implicit */int) (unsigned char)30)))) : (max((((/* implicit */int) arr_12 [i_4])), (var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */long long int) var_11)) : (arr_13 [i_4])))) : (3560107156120683309ULL)));
        var_28 += ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4]))) / (arr_13 [i_4]))), (((/* implicit */long long int) var_8))));
    }
    var_29 = ((/* implicit */_Bool) ((((576460752303423488ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9)));
}
