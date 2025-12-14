/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88318
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_1 + 3]);
                var_17 += ((/* implicit */short) max((min(((_Bool)1), ((_Bool)1))), (((_Bool) ((signed char) arr_1 [i_1])))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) (((((-(((/* implicit */int) (signed char)23)))) + (2147483647))) << (((((((/* implicit */_Bool) max((arr_6 [i_1] [i_1 + 3] [i_1] [i_1]), (((/* implicit */long long int) (_Bool)1))))) ? (((arr_2 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [(unsigned char)9] [i_0])) : (((/* implicit */int) arr_1 [i_1]))))))) - (16102146U)))))) : (((/* implicit */long long int) (((((-(((/* implicit */int) (signed char)23)))) + (2147483647))) << (((((((((/* implicit */_Bool) max((arr_6 [i_1] [i_1 + 3] [i_1] [i_1]), (((/* implicit */long long int) (_Bool)1))))) ? (((arr_2 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [(unsigned char)9] [i_0])) : (((/* implicit */int) arr_1 [i_1]))))))) - (16102146U))) - (4281787380U))))));
                    arr_9 [i_0] [i_0] [(short)2] [(short)2] = ((/* implicit */short) max(((-(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))), (((/* implicit */unsigned int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_14);
                        arr_15 [i_0] [i_0] [i_3] [16LL] |= ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0]))) : (((arr_3 [11ULL]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [2LL] [2LL]))))));
                    }
                    for (long long int i_4 = 2; i_4 < 22; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(arr_2 [8U])))) / (((((/* implicit */long long int) ((/* implicit */int) var_6))) + (arr_6 [i_2] [i_2 + 1] [i_2] [i_4 + 2]))))))));
                        var_19 = ((/* implicit */unsigned char) ((short) max((((/* implicit */int) (signed char)-35)), (((((/* implicit */int) (signed char)34)) & (((/* implicit */int) (signed char)127)))))));
                    }
                    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)5412))));
                }
            }
        } 
    } 
    var_21 = ((((((((/* implicit */int) (unsigned short)45464)) - (((/* implicit */int) (signed char)0)))) == (((/* implicit */int) var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5326056403474286122LL));
    /* LoopSeq 1 */
    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 3) 
        {
            arr_25 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5] [i_6 + 1])) ? (arr_20 [i_5] [i_5]) : (arr_20 [i_5] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_5 + 2] [i_5 + 1])) != (((/* implicit */int) arr_1 [i_6])))))) : (((((((/* implicit */_Bool) arr_6 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60123))) : (arr_19 [i_6]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
            arr_26 [i_5] [i_5] [i_5] = ((/* implicit */signed char) max((arr_17 [i_5 + 2] [i_5] [i_5 + 2] [i_6] [i_6 + 1]), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */long long int) var_10)) : (arr_22 [i_5] [i_6 + 1] [i_6]))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))))))));
            arr_27 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) arr_16 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_6 + 1]))) > (arr_6 [i_5 + 1] [i_5 + 2] [i_5] [i_5])));
        }
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            arr_31 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_5 + 2])) < (((/* implicit */int) arr_11 [i_5 - 1]))))) != (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) arr_11 [i_5 + 2])))))));
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (signed char i_10 = 1; i_10 < 9; i_10 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((min((((arr_12 [i_5 + 1] [i_7] [i_8] [i_9] [i_10]) & (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)22] [i_7]))))))) ^ (((unsigned int) min((var_14), (((/* implicit */unsigned int) arr_38 [i_9] [i_8] [i_7] [i_5]))))))))));
                            var_23 = ((/* implicit */long long int) max((arr_3 [i_5]), (((/* implicit */unsigned int) var_8))));
                        }
                    } 
                } 
            } 
        }
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 - 1])) ? (-7801780553079874342LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45464)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_38 [i_5] [i_5 + 1] [i_5 - 1] [i_5]), (arr_13 [i_5] [i_5] [i_5 - 1] [i_5]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_5 + 2] [i_5 + 2])) << (((((/* implicit */int) arr_34 [i_5 - 1] [i_5] [(short)8] [i_5 - 1])) - (45578)))))) ? (arr_37 [i_5 + 1] [i_5 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_7 [(unsigned short)20] [i_5 - 1]))))))))))));
    }
}
