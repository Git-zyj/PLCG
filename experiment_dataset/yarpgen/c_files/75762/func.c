/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75762
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
    var_18 *= ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((15160673807338299982ULL), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (+(arr_3 [i_0] [i_0])))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 15754137915267845198ULL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_7))))) : (((long long int) (unsigned short)65535))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(signed char)6] [i_0 + 2] [i_1 - 1])) ? (((/* implicit */int) ((_Bool) 1235402383))) : (((/* implicit */int) var_9))))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_5 [(unsigned short)9] [i_1])) : (((/* implicit */int) arr_0 [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4096)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-108))));
                            arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [i_0])) << (((var_15) + (1095877276))))), (((/* implicit */int) arr_12 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [(unsigned char)10]))) : (min((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_3] [i_1] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [(unsigned char)9]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [11LL] [11LL] [i_3])) ? (((/* implicit */int) var_13)) : (arr_3 [(_Bool)1] [(_Bool)1]))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((15754137915267845198ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))));
                    var_21 = ((/* implicit */unsigned short) max(((+(273804165120ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_4])) : (((/* implicit */int) arr_16 [i_1] [i_1] [(unsigned short)2] [(_Bool)1])))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_21 [(short)11] [i_1] [4ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)62633)) ? (arr_19 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)39))))), (((/* implicit */long long int) 2134752554))))) ? (min((((/* implicit */int) ((_Bool) arr_4 [i_0] [i_1] [i_5]))), (((((/* implicit */_Bool) 4129326233103996696LL)) ? (((/* implicit */int) arr_11 [i_0] [3] [i_0] [i_0] [5LL] [i_5])) : (((/* implicit */int) arr_2 [i_5])))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_5])) ? (((int) arr_15 [i_0] [i_1] [i_1] [i_5])) : (((/* implicit */int) arr_18 [i_0 - 3] [i_1] [i_1 + 1]))))));
                    var_22 = (~(max((max((((/* implicit */int) arr_11 [i_0] [4] [(signed char)7] [i_1] [i_1] [i_0])), (69829340))), (((/* implicit */int) arr_16 [i_1] [i_0 - 3] [i_5] [i_5])))));
                    arr_22 [i_1] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_12 [i_0] [(signed char)6])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_5])) ? (557660955) : (arr_20 [i_0] [i_1] [i_1])))) ? (arr_19 [i_0 - 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_0 [i_0])))))))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0] [i_5])), (arr_7 [(signed char)11] [(_Bool)0] [i_5])))) ? (arr_19 [9ULL]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)24903)))))))) ? ((~(((((/* implicit */long long int) 1235402383)) ^ (-397142093049633622LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_0 + 1] [i_1])), ((unsigned short)10106))))))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (-557660956)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */_Bool) -69829341)) && (((/* implicit */_Bool) (short)20033)))))));
}
