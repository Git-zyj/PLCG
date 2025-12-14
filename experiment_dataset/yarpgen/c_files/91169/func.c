/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91169
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (2881397969U)))) + (arr_1 [i_0] [i_0]))) + ((+(((arr_1 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((arr_0 [(_Bool)1]), (arr_0 [10LL])))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */short) min((min((((arr_1 [(unsigned char)14] [(unsigned char)14]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])))), (min((max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])), (arr_3 [0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1])) < (((/* implicit */int) arr_8 [i_2])))))))));
                    arr_10 [i_2] [16ULL] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4815))) : (-4LL)));
                    arr_11 [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_6 [17]) : (((/* implicit */int) max((arr_7 [(_Bool)1] [i_2]), (((/* implicit */unsigned short) arr_5 [i_0] [i_1]))))))), (((arr_8 [8]) ? (((((/* implicit */int) arr_0 [i_0])) / (arr_6 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_0])) <= (((/* implicit */int) arr_8 [i_1])))))))));
                    arr_12 [i_2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_5 [i_2] [11U])) : (((/* implicit */int) arr_7 [i_0] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_0])))))))) : (((((/* implicit */_Bool) (+(arr_6 [i_1])))) ? (((((/* implicit */int) arr_5 [i_1] [i_2])) << (((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_7 [i_1] [i_2]))))))));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_5 [(unsigned char)0] [(unsigned char)0])))) << (((((((/* implicit */_Bool) (unsigned short)7774)) ? (((/* implicit */unsigned long long int) -4LL)) : (0ULL))) - (18446744073709551609ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (arr_3 [15]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))))))) : (((((((/* implicit */_Bool) -617177671)) ? (2870352161745115557ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0])))))))));
        arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0]))))), (arr_1 [i_0] [(unsigned short)3])))) ? (((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [(unsigned short)17])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_8 [0])))) : (((/* implicit */int) max((arr_4 [14LL] [i_0]), (arr_4 [i_0] [i_0]))))))));
    }
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_6), (((/* implicit */unsigned long long int) var_1)))), (((9007199187632128ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))))) ? (((((((/* implicit */long long int) var_12)) == (var_5))) ? (var_13) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
}
