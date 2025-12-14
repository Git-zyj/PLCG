/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57944
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (-(((min((var_13), (((/* implicit */unsigned long long int) (_Bool)1)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65518))))))))));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((long long int) (+(max((arr_1 [i_1]), (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [(signed char)7] [i_2] [i_0] = var_3;
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)5)) || ((_Bool)1)));
                                arr_15 [i_4] [i_4] [6LL] &= ((/* implicit */unsigned int) ((max((((arr_7 [i_2]) ^ (arr_7 [i_4]))), (arr_6 [i_4] [i_2] [i_3]))) - (var_2)));
                                arr_16 [i_0] [i_1] [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_1] [i_4]);
                            }
                            for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_5] = arr_0 [i_0];
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] &= ((/* implicit */unsigned char) max((((arr_6 [i_2] [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65491))))), (((max((var_12), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_5])))) * ((+(var_8)))))));
                                var_16 = ((/* implicit */_Bool) min((var_16), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_3) : (var_12)))) ? (((((/* implicit */_Bool) var_13)) ? (-1986876929) : (((/* implicit */int) arr_17 [i_3] [i_1] [i_3])))) : ((-(((/* implicit */int) arr_10 [i_1] [i_2] [i_1] [i_0])))))))))));
                            }
                            var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) & (var_3)))) ? (((((/* implicit */_Bool) var_13)) ? (-1LL) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) min((var_1), (var_1))))))) ? (max((((/* implicit */int) (unsigned short)7818)), (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)15455)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_2] [9] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) var_5)))))))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] = ((/* implicit */short) arr_18 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_8);
}
