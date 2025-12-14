/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87238
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_14 [17LL] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)7061)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((unsigned short) arr_10 [11U] [i_1] [i_0 + 1] [i_2]))) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_3] [i_3]))))) : ((~(((((/* implicit */_Bool) arr_12 [i_3] [i_1] [i_2] [i_2] [i_4])) ? (((/* implicit */unsigned int) 2048104349)) : (arr_13 [i_1] [i_2] [i_3]))))));
                                var_16 -= ((unsigned char) ((int) (_Bool)1));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (short i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        {
                            arr_20 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0] [i_0])) << (((min((var_0), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [13] [i_1] [i_1] [i_6 - 1])))) - (19956ULL))))), (((((/* implicit */_Bool) arr_12 [8LL] [i_6] [i_6 + 3] [i_6 + 3] [i_6 + 2])) ? (((/* implicit */int) arr_12 [(short)8] [i_6] [i_6 + 1] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_12 [(unsigned char)6] [(unsigned char)6] [i_6 + 1] [i_6 - 1] [i_6 - 1]))))));
                            arr_21 [i_0] [i_0] [i_5] [i_6] [i_5] = (_Bool)1;
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 1) 
        {
            for (short i_9 = 1; i_9 < 10; i_9 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_9 + 2] [(short)11] [18LL] [i_8] [i_7] [i_7]))))) ? ((-(((/* implicit */int) arr_4 [i_7] [i_9 + 1])))) : ((~(((/* implicit */int) arr_17 [i_7] [12] [i_8] [i_9 + 2] [i_9 + 2] [i_9]))))));
                    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)17342)) && (((/* implicit */_Bool) max((arr_15 [i_9] [i_9] [i_9] [i_9 - 1]), (-1LL))))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_17 [i_7] [i_7] [i_8] [i_8] [(_Bool)1] [i_9]))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 1; i_10 < 10; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (_Bool)1);
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_16 [i_8 + 1] [i_8 - 1] [i_9 + 2])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) max((((/* implicit */short) var_14)), (arr_11 [i_7] [i_7])))) : (((/* implicit */int) arr_28 [i_10] [i_8])))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)1023))))))))))));
                                arr_33 [i_7] [i_8] [i_9] [i_10] [i_11] [i_11] = ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48210))) / (-1LL))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-538)), (arr_28 [i_7] [i_9 - 1]))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-17670)) + (((/* implicit */int) arr_4 [i_7] [i_7]))))), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_23 [i_7] [i_8 + 1])) ? (arr_15 [6LL] [i_9] [i_10] [i_11]) : (((/* implicit */long long int) var_1)))) > (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((1LL), (((/* implicit */long long int) (unsigned short)7061)))) > (var_10))))) & (max((17361505393321312647ULL), (((/* implicit */unsigned long long int) (unsigned short)12660)))))))));
}
