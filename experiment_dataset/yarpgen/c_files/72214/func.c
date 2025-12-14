/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72214
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
    var_19 |= var_7;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] &= ((/* implicit */unsigned short) (short)29246);
            arr_7 [(unsigned char)3] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_15)), (var_14)))) ? (((/* implicit */unsigned long long int) -14)) : (min((max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_1])))), (((/* implicit */unsigned long long int) var_1))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                var_20 |= ((/* implicit */_Bool) ((min(((!(((/* implicit */_Bool) var_5)))), (var_0))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1])) == (-14)))) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -17)) ? (18446744073709551591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) var_18))))) ? (min(((~(16602754467662180704ULL))), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
            }
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        var_22 |= ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1])), (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_11))), (((/* implicit */long long int) ((short) arr_10 [i_4] [i_3] [i_1])))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) arr_0 [(signed char)11])))) : (((/* implicit */int) ((short) arr_12 [i_0] [i_1 + 1] [i_4]))))))));
                            var_24 = ((/* implicit */unsigned char) ((arr_0 [i_1 + 1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_1 + 1]))));
                        }
                        for (short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            var_25 &= ((_Bool) 4599321138735043733LL);
                            arr_21 [i_0] [i_0] [i_0] [(short)3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [i_1 + 1] [i_3] [i_3] [i_1])) ? (((/* implicit */int) arr_19 [i_0] [i_1 + 1] [i_3] [i_4] [i_6])) : (((/* implicit */int) arr_19 [i_0] [i_1 + 1] [i_6] [i_0] [i_3]))))) ? (((/* implicit */int) arr_20 [i_6] [i_4] [13])) : (var_2)));
                            var_26 = ((int) (+(((/* implicit */int) var_16))));
                        }
                        for (short i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0]);
                            var_28 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_13))))))));
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */int) min((var_17), (((/* implicit */unsigned short) ((_Bool) var_9)))))) == (max((max((0), (((/* implicit */int) var_10)))), (((/* implicit */int) ((6895762157017088277ULL) < (((/* implicit */unsigned long long int) 1146518054073079094LL))))))))))));
                        }
                        var_30 = ((/* implicit */int) var_3);
                    }
                } 
            } 
        }
        var_31 ^= ((/* implicit */unsigned char) min((var_6), (((/* implicit */int) var_18))));
        var_32 = ((/* implicit */int) ((var_13) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) max((((/* implicit */int) var_18)), (var_14)))) : (arr_12 [i_0] [(unsigned short)0] [i_0])))) : (((unsigned long long int) max((var_2), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_33 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_15))))) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) : (((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0])))))), (((/* implicit */int) var_12))));
    }
    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (var_11)))), (((unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((_Bool) var_16))), (max((var_4), (((/* implicit */long long int) var_0))))))))))));
}
