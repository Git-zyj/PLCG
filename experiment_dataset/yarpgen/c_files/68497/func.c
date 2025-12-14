/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68497
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (min((9223372036854775797LL), (((/* implicit */long long int) (unsigned char)0)))))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((var_1), (((/* implicit */unsigned int) (unsigned short)29124)))), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) var_9))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = max((((/* implicit */long long int) 4294967295U)), (((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (var_1) : (4294967295U)))) ? (min((var_5), (((/* implicit */long long int) arr_0 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */long long int) var_8);
                        var_15 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */short) min((((/* implicit */signed char) arr_7 [i_2 - 2] [i_1])), ((signed char)117))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            arr_16 [i_5] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483644)) ? (var_0) : (((/* implicit */unsigned long long int) arr_6 [i_1])))))))) : (((/* implicit */int) (short)32748))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) min((arr_8 [i_1] [i_2] [i_3]), (((/* implicit */int) arr_13 [i_1] [18U] [i_3] [i_4] [i_4])))))));
                            var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3 + 1] [i_5])) == (((/* implicit */int) ((((/* implicit */int) arr_0 [21] [i_3])) <= (((/* implicit */int) var_3)))))));
                        }
                        var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_1] [(signed char)10])) : (((/* implicit */int) arr_11 [6LL] [6LL] [i_3]))))) ? (((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) var_11))))) : (((var_0) ^ (((/* implicit */unsigned long long int) 0U)))))), (((/* implicit */unsigned long long int) 5880249592224722046LL))));
                        var_19 = ((/* implicit */unsigned int) (signed char)125);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) min((((arr_0 [i_1] [i_1]) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [(unsigned char)17] [i_1])))), (2147483644)));
    }
}
