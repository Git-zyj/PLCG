/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85731
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
    for (short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_0 [i_1] [(unsigned char)9]))));
                                var_19 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_10 [5ULL] [(_Bool)1] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3] [i_3] [i_4 + 2] [i_4])))))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (3326051078U)))) / (min((274753242051793868LL), (((/* implicit */long long int) (signed char)-37))))));
                                var_21 -= ((/* implicit */short) var_7);
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)193)), (274753242051793868LL)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-16)), (891794045U)))) : (((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0] [i_1] [(short)10]) : (((/* implicit */long long int) arr_7 [i_0 + 1] [i_0 + 1] [i_2])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0]))))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [(unsigned char)8] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_13 [i_0] [i_0] [6LL] [i_1])), (arr_6 [i_0])))) % (arr_2 [i_1] [(_Bool)1] [i_1]))) > (min((((/* implicit */long long int) (~(arr_7 [i_0] [i_0] [i_0])))), (arr_10 [i_0] [i_0 + 1] [i_0] [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        var_23 += ((/* implicit */signed char) var_4);
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_5] [i_5] [(signed char)8]) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5] [i_5])))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (arr_2 [i_5] [i_5] [i_5]) : (((((/* implicit */_Bool) var_10)) ? (arr_4 [i_5] [i_5]) : (((/* implicit */long long int) arr_11 [i_5] [i_5] [15ULL])))))) : (min((((/* implicit */long long int) arr_16 [i_5] [i_5])), (arr_2 [(short)6] [i_5] [i_5])))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)128))))) ? (arr_19 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) arr_0 [i_6] [i_6]))))))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_5 [i_6] [i_6] [11U] [11U])))), (((var_15) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6] [i_6])))))))) : (((/* implicit */int) var_14))));
        arr_22 [(_Bool)1] = ((/* implicit */_Bool) var_14);
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned int) min((arr_19 [i_6]), (arr_10 [(signed char)12] [(signed char)12] [i_6] [i_6] [i_6] [i_6])));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_13 [i_7] [i_7] [i_7] [3]))) > (((/* implicit */int) arr_13 [i_7] [i_7] [(_Bool)1] [i_7]))));
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_20 [i_7] [i_7])))) ? (((/* implicit */int) arr_24 [(short)16])) : ((~(((/* implicit */int) (short)8222))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7]))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) * (((((/* implicit */_Bool) arr_16 [i_7] [i_7])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_7]))))))))))));
        arr_26 [i_7] [i_7] = var_14;
        var_28 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_8 [(short)21] [i_7] [i_7] [(unsigned char)18])) | (((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7])))), ((~(((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7]))))));
    }
    var_29 = ((/* implicit */long long int) ((_Bool) (short)27685));
}
