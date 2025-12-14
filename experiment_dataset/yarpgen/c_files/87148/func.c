/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87148
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_14)))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [13LL] [(_Bool)1])) || (((/* implicit */_Bool) 3883504487U)))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) == (arr_2 [13] [i_0])));
    }
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((var_10) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) ^ (var_1)))) : ((~(var_2))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_5))) & (((int) (signed char)-11))))))))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_15))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [1LL] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) -1273253528)) + (411462808U)))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_1] [i_2 + 1] [i_3] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (var_6))) ? (arr_5 [i_2 + 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (arr_8 [i_3] [i_2 - 1] [i_1])))))));
                    var_21 = ((/* implicit */unsigned int) (+(-1273253523)));
                    arr_14 [i_1] &= ((/* implicit */unsigned short) (~(((var_2) >> (((arr_0 [(_Bool)1]) - (10603655537759723653ULL)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) ((arr_4 [i_1]) * (((/* implicit */int) arr_1 [i_1]))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                arr_25 [(unsigned short)13] [i_4 - 1] [i_4] [i_5] [i_5] [(_Bool)1] = ((/* implicit */int) arr_10 [i_4 + 1] [10LL] [i_4 - 1] [i_4 - 1]);
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_3 [i_5] [i_4]))))))));
                            }
                        } 
                    } 
                    arr_26 [i_1] [i_4 - 1] [i_1] [i_4] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 8911361087047969640ULL)))) || (((var_3) > (((/* implicit */long long int) 32767U))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned int) var_14);
}
