/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61878
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
    var_12 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) < (((((/* implicit */unsigned long long int) var_1)) & ((~(8589934591ULL)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned int) ((var_8) + (((/* implicit */int) arr_0 [i_0]))));
            var_13 = ((/* implicit */unsigned long long int) ((((var_8) + (2147483647))) >> ((((~(((/* implicit */int) (signed char)120)))) + (121)))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)8191))));
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            for (unsigned int i_4 = 3; i_4 < 23; i_4 += 2) 
            {
                for (unsigned short i_5 = 4; i_5 < 22; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_19 [20U] [i_4] [i_4] [13ULL] = (signed char)-18;
                            var_14 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_6] [i_2] [i_4 - 1]) == (((arr_15 [21U] [i_5] [21U] [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))) & (((((((/* implicit */_Bool) (short)-20758)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_15 [2ULL] [1U] [i_4] [1U] [1U]))) / (((((/* implicit */_Bool) var_1)) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) -5206675189583547806LL)))))));
                            arr_20 [i_4] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) (~(-5206675189583547801LL)));
                        }
                        var_15 = arr_14 [i_2] [i_4] [i_4];
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */short) min((((/* implicit */int) (signed char)-1)), ((-(var_3)))));
    }
    for (int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (int i_11 = 1; i_11 < 22; i_11 += 3) 
                        {
                            {
                                var_17 = (~((~(arr_31 [i_7] [i_11 + 2] [i_7] [i_11 + 2] [i_11]))));
                                var_18 += min((arr_15 [i_11 + 2] [i_11 - 1] [i_11 - 1] [i_11 + 2] [i_9]), (((((/* implicit */_Bool) arr_15 [i_11 + 1] [i_11 + 1] [i_11 + 2] [i_11 - 1] [i_11])) ? (arr_15 [i_11 - 1] [i_11 + 1] [i_11 + 2] [i_11 - 1] [i_7]) : (arr_15 [i_11 + 1] [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_8]))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) min((((long long int) min((((/* implicit */long long int) var_2)), (arr_14 [i_7] [i_8] [i_9])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_7] [i_7])))))));
                    var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
        arr_32 [i_7] = ((/* implicit */long long int) var_0);
        arr_33 [i_7] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(15052104527386778951ULL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)34781))))) : (arr_26 [i_7] [i_7] [i_7] [i_7])))));
    }
}
