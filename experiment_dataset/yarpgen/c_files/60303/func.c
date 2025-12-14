/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60303
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned int) var_2);
        arr_2 [(short)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (min((((/* implicit */unsigned long long int) (signed char)-30)), (9223372002495037440ULL)))));
    }
    for (unsigned char i_1 = 1; i_1 < 7; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)36)) ? ((+(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (unsigned char)23))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        arr_18 [i_1] [i_1] = ((((/* implicit */_Bool) ((arr_16 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44))) : (12666180740592846470ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1359845819)) || (arr_16 [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 2009718404))))));
                        arr_19 [(signed char)4] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((arr_5 [i_1]) >= (1319683213U))) ? (min((((/* implicit */unsigned long long int) ((signed char) (unsigned short)0))), (((unsigned long long int) (_Bool)1)))) : (((((/* implicit */_Bool) ((6875444837067420637ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) : (((((/* implicit */_Bool) arr_0 [7U])) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 1; i_5 < 7; i_5 += 2) 
                        {
                            arr_22 [i_1] = ((/* implicit */_Bool) (+((-((~(((/* implicit */int) var_14))))))));
                            arr_23 [(unsigned short)3] [i_4] [1U] [i_1] [1U] = (((!(((/* implicit */_Bool) arr_9 [i_1 - 1])))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (unsigned short)65503)))));
                            arr_24 [i_5 + 2] [i_2] [i_3] [i_4] [i_1] [1U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0U)), (((var_6) / (((/* implicit */unsigned long long int) 625733637))))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((8925958635837534915ULL) * (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)48)) / (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) 2147483647))));
                        }
                        var_16 = ((/* implicit */_Bool) -12485598);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */signed char) (short)4373);
                            var_18 = ((/* implicit */int) min((var_18), (var_10)));
                        }
                    }
                } 
            } 
        } 
        arr_27 [i_1] [(signed char)4] |= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_6 [i_1 + 1] [(signed char)2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned short)1]))) / (arr_9 [i_1])))) : (var_3))));
    }
    var_19 = ((/* implicit */_Bool) 2147483647);
    var_20 |= ((/* implicit */unsigned long long int) (-(((-1126088299) | (1359845821)))));
}
