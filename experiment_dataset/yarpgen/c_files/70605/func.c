/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70605
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((var_2), (1785547210U))) / (min((((/* implicit */unsigned int) var_8)), (var_2)))))) ? (max((((/* implicit */int) ((unsigned char) (short)1792))), ((((_Bool)0) ? (((/* implicit */int) var_7)) : (var_9))))) : (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-92)) ? (-1LL) : (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_11 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((unsigned long long int) (_Bool)1)))), (max((13495858631798280715ULL), (((/* implicit */unsigned long long int) (unsigned char)170))))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)15))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_5]))));
                        arr_17 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_4 [i_0] [i_0] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0] [i_5])))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (unsigned char)129)) | (((/* implicit */int) (_Bool)1)))));
                        var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_2] [i_6] [i_1]))))) ? (arr_14 [i_0] [i_0] [i_0] [i_6 - 1] [i_2]) : (((/* implicit */int) (unsigned char)129))))) + ((-(min((var_2), (((/* implicit */unsigned int) (unsigned char)255))))))));
                        var_15 = ((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_0]);
                    }
                    for (unsigned char i_7 = 1; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned long long int) (unsigned short)28141);
                        var_17 -= ((/* implicit */unsigned long long int) ((long long int) 626758499862784504ULL));
                    }
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1315027198U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_13 [i_2] [i_2])) : (((/* implicit */int) ((13495858631798280689ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_2)) : (var_3)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (9993704676870430160ULL))) : (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_2] [i_2])), (arr_20 [i_0] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (_Bool)1))))))))));
                    arr_23 [i_0] [i_2] = ((/* implicit */_Bool) var_8);
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            {
                                arr_30 [i_9] [i_8] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_0]))))), (arr_24 [i_0] [i_0] [i_0] [i_0])));
                                var_19 |= ((/* implicit */long long int) (((~((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_2])))))) ^ (((((/* implicit */_Bool) ((int) arr_10 [i_0] [i_0] [i_2]))) ? (((/* implicit */int) (short)-24821)) : (((/* implicit */int) ((_Bool) (short)2211)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
