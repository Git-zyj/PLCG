/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64378
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (+(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_6)) - (4743))))) : (((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) var_4)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (arr_0 [(signed char)10] [i_0]) : (arr_0 [i_2 + 4] [i_0])))) ? (((/* implicit */long long int) max((((arr_0 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))), (((/* implicit */unsigned int) max((arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1]), (((/* implicit */short) var_2)))))))) : (((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((var_2) ? (-5LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_0))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        arr_10 [i_0 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_1] [i_1 - 1])) : (((/* implicit */int) var_0))))), ((~(0U)))));
                        var_12 = ((/* implicit */short) (((-(((/* implicit */int) var_8)))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18788)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) -3454426034557186207LL)) ? (((/* implicit */int) (short)-19)) : (((/* implicit */int) arr_4 [2ULL] [2ULL] [i_2])))) : ((+(((/* implicit */int) var_6))))))));
                        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (short)4092)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 1] [i_1 - 2]))) | (((((/* implicit */_Bool) 35888059530608640LL)) ? (3220840827353533718LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6918)))))))));
                        arr_11 [i_0] = ((/* implicit */long long int) 18446744073709551600ULL);
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4215558682U)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))) : (-6749722207794822516LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) arr_5 [6U] [i_1 + 2] [(signed char)20] [(unsigned char)12])) : (((/* implicit */int) arr_5 [(unsigned short)7] [i_1] [(unsigned short)7] [i_3])))) : (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [i_2 - 2] [i_0 - 2])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 2] [i_2] [i_1])) ? (((/* implicit */int) var_6)) : (var_9)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_8)))) : (((((/* implicit */int) arr_9 [i_0 - 2] [i_1] [i_2 + 1] [i_3])) - (((/* implicit */int) (unsigned short)11)))))))))));
                    }
                    arr_12 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 + 3] [i_0])))))));
                }
            } 
        } 
    } 
}
