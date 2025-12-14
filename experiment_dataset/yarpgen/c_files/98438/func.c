/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98438
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((9636315642940359224ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_5)))))) : (((/* implicit */int) var_5)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((unsigned short) arr_2 [i_0 - 1]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_1 [i_0 - 1] [i_0 - 1])));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_12 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (short)-17588))))), (((unsigned int) (short)-1)))));
        var_13 = min((((((/* implicit */_Bool) arr_5 [i_1])) ? (2109556877975970695LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))), (((/* implicit */long long int) arr_6 [i_1])));
        arr_7 [i_1] = ((/* implicit */unsigned short) var_0);
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) min((((/* implicit */short) (_Bool)1)), (arr_5 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) : (((/* implicit */int) var_9))));
    }
    for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        arr_12 [i_2] &= ((/* implicit */unsigned int) var_4);
        var_14 = ((/* implicit */signed char) min((((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) > (-2109556877975970695LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_9 [i_2] [i_2])))))) : (min((7810726701346843317ULL), (((/* implicit */unsigned long long int) 2109556877975970695LL)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)168)), ((unsigned short)42123))))));
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 4])) ? (((/* implicit */int) arr_11 [i_2 + 2])) : (((/* implicit */int) ((_Bool) -2109556877975970696LL)))))), (2109556877975970695LL)));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_3]))));
        arr_16 [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_3]))));
        arr_17 [i_3] [i_3] = ((/* implicit */long long int) arr_6 [i_3]);
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            var_17 = ((/* implicit */long long int) (((_Bool)1) ? (-1841068744) : (((((/* implicit */_Bool) (unsigned short)23411)) ? (1586672302) : (((/* implicit */int) (unsigned short)23411))))));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_3]))))) ? (((/* implicit */int) ((arr_14 [i_4 + 1] [i_3]) || (((/* implicit */_Bool) arr_18 [i_4] [i_4]))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)42123)) < (((/* implicit */int) arr_5 [i_4])))))));
            arr_21 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18014397972611072LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : ((((_Bool)1) ? (-2109556877975970696LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
            var_19 = ((/* implicit */short) arr_11 [i_4]);
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65519)) > (((/* implicit */int) arr_18 [i_3] [i_4 + 1])))))));
        }
        var_21 += (!(((/* implicit */_Bool) arr_11 [i_3])));
    }
}
