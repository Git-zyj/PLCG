/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81125
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_1])))))), (arr_3 [i_1])));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    var_14 ^= ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1 - 3] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1 + 1] [i_0])))))) : ((-(arr_7 [i_1] [i_0] [i_1 + 2] [i_0]))));
                    var_15 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                    var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2])))))) ? (((/* implicit */unsigned long long int) ((-1071302465121758459LL) | (arr_7 [i_1] [i_1] [i_1] [i_1])))) : (max((((/* implicit */unsigned long long int) arr_2 [i_2] [i_0])), (arr_6 [i_0] [i_0] [(unsigned short)16])))))));
                }
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    arr_11 [i_0] [(signed char)21] [(signed char)21] [i_0] = ((/* implicit */unsigned int) (~(arr_0 [i_0])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */int) max((arr_12 [i_0] [i_1 - 1] [i_4] [i_4]), (((/* implicit */short) (signed char)7))))) << (((((/* implicit */int) ((signed char) (short)-26038))) - (64)))))));
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) arr_15 [4] [4]))))) * (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [(signed char)2] [i_4] [i_5] [i_0] [i_1])) ? (arr_15 [16ULL] [16ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))))))))))));
                            arr_17 [i_4] [i_1] [i_4] [(unsigned char)8] [i_3] = ((/* implicit */unsigned char) ((((_Bool) arr_8 [i_0] [i_0] [i_5 + 1] [(unsigned char)2])) || (((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)59)), (-783941992))))));
                            arr_18 [i_0] [i_1 - 3] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) ((short) arr_0 [19ULL]));
                        }
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */int) arr_3 [(signed char)0]);
                            var_20 = ((/* implicit */short) (-(((/* implicit */int) min((arr_10 [i_1 + 2] [i_4] [i_1 + 2]), (arr_10 [i_1 - 3] [i_4] [(signed char)23]))))));
                            arr_23 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_4] [i_4] [i_4] [i_6] [i_6]);
                        }
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) ((unsigned long long int) (+(arr_7 [i_0] [i_0] [i_3] [i_4]))));
                            var_22 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1 - 1]))) : (var_6))));
                            var_23 = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */unsigned char) arr_19 [i_0] [i_0] [(_Bool)1] [i_0] [i_7])), (((unsigned char) arr_4 [i_0] [i_0] [i_0])))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_16 [i_0] [i_0] [i_4] [i_4] [i_7] [i_0] [i_7]), (((/* implicit */long long int) var_3))))) ? (arr_26 [i_4] [i_1] [i_1 - 1] [i_1 - 3] [i_4] [i_4]) : (((/* implicit */int) arr_24 [i_4] [i_7] [i_7] [i_7] [i_1] [i_4]))))) ? (((/* implicit */unsigned long long int) ((int) 4028681729U))) : (min((((12850224185056775121ULL) >> (((var_1) - (11471521131041687487ULL))))), (((2509873567048127080ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27661)))))))));
                        }
                        for (unsigned char i_8 = 4; i_8 < 21; i_8 += 2) 
                        {
                            arr_30 [i_4] = ((/* implicit */unsigned int) var_11);
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (1822057667U)))))));
                            var_26 *= ((/* implicit */signed char) (+((-((-(arr_14 [i_8] [i_1] [i_1 + 1] [i_1])))))));
                            var_27 = ((/* implicit */unsigned char) arr_13 [i_1 + 2]);
                        }
                        arr_31 [i_4] [i_3] [i_4] [(signed char)13] [i_0] = ((/* implicit */short) min((((unsigned long long int) (-(arr_6 [i_0] [i_0] [11U])))), (((/* implicit */unsigned long long int) arr_13 [i_0]))));
                        arr_32 [i_4] [i_4] [i_4] [8LL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [i_1] [i_4] [i_4] [(_Bool)1] [i_0] [i_3]))))) ? (min((((/* implicit */unsigned int) arr_9 [i_1])), (2472909628U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) << (((((((/* implicit */_Bool) arr_13 [i_0])) ? (min((((/* implicit */unsigned long long int) var_10)), (arr_6 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) << (((((/* implicit */int) var_10)) - (217)))))))) - (194ULL)))));
                    }
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) var_12);
    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) : (((unsigned long long int) (-(((/* implicit */int) (unsigned char)159))))))))));
    /* LoopSeq 1 */
    for (signed char i_9 = 1; i_9 < 15; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_30 -= ((((/* implicit */int) arr_29 [i_10] [i_9] [i_9] [i_9 + 1] [i_9 + 1])) != (((/* implicit */int) ((((var_5) >> (((arr_26 [(short)2] [(short)2] [i_10] [(short)2] [i_9] [(_Bool)1]) + (718454707))))) == (arr_8 [i_10] [i_9 - 1] [(short)16] [i_9])))));
            var_31 = ((/* implicit */unsigned short) (((((~(1584060834))) + (2147483647))) << (((var_1) - (11471521131041687530ULL)))));
            var_32 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_12 [i_9] [i_9] [i_9] [i_10])) ? (((/* implicit */int) arr_25 [i_9] [(unsigned short)13] [i_9] [i_9] [(unsigned short)13])) : (((/* implicit */int) arr_13 [i_9])))) >> (((max((14239577156823770148ULL), (((/* implicit */unsigned long long int) (unsigned char)65)))) - (14239577156823770139ULL))))) >> (((var_8) - (3905269842558066134ULL)))));
        }
        arr_37 [i_9] [i_9] = ((/* implicit */_Bool) var_10);
    }
    var_33 = ((/* implicit */int) (!(((((/* implicit */int) (signed char)-55)) == (((/* implicit */int) (unsigned char)51))))));
}
