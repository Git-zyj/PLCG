/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97659
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) | (((/* implicit */int) (signed char)119))));
    var_14 = ((/* implicit */unsigned short) var_10);
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_2))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((var_0), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) arr_3 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_0] [i_0])) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)14530))))))) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))));
            var_16 = ((/* implicit */unsigned short) (+(var_10)));
        }
        for (short i_2 = 2; i_2 < 12; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (arr_3 [i_0] [(short)13])));
            arr_8 [2ULL] [2ULL] |= ((/* implicit */unsigned int) arr_0 [i_2] [i_0]);
            var_18 ^= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)12))))) + (max((((/* implicit */long long int) arr_0 [i_2] [i_2])), (arr_7 [6LL])))))) ? (((/* implicit */int) arr_0 [i_0 - 1] [(unsigned short)4])) : (((/* implicit */int) ((arr_7 [(unsigned char)8]) == (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_2])))))))));
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (~(var_7))))));
        }
        arr_9 [i_0] = ((/* implicit */short) max(((-(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])))), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) var_5))))));
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (unsigned short)65526))));
        var_21 &= ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_10 [i_3] [i_3])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_12 [i_3] [i_3]))))) : (((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */int) (signed char)102)) : (var_9)))))));
        var_22 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) > (((/* implicit */int) arr_12 [i_3] [i_3])))))) & (((min((var_11), (((/* implicit */unsigned long long int) var_4)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((/* implicit */int) var_5)))))))));
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_10 [i_4] [i_4]))))) & ((+(((((/* implicit */int) var_2)) & (((/* implicit */int) arr_10 [(short)14] [i_4]))))))));
        var_24 = ((/* implicit */short) ((((/* implicit */int) (signed char)123)) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4])))))));
        arr_16 [i_4] = ((/* implicit */long long int) ((unsigned char) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : ((-2147483647 - 1))))));
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_15 [(unsigned short)4]))));
        arr_19 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))) >= (arr_17 [i_5])));
    }
    var_26 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (+(1608261986U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)6)) > (((/* implicit */int) max((var_8), (((/* implicit */short) var_1))))))))) : (max((max((var_0), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))))));
}
