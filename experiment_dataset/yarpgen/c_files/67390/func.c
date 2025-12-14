/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67390
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
    var_18 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_0] |= ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (unsigned short)65535))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                var_20 = ((/* implicit */int) var_5);
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_2]))))) ? (((arr_7 [i_0] [i_1] [i_2]) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_1 [i_2])))))) ? (((((/* implicit */_Bool) arr_8 [(short)14] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_2 + 1])))) : ((-((-(((/* implicit */int) var_17)))))));
                var_22 = ((/* implicit */long long int) var_7);
            }
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
        }
        for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_23 = ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)148))))) ? (((/* implicit */unsigned int) arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_3 - 1])) : (var_5))) <= (max(((((_Bool)1) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))))), (((/* implicit */unsigned int) arr_0 [i_0])))));
                arr_16 [i_4] [i_4 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) 3217777447U)) ? (((((var_16) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_3 + 1] [i_3 + 1]))))) << (((((/* implicit */int) var_13)) + (107))))) : (((/* implicit */unsigned long long int) var_3))));
                arr_17 [i_4] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) ^ (var_5)))) ? (((((/* implicit */_Bool) var_3)) ? (arr_1 [8ULL]) : (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-5)) <= (((/* implicit */int) var_14)))))))), (((/* implicit */unsigned int) (unsigned char)109))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 3; i_6 < 20; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)103)) | (((((/* implicit */int) (unsigned char)109)) / (540970298)))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -540970278)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */int) (unsigned char)174)) : ((-(-540970278)))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        arr_25 [i_7] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) (((_Bool)1) ? (15ULL) : (((/* implicit */unsigned long long int) 540970273))))))));
                        var_26 = ((/* implicit */unsigned char) (-((((!(((/* implicit */_Bool) arr_3 [i_3] [i_4] [i_7])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) : ((~(arr_5 [i_0] [i_0] [i_0])))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [(_Bool)1]), (((/* implicit */short) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) ((unsigned short) arr_21 [i_3 - 2] [i_4 - 1] [i_5] [i_7]))) ? ((-(2058042859U))) : (((arr_1 [i_0]) - (arr_1 [i_0])))))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 21; i_8 += 2) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_3 [i_4 - 1] [i_3 + 2] [i_3 - 1])))))));
                    }
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_7 [i_3 - 1] [i_3 - 2] [i_4 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_3 - 1] [i_3] [i_3] [i_3 - 2]))) : (arr_1 [i_4 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [(short)12] [i_4] [(short)12] [(short)12])))))));
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (arr_8 [i_4 - 1] [i_3 + 2] [i_0]) : (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned long long int) min((arr_8 [i_4 - 1] [i_3 + 2] [i_3]), (((/* implicit */unsigned int) arr_19 [i_4] [i_4]))))) : (((unsigned long long int) arr_7 [i_4 - 1] [i_3 + 2] [i_3 - 1]))));
                }
            }
            var_31 *= ((/* implicit */short) ((min((var_11), ((+(arr_24 [i_0] [i_3] [i_0] [20ULL] [6ULL]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_13))))));
            var_32 ^= ((/* implicit */short) arr_5 [i_0] [i_0] [i_0]);
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */unsigned long long int) ((var_9) & (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))))) : (max(((+(var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) -776216499))))))))))));
        }
    }
    var_34 = ((/* implicit */int) var_6);
}
