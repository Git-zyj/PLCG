/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98691
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_4 [(unsigned short)4] = min((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)16])) ? (arr_3 [(short)12] [(unsigned short)15]) : (((/* implicit */int) arr_0 [(_Bool)1]))))))), (((/* implicit */unsigned long long int) arr_0 [(short)17])));
        var_19 = ((/* implicit */unsigned long long int) ((int) arr_2 [(short)3] [i_0]));
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) var_7)))) ? (arr_3 [i_1] [i_1]) : (min((-1102756991), (-1650059761)))))) ? (((min((var_13), (((/* implicit */unsigned int) 1102757016)))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (1102756988) : (((/* implicit */int) var_4))))))) : (max((((((/* implicit */_Bool) -2147483634)) ? (arr_6 [i_1] [13LL]) : (((/* implicit */unsigned int) 1102756993)))), (((/* implicit */unsigned int) min(((short)11173), (((/* implicit */short) arr_2 [i_1] [(short)1])))))))));
        arr_8 [i_1] [(short)4] = ((/* implicit */int) var_12);
    }
    var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_13))))))));
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                arr_13 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((var_13), (((/* implicit */unsigned int) arr_11 [i_3] [i_2] [(unsigned short)6])))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [(_Bool)1])) ? (((/* implicit */int) (short)2)) : (arr_10 [17]))))))) ? (max((((((/* implicit */_Bool) 2726717812U)) ? (((/* implicit */int) (unsigned short)7064)) : (((/* implicit */int) (short)-22550)))), (arr_10 [i_2 + 3]))) : ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-126)) : (arr_10 [i_2])))))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (int i_6 = 2; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) ((unsigned int) arr_20 [i_6] [i_5] [i_4] [(unsigned short)19] [i_2])))), (min((((/* implicit */long long int) max((arr_20 [(unsigned char)6] [i_3] [i_4] [9U] [(short)5]), (((/* implicit */unsigned int) arr_18 [i_2] [i_3] [16]))))), (((((/* implicit */long long int) ((/* implicit */int) (short)2))) * (var_3)))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_19 [i_4] [i_3] [7LL] [i_3] [i_6] [3] [i_3]))) + (max((arr_9 [i_2 + 4]), (((/* implicit */int) arr_16 [i_2 + 2])))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */long long int) arr_14 [i_2] [(unsigned char)7] [(unsigned char)13] [3]);
            }
        } 
    } 
    var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)9)) : (2147483647))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))));
}
