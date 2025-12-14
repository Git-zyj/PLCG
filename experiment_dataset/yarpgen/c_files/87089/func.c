/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87089
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
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)4457)) ? (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (_Bool)1))));
        var_19 = ((/* implicit */signed char) arr_1 [i_0]);
        arr_5 [i_0] [i_0 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        var_20 += ((/* implicit */unsigned long long int) arr_0 [i_0 - 3]);
        arr_6 [(signed char)24] &= ((/* implicit */short) arr_3 [i_0 + 1]);
    }
    var_21 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned int i_1 = 2; i_1 < 8; i_1 += 2) 
    {
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - ((~(621046049))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_3 = 3; i_3 < 9; i_3 += 1) 
                {
                    arr_13 [i_3] = ((/* implicit */_Bool) (unsigned short)24139);
                    var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)188))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1 + 2])) / (((/* implicit */int) arr_8 [i_1 + 2])))))));
                    arr_14 [i_1] [i_2] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                }
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_23 [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((((/* implicit */int) arr_18 [i_1])), (arr_3 [i_6])))) ? (arr_15 [i_1] [i_1 + 2] [i_1 + 2] [i_1]) : (((/* implicit */int) arr_8 [i_2]))))));
                                arr_24 [i_1 + 3] [i_2] [10U] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_17 [6] [i_1 + 2] [i_1] [i_1 + 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_1] [2U] [i_1] [i_5] [i_6])) ? (arr_10 [10] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46401))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2LL]))))))) : (((((/* implicit */_Bool) (+(-8039386113050358494LL)))) ? (((((/* implicit */unsigned long long int) 2789455795U)) / (6942655773210619243ULL))) : (((/* implicit */unsigned long long int) -6006969606055144104LL))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) 1408425969156296298ULL);
                    arr_25 [i_1 + 3] [i_1 + 3] = ((/* implicit */_Bool) 394402901);
                    var_26 = ((/* implicit */signed char) arr_7 [i_1 - 2]);
                }
            }
        } 
    } 
}
