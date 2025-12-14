/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98014
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
    var_18 = var_5;
    var_19 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_0 [i_1 + 2] [i_1]) : (arr_0 [i_1 - 1] [i_2])))) ? (((arr_0 [i_1 - 1] [i_1 + 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1])) ? (arr_0 [i_1 + 1] [i_2]) : (arr_0 [i_1 + 1] [i_1])))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) max((arr_4 [i_0]), (var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 + 1])) | (((/* implicit */int) arr_3 [i_1 + 1]))))) : ((+(arr_2 [i_1 + 2])))));
                }
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(var_8))) * (((((/* implicit */int) var_4)) / (var_8)))))) ? ((+(max((((/* implicit */unsigned long long int) var_11)), (arr_0 [i_0] [i_1 + 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1])))))));
                    var_22 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_3]))))) ^ (((arr_0 [i_0] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_8 [i_1]))))))));
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_1 + 2] [i_4] [i_4] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4432364204242827703LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (arr_14 [i_0])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_4] [i_5])) ? (arr_5 [i_6] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_1 + 1] [i_1])))) : (var_2)));
                                arr_23 [i_5] [i_1] [i_4] [i_5] [i_1] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (-(var_11)))) ? ((+(arr_5 [i_0] [i_1] [i_4] [i_5]))) : (min((((/* implicit */unsigned long long int) var_14)), (var_9))))));
                                var_23 += ((/* implicit */unsigned long long int) arr_14 [i_0]);
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_20 [i_1 + 1] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_20 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_0] [i_0] [i_1 + 2])))) ? (arr_20 [i_1 - 1] [i_1 + 2] [i_0] [i_1] [i_1] [i_0] [i_0]) : ((~(arr_20 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_0] [i_0] [i_1])))));
                var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_14)))))), (((int) (+(arr_11 [i_1] [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_7 = 2; i_7 < 21; i_7 += 2) 
    {
        var_26 = ((/* implicit */long long int) arr_25 [i_7]);
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */int) var_14)) > (((/* implicit */int) ((_Bool) arr_24 [i_7 - 1] [i_7 - 1]))))))));
        var_28 = ((((/* implicit */_Bool) var_5)) ? (arr_25 [i_7 - 2]) : (max((arr_25 [i_7]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_7] [i_7])) ? (((/* implicit */int) arr_24 [i_7 - 2] [i_7])) : (((/* implicit */int) arr_24 [i_7 - 2] [i_7]))))))));
        var_29 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_24 [i_7 - 1] [i_7]))))) ? ((~(arr_25 [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_8 = 4; i_8 < 22; i_8 += 4) 
    {
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_8 - 1])) ? (((/* implicit */int) arr_27 [i_8 + 2])) : (((/* implicit */int) arr_27 [i_8 + 1]))));
        var_31 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_27 [i_8 - 3]))));
        var_32 = ((/* implicit */_Bool) ((long long int) arr_26 [i_8 - 3]));
    }
}
