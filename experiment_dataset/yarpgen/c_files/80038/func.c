/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80038
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
    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) var_3))), (min((((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26783))))), (((/* implicit */unsigned long long int) var_1))))));
    var_13 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_5))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)26783))) : (((/* implicit */int) var_6)))))));
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_4))));
    var_15 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned short)38752)))))), (((/* implicit */int) min(((unsigned short)26808), (((/* implicit */unsigned short) (unsigned char)186)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) min(((short)-14093), (((/* implicit */short) (_Bool)1)))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)26783))));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))) ? (((/* implicit */int) min(((unsigned short)38740), ((unsigned short)44670)))) : (((/* implicit */int) (((-2147483647 - 1)) <= (((/* implicit */int) (unsigned short)38763)))))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0 - 1])))) != (max((638308979U), (((/* implicit */unsigned int) (unsigned char)175))))));
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_8 [(signed char)18] [i_0] = ((((/* implicit */_Bool) ((638308979U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))))) ? (((((/* implicit */int) max((arr_6 [i_0]), (((/* implicit */unsigned short) arr_4 [i_0] [i_2]))))) % ((-(((/* implicit */int) (unsigned short)26795)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 363449403U)))))));
            arr_9 [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)38740)) : (((/* implicit */int) (unsigned short)26795))));
            arr_10 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (3656658316U)));
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 4; i_3 < 13; i_3 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_11 [i_3 - 1])) + (arr_12 [i_3 - 3] [i_3 - 3])));
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_3 - 1])) : (((/* implicit */int) arr_3 [i_3 - 4]))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_3 - 4])) ? (arr_11 [i_3 - 4]) : (arr_11 [i_3 - 4])));
    }
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        var_21 ^= ((/* implicit */int) var_5);
        var_22 = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4] [i_4]))) == (min((var_3), (((/* implicit */unsigned long long int) var_2))))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >> (((((/* implicit */int) arr_15 [i_4])) / (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) 13720842049644431045ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4]))) : (max((var_3), (((/* implicit */unsigned long long int) arr_18 [i_4])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) ((unsigned char) arr_1 [i_4])))))))))));
    }
}
