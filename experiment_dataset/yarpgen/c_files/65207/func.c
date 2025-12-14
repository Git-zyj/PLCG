/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65207
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [(unsigned short)3] [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [(signed char)10])) ? (((/* implicit */int) arr_1 [(signed char)9])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0]))))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)18363))))) < (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        var_13 = (((+(((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))))) + ((-(2147483647))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((1885307826) - (((/* implicit */int) (unsigned char)4))));
        arr_6 [3] = ((/* implicit */signed char) ((max((arr_3 [(_Bool)1] [i_1]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1] [i_1]))))))) >= ((((~(arr_3 [i_1] [(_Bool)1]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [10ULL])))))))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1])), (arr_3 [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) (~(arr_3 [i_1] [i_2])))) : ((-(arr_4 [i_1] [i_2]))))), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_5 [i_1] [i_2])))))))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1])), (arr_3 [(short)6] [i_2]))), (((/* implicit */unsigned int) ((_Bool) arr_0 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1])) ? (arr_8 [i_1] [8] [i_2]) : (arr_8 [i_1] [i_1] [i_2])))) ? ((~(arr_8 [i_1] [i_1] [i_2]))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (arr_8 [i_1] [i_1] [i_2]) : (((/* implicit */int) arr_5 [i_1] [i_2]))))))) : ((+(max((arr_4 [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2]))))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_3 - 1] = ((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_1]);
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_3 - 1])) ? (((/* implicit */int) arr_5 [i_1] [i_3 - 1])) : (((/* implicit */int) arr_5 [i_1] [i_3 - 1])))))));
            arr_13 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_1] [i_1] [10U]) ? (arr_10 [i_1] [i_3] [i_3]) : (arr_10 [i_1] [i_1] [(short)3])))) ? (((/* implicit */unsigned long long int) arr_8 [(signed char)8] [i_1] [i_3 - 1])) : ((+(arr_11 [i_1] [i_3] [i_1])))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_4])) ? (arr_8 [i_1] [i_4] [i_4]) : (arr_8 [i_1] [i_1] [i_4])))) : (arr_4 [9] [i_4]))))));
            arr_16 [9ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_4]))) : (arr_4 [i_4] [i_4])))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1] [i_1] [i_4])))))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                arr_19 [9ULL] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_5])) ? (arr_17 [i_1] [i_1] [i_5]) : (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_5]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1] [i_4] [(short)11])) - (arr_8 [i_1] [i_4] [(unsigned char)2])))) : (((arr_14 [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_4]))) : (arr_3 [i_1] [i_4])))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned int) arr_4 [i_1] [i_4])))));
                var_20 += ((/* implicit */_Bool) ((arr_8 [i_5] [i_4] [i_5]) & (((/* implicit */int) arr_14 [i_1]))));
            }
        }
        arr_20 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_18 [i_1] [i_1] [i_1]))) ? (((((/* implicit */_Bool) (~(arr_8 [i_1] [i_1] [i_1])))) ? ((-(arr_4 [i_1] [(signed char)7]))) : (min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_11 [i_1] [i_1] [i_1]))))))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((int) arr_1 [i_6])), (((int) arr_3 [i_6] [i_6]))))) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_5 [i_6] [i_6])), (arr_10 [i_6] [i_6] [i_6]))))) : (max((((((/* implicit */_Bool) arr_17 [(signed char)10] [i_6] [i_6])) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) arr_0 [i_6] [i_6])))), ((+(arr_8 [i_6] [i_6] [i_6]))))))))));
        /* LoopSeq 3 */
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            arr_28 [i_6] [i_7] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (-(arr_21 [7])))), (((((/* implicit */_Bool) arr_25 [i_6] [8ULL] [(unsigned short)2])) ? (arr_11 [(short)0] [(short)9] [(short)1]) : (((/* implicit */unsigned long long int) arr_21 [i_7])))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_15 [i_6] [i_6])))) - (((/* implicit */int) ((arr_3 [i_6] [i_7]) > (arr_3 [i_6] [i_7])))))))));
            var_22 &= ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6] [i_7]))) + (arr_9 [i_6])))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [12ULL] [i_7]))) + (arr_25 [i_6] [i_6] [i_7]))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_23 [i_7])), (arr_24 [i_6] [i_7])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_7])) ? (arr_9 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6] [i_7] [i_7])))))) : (max((arr_11 [i_6] [i_7] [i_7]), (arr_11 [i_6] [1U] [i_7])))))));
        }
        for (short i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            arr_31 [i_6] [i_8] = ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_27 [i_6] [i_6]), (arr_27 [i_6] [i_8])))), (((arr_27 [i_6] [i_8]) ? (((/* implicit */int) arr_27 [i_8] [i_8])) : (((/* implicit */int) arr_27 [i_6] [i_8]))))));
            var_23 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)222), ((unsigned char)223))))) > (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_6] [i_8])) ? (((/* implicit */int) arr_1 [i_8])) : (((/* implicit */int) arr_23 [i_6]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6] [i_8]))) + (arr_4 [i_6] [i_8])))))));
            arr_32 [i_6] = ((/* implicit */_Bool) (-(((max((((/* implicit */unsigned long long int) arr_27 [i_6] [i_8])), (arr_4 [i_6] [i_8]))) << (((arr_30 [(unsigned char)11]) + (464536010)))))));
            var_24 ^= ((/* implicit */unsigned char) (-(((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_6] [i_6]))))) << (((min((arr_11 [i_6] [i_6] [i_8]), (((/* implicit */unsigned long long int) arr_23 [i_6])))) - (89ULL)))))));
        }
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (-(((max((arr_11 [i_6] [i_6] [i_9]), (((/* implicit */unsigned long long int) arr_24 [(unsigned short)5] [(unsigned short)5])))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_6] [i_9])) ? (arr_8 [i_6] [i_9] [i_9]) : (arr_8 [6ULL] [i_6] [i_9])))))))))));
            arr_35 [i_6] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) arr_1 [i_6])))))))), (((((/* implicit */_Bool) ((arr_11 [i_6] [i_6] [i_9]) * (((/* implicit */unsigned long long int) arr_30 [i_6]))))) ? (((/* implicit */int) arr_7 [i_6] [i_6] [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_9] [i_9])))))))));
            var_26 = (+((~(((/* implicit */int) ((((/* implicit */_Bool) -1885307826)) && (((/* implicit */_Bool) 45198910))))))));
            var_27 = ((/* implicit */short) min((max((2199423039U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6] [i_9]))) - (arr_4 [i_6] [i_6]))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_6] [i_9] [(unsigned char)1]))))))))));
        }
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_30 [i_6])), (min((arr_34 [i_6]), (arr_34 [i_6])))))) ? (max((((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (((/* implicit */int) arr_0 [i_6] [i_6])) : (((/* implicit */int) arr_1 [i_6])))), (((arr_7 [i_6] [i_6] [i_6]) ? (arr_8 [i_6] [i_6] [i_6]) : (((/* implicit */int) arr_7 [i_6] [i_6] [i_6])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_27 [i_6] [(signed char)0])) : (arr_30 [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_6] [i_6]))))) : (((((/* implicit */_Bool) arr_34 [i_6])) ? (((/* implicit */int) arr_0 [i_6] [i_6])) : (((/* implicit */int) arr_27 [i_6] [i_6]))))))));
    }
    var_29 = ((/* implicit */unsigned char) max((3845728966U), (((/* implicit */unsigned int) (signed char)0))));
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_12)))))) ? ((-(max((((/* implicit */int) var_11)), (var_5))))) : (((/* implicit */int) var_9))));
    var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1885307836)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))) : (4173642547U))))));
}
