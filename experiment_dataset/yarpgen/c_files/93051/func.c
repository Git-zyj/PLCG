/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93051
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))) ? (max((((((/* implicit */_Bool) 300472130)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (arr_1 [(signed char)9]))), (((/* implicit */unsigned long long int) max((arr_2 [i_0]), (((/* implicit */long long int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))))))));
    }
    for (int i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), ((signed char)12)));
        arr_7 [i_1] [(unsigned short)11] = ((/* implicit */unsigned long long int) var_10);
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (+(300472124)));
                        arr_17 [i_1] [i_2] [i_3] [i_1] [(_Bool)1] = (signed char)-20;
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            arr_21 [i_4] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2 + 3] [i_1] [(unsigned char)1] [i_2 + 3])) ? (((/* implicit */int) arr_14 [i_1] [i_3] [i_1] [i_4] [i_5])) : (((/* implicit */int) arr_14 [i_1] [i_2] [i_1] [(signed char)13] [i_5]))))) + (max((var_4), (((/* implicit */long long int) arr_14 [11LL] [i_2] [i_1] [i_4] [i_5]))))));
                            var_19 |= ((/* implicit */long long int) (+((-(120813677U)))));
                        }
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_25 [i_1] = ((/* implicit */signed char) (+(-300472108)));
                            var_20 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 15527892050074447955ULL)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (signed char)-19))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (signed char)-125))));
                            var_22 = ((((/* implicit */int) arr_23 [i_2 + 2] [i_1 + 2])) >> (((((/* implicit */int) (unsigned short)27175)) - (27154))));
                            var_23 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) / ((-(67108863ULL)))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-20))))) ? ((~(var_8))) : (300472118)));
                        }
                        var_25 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((short) -300472131)))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_8 = 3; i_8 < 13; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    for (unsigned int i_11 = 2; i_11 < 15; i_11 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) 4014137073853749313ULL))));
                            var_27 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38360))))) : (((/* implicit */int) ((signed char) arr_12 [(signed char)11] [i_9] [i_10]))))) / (((/* implicit */int) var_7))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) arr_16 [i_8] [i_9] [i_9]);
            }
        } 
    } 
}
