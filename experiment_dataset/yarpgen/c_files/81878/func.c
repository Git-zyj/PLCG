/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81878
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
    var_12 = ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)37823)), (((((/* implicit */int) (unsigned short)27722)) + (((/* implicit */int) var_1))))))) ? (((/* implicit */int) (!(var_2)))) : (((((((((/* implicit */_Bool) (unsigned short)37835)) ? (var_8) : (var_8))) + (2147483647))) << (((((((/* implicit */_Bool) 6167354172952272838LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37821))) : (4294967295U))) - (37821U))))));
    var_13 &= ((/* implicit */unsigned short) var_3);
    var_14 = ((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((/* implicit */int) var_9)) : (var_10)))) : (min((max((4897416205489198489LL), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)27701)))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 24; i_1 += 3) /* same iter space */
        {
            arr_7 [i_0] [2LL] [5LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_3 [i_1 - 1] [i_1 + 1] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)37842), ((unsigned short)27727))))))))));
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned int) var_6)) : (arr_1 [i_0]))))))) ? (var_6) : (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_1])))));
            var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)27701)) ? (6167354172952272838LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), ((~(((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [19U]))) : (arr_3 [15ULL] [(unsigned char)9] [i_0])))))));
            var_17 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((max((arr_6 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_1])))) == (((((/* implicit */_Bool) arr_1 [(short)14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37854))) : (arr_6 [i_0] [i_1]))))))));
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_1] [i_1 + 1] [i_0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) * (arr_1 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)37852))))))) ? (807965416504438944ULL) : (((/* implicit */unsigned long long int) 2675449101U))));
        }
        for (int i_2 = 1; i_2 < 24; i_2 += 3) /* same iter space */
        {
            var_18 = ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2])) ? (arr_4 [i_2 - 1] [i_2 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) max((((/* implicit */short) arr_5 [i_2] [(unsigned char)12])), (var_4)))) : (((/* implicit */int) var_4)))))));
            var_20 = ((/* implicit */unsigned int) ((int) arr_3 [i_0] [18ULL] [i_2]));
        }
        arr_11 [i_0] = ((/* implicit */unsigned long long int) arr_1 [24]);
        var_21 = ((/* implicit */int) max((2675449108U), (((/* implicit */unsigned int) (unsigned short)65535))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2675449101U)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_3 + 1] [i_3 - 1])));
        arr_14 [i_3] [5U] = ((/* implicit */unsigned long long int) arr_3 [i_3] [i_3] [i_3]);
    }
    for (short i_4 = 1; i_4 < 17; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) (unsigned char)0)), (min((-1451079136), (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (unsigned char)0))));
        var_24 = arr_10 [i_4 + 2] [i_4];
    }
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_25 = ((/* implicit */signed char) (~((~(arr_0 [(signed char)13] [8])))));
            arr_22 [i_6] [i_6] [i_6] = (~(((((/* implicit */_Bool) arr_19 [i_6] [i_5])) ? (((/* implicit */int) arr_19 [i_5] [i_5])) : (((/* implicit */int) arr_19 [i_5] [16ULL])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                arr_27 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_26 [i_5] [i_5] [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) max((16777215LL), (((/* implicit */long long int) var_1))))))) && (((/* implicit */_Bool) (((_Bool)1) ? (arr_25 [i_5] [i_6] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))));
                arr_28 [i_5] [i_6] [i_6] [i_7] &= ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) arr_17 [i_7])) : ((+(1619518188U)))))) ? (((/* implicit */int) var_11)) : (max((((((/* implicit */_Bool) (unsigned char)246)) ? (-1451079135) : (((/* implicit */int) (unsigned short)37854)))), (((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (var_6) : (((/* implicit */int) (_Bool)1))))))));
                var_27 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((arr_4 [i_5] [(_Bool)1] [i_7]) << (((/* implicit */int) var_9))))) ? (((long long int) arr_21 [i_5] [i_7])) : (arr_0 [i_6] [(short)11])))));
            }
            var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) 17638778657205112668ULL)) ? (((/* implicit */unsigned long long int) var_8)) : (807965416504438947ULL)));
        }
        var_29 = ((/* implicit */unsigned int) arr_3 [20] [20] [i_5]);
        arr_29 [i_5] = ((((/* implicit */_Bool) ((min((16777215LL), (((/* implicit */long long int) -1451079136)))) + (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0)))))))) ? (((unsigned long long int) arr_25 [i_5] [i_5] [i_5])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [(unsigned short)12] [i_5] [11LL]))));
    }
}
