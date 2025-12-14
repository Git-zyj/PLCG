/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88237
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [(short)12] [12ULL] |= ((/* implicit */short) ((unsigned int) ((unsigned long long int) arr_1 [(_Bool)1])));
                var_11 = ((/* implicit */_Bool) ((int) (_Bool)0));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((unsigned char) arr_4 [i_0] [i_0] [i_1]))))) * (((((288230374004228096ULL) / (var_3))) * (((/* implicit */unsigned long long int) ((8315599110864326927LL) / (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1 + 1] [i_2] |= ((/* implicit */_Bool) ((((_Bool) min(((_Bool)1), ((_Bool)1)))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [1U])) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_2])), ((unsigned short)60152)))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5547))) < (1035489051002753027ULL))))))));
                                var_13 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1035489051002753027ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [(short)0]))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)24168)), (17411255022706798588ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((arr_1 [i_2]), (1035489051002753047ULL)))))));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_2] [8ULL] &= (+(((((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0))) + (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_2] [i_1]))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (6022153457994261920ULL)))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((5212970289046553717ULL) + (arr_8 [i_0] [i_2] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (17411255022706798589ULL))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_3))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) & (var_3))));
                    arr_17 [i_2] [i_0] [i_2] [0U] &= ((/* implicit */unsigned short) ((_Bool) max((min((17411255022706798588ULL), (var_3))), (((/* implicit */unsigned long long int) arr_13 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 2])))));
                    arr_18 [i_1 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55641)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_2] [i_0])), (var_6))) : ((~(17411255022706798588ULL))))), (((/* implicit */unsigned long long int) max((arr_10 [i_1 + 1] [i_0] [i_1 + 3] [i_1 - 1]), (var_9))))));
                }
                for (signed char i_5 = 2; i_5 < 13; i_5 += 1) 
                {
                    var_14 = ((/* implicit */unsigned char) var_8);
                    arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7100)))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [7U] [7U] [5ULL])), ((unsigned char)0))))))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_2);
}
