/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57884
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */int) var_14)), (var_12))) <= (((((/* implicit */int) arr_2 [1])) >> (((arr_4 [i_0] [(unsigned char)2] [i_2]) - (724074172))))))))) * (arr_7 [i_1] [(unsigned short)8])));
                    var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_4 [i_2] [i_1] [(_Bool)1])) ? ((~(arr_3 [i_2]))) : (arr_3 [i_1])))));
                    var_18 = ((/* implicit */unsigned char) (~((~(((511ULL) >> (((arr_5 [i_0] [3] [10ULL]) - (3571196661U)))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        arr_10 [(signed char)9] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_9 [4U] [4] [i_3 - 1] [i_3 - 2])) + (((/* implicit */int) arr_9 [i_0] [2] [i_3 - 1] [11U]))))));
                        var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)57))))) ? (arr_6 [6ULL] [i_3 - 2] [i_3 - 2] [i_3 - 1]) : (arr_6 [i_3 - 1] [i_3 + 1] [i_3 + 1] [(unsigned short)13]))), (((/* implicit */int) ((_Bool) (~(arr_1 [6ULL] [(unsigned char)1])))))));
                        arr_11 [8ULL] [i_1] [0U] = ((/* implicit */_Bool) arr_9 [4U] [(unsigned short)2] [6ULL] [(_Bool)1]);
                        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_1 [i_2] [9ULL])) + ((~(max((((/* implicit */long long int) arr_5 [i_0] [i_2] [(_Bool)1])), ((-9223372036854775807LL - 1LL))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] [10ULL] [7U] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_4]), (arr_3 [i_0])))) ? (((((/* implicit */_Bool) var_4)) ? (arr_3 [i_2]) : (arr_3 [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_0]) : (arr_3 [0U])))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14620)) % (var_11)));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_12);
    var_23 = ((/* implicit */unsigned char) ((var_15) / (((/* implicit */int) var_3))));
}
