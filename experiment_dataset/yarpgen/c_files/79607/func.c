/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79607
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
    var_16 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_11)) == (((/* implicit */int) (signed char)127)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((var_14), (14906462921897763853ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((18446744073709551613ULL), (max((3540281151811787745ULL), (((/* implicit */unsigned long long int) (signed char)-1))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) var_10))))) ? (((((/* implicit */_Bool) (short)32764)) ? (3540281151811787759ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))))));
                                var_17 = ((/* implicit */unsigned long long int) arr_1 [2ULL]);
                                var_18 = ((/* implicit */unsigned long long int) var_4);
                            }
                            var_19 = min((((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1]))) : (arr_11 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]))));
                        }
                    } 
                } 
                arr_15 [4ULL] [i_1] [(unsigned char)9] = ((/* implicit */unsigned long long int) ((arr_9 [(short)7] [i_1]) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (14906462921897763844ULL)))))) : ((-(((/* implicit */int) (signed char)-67))))));
                /* LoopNest 2 */
                for (short i_5 = 2; i_5 < 9; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        {
                            arr_21 [i_0] [i_1] [(unsigned char)8] [i_1] [i_5 - 2] [(unsigned char)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14906462921897763876ULL)) ? (3540281151811787757ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))))))));
                            var_20 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) max(((short)-1), (((/* implicit */short) (signed char)-13))))), (((((/* implicit */int) (unsigned short)31382)) | (((/* implicit */int) (unsigned short)34163))))))) == (min((274918690758418366ULL), (((/* implicit */unsigned long long int) arr_3 [i_5 - 2] [(short)2] [i_0]))))));
                            var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)31373)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (3540281151811787759ULL)));
                            /* LoopSeq 3 */
                            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 3LL)) : (18171825382951133256ULL))))));
                                var_23 = ((/* implicit */unsigned char) var_2);
                                var_24 = ((/* implicit */unsigned long long int) min(((+(((arr_22 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [6ULL]) * (((/* implicit */unsigned int) arr_2 [3] [i_0] [i_0])))))), (((/* implicit */unsigned int) arr_18 [i_6] [i_6] [i_0] [i_0] [i_0]))));
                                var_25 = ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [(unsigned short)3] [i_1])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) / (min((((/* implicit */unsigned long long int) 1479485068217702286LL)), (1214777296760578067ULL))));
                            }
                            for (long long int i_8 = 3; i_8 < 8; i_8 += 4) 
                            {
                                arr_26 [i_8] = ((/* implicit */_Bool) arr_17 [i_6]);
                                var_26 = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-64));
                            }
                            for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                            {
                                var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)1)))));
                                var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)16))));
                            }
                            arr_29 [(_Bool)1] [i_1] [i_5] [i_5] [(_Bool)1] [0ULL] = (+(((((/* implicit */_Bool) (short)23950)) ? (((((/* implicit */_Bool) 868312964602764276ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_5]))) : (var_14))) : (((var_14) >> (((var_8) - (3208463715076183981LL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
