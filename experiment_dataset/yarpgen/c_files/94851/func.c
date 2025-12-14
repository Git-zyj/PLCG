/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94851
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_7 [i_2 + 3] [i_2 + 3])))))))));
                        var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (!((_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (short)2032))));
                        var_14 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_2 - 4] [i_4] [i_2 - 4] [i_4 + 1])) ? (arr_9 [i_1 + 2] [i_1 + 2] [i_2 - 4] [i_4] [i_1 + 2] [i_0]) : (arr_13 [i_1 - 1] [10ULL]))) << (((/* implicit */int) arr_4 [i_1 + 2] [i_2 + 2])))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)28772))))) ? (arr_7 [i_2 - 4] [i_2 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_8))))))));
                        var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_4])) ? (((/* implicit */int) arr_0 [i_2] [i_4])) : (((/* implicit */int) (unsigned short)34112))))) ? (((arr_6 [i_0] [(short)5] [i_2]) & (arr_3 [10ULL] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118)))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        arr_17 [(signed char)10] [i_1] [(signed char)0] = ((/* implicit */short) arr_5 [i_0]);
                        arr_18 [i_0] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_4 [i_5] [i_0])) > (((/* implicit */int) arr_4 [i_0] [(_Bool)1]))))));
                        var_17 = var_3;
                        var_18 -= ((/* implicit */short) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [4U] [4U])))) : (((((/* implicit */int) var_2)) * (((/* implicit */int) var_2))))))));
                    }
                    var_19 += max((((/* implicit */int) arr_0 [i_2 - 2] [i_1 + 1])), (((((/* implicit */int) arr_0 [i_2 + 4] [i_1 + 2])) % (((/* implicit */int) arr_0 [i_2 - 1] [i_1 + 2])))));
                }
            } 
        } 
        var_20 ^= ((/* implicit */unsigned short) (_Bool)1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            arr_21 [i_6] [i_6] = ((/* implicit */unsigned short) (((~(arr_6 [i_0] [i_0] [4ULL]))) == ((+(arr_13 [i_6] [i_6])))));
            var_21 = ((/* implicit */unsigned char) ((((var_1) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) var_4)))) ^ (((((/* implicit */int) arr_0 [(signed char)1] [i_0])) & (((/* implicit */int) (signed char)118))))));
            var_22 = ((/* implicit */signed char) (_Bool)1);
            var_23 = ((/* implicit */unsigned long long int) var_2);
        }
    }
    var_24 = ((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-14)))) + ((-(((/* implicit */int) max((var_2), (var_2))))))));
}
