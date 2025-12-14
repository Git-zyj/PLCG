/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8057
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
    var_12 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) (_Bool)1))))) | (((arr_2 [i_0]) >> (((4294967295U) - (4294967268U)))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((arr_0 [i_0] [i_0]) ? (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) arr_2 [i_0])))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967267U)) || (((/* implicit */_Bool) (unsigned char)0)))) ? (1U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6830968766554878430LL)) ? (53517378) : (((/* implicit */int) (unsigned short)17251)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] = ((/* implicit */unsigned short) 8U);
                                var_13 = (+(((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_0 [i_2] [i_3])))));
                                var_14 = ((/* implicit */short) ((var_3) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-61))) >= (arr_15 [i_1] [i_1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */unsigned short) 2518122082U);
    }
    for (short i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) (unsigned short)57645);
                            arr_31 [i_5] [i_6 + 3] [i_5] [i_8] [i_9] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) + (4294967287U))) > (min((((/* implicit */unsigned int) (~(-1136397764)))), (arr_2 [i_8])))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned long long int) min(((+(max((((/* implicit */long long int) var_11)), (var_5))))), (((/* implicit */long long int) arr_13 [i_5] [i_5] [i_6 + 2] [i_6 + 3] [i_6]))));
        }
        for (long long int i_10 = 1; i_10 < 18; i_10 += 4) /* same iter space */
        {
            arr_36 [i_5] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_10] [i_5 - 1])), (arr_16 [i_5] [i_10 + 2] [i_10 - 1] [i_10 - 1] [i_5] [i_10 + 1] [i_10 + 2]))))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)7901), (((/* implicit */unsigned short) arr_8 [i_5] [i_10])))))) : (var_7)))));
            arr_37 [i_5] = ((/* implicit */int) arr_8 [i_5 - 1] [i_5]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                var_17 = ((arr_5 [i_5 - 1] [i_10 + 3]) - (((/* implicit */unsigned long long int) 186491007)));
                arr_41 [i_5] [i_10] = ((-777119716) ^ (-1860594414));
            }
            arr_42 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (unsigned short)8311))));
        }
        arr_43 [i_5] = ((/* implicit */unsigned long long int) max((min((var_5), (((/* implicit */long long int) arr_20 [i_5 - 1] [i_5 + 2])))), (((/* implicit */long long int) arr_19 [i_5 - 1]))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25; i_12 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) -6527698706271093615LL)) ? (((/* implicit */int) arr_45 [i_12])) : (var_8))));
            arr_48 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57645)) || (((/* implicit */_Bool) arr_44 [i_12]))));
            arr_49 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) arr_45 [i_12]))));
            arr_50 [i_12] = ((/* implicit */_Bool) (signed char)(-127 - 1));
        }
        var_19 = ((/* implicit */unsigned int) arr_45 [i_12]);
        var_20 = ((/* implicit */_Bool) ((unsigned long long int) arr_45 [i_12]));
    }
    for (int i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        arr_53 [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_7 [i_14] [i_14]), (min((((/* implicit */long long int) (unsigned short)12159)), (arr_14 [i_14] [i_14] [i_14]))))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_12 [i_14] [i_14] [10ULL] [i_14])))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_14]))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [i_14] [i_14]), (((/* implicit */unsigned long long int) (signed char)-35))))))))));
    }
}
