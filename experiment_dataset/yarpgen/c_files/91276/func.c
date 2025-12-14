/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91276
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 - 3]))));
        arr_2 [i_0] [i_0] = ((unsigned short) arr_1 [i_0 - 1]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_16))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_13 [i_1 + 2] [i_2 + 1] [i_3 - 1] = arr_1 [i_0];
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_21 = (+(((/* implicit */int) arr_5 [i_4])));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (unsigned char)137)))))));
                            var_23 = ((/* implicit */short) arr_11 [i_4] [i_2 - 1] [i_1] [i_0]);
                            arr_17 [i_0] [i_1 - 1] [i_0] [i_3 + 1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)960))));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) ((arr_11 [i_0] [i_0] [i_2] [i_3 + 1]) << (((var_3) - (4075890706U)))));
                            arr_22 [i_5 - 1] [i_5 - 1] [i_2 - 2] [i_2 - 2] [i_1] = ((/* implicit */unsigned long long int) (short)12147);
                            arr_23 [i_1 - 1] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1] [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) : (((arr_18 [i_3] [i_2] [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0 - 3] [i_1])))))));
                            var_25 &= ((/* implicit */unsigned char) ((((unsigned long long int) (-2147483647 - 1))) < (arr_1 [i_0 + 1])));
                        }
                        arr_24 [i_0 - 2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_0]);
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1 + 2]))) : ((~(var_8))))))));
        }
        for (unsigned char i_6 = 2; i_6 < 21; i_6 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (~(arr_18 [i_0 - 1] [(unsigned short)19] [i_6 + 2] [(unsigned short)10]))))));
            var_28 = ((((/* implicit */_Bool) 10217690307972175404ULL)) || (((/* implicit */_Bool) 11859127529339964258ULL)));
            var_29 = ((/* implicit */unsigned short) (~(arr_7 [i_0 + 1] [i_0 - 3] [i_0 + 1])));
        }
    }
    var_30 = min((((/* implicit */unsigned long long int) var_7)), ((~((-(17870283321406128128ULL))))));
}
