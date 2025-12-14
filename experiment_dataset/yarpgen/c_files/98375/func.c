/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98375
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 229924218116741078LL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) > (var_5)))) : (((/* implicit */int) var_1))));
    var_17 = ((/* implicit */int) 3247618193U);
    var_18 = ((/* implicit */short) max(((+(((unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_12))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        arr_2 [10U] = ((/* implicit */long long int) arr_0 [i_0] [6ULL]);
        var_19 = ((/* implicit */int) (_Bool)1);
        var_20 = ((/* implicit */short) (unsigned short)50089);
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_1]))));
        arr_6 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((var_1), ((short)(-32767 - 1)))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 12; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((-229924218116741080LL) % (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)73)) ? (1047349102U) : (4095U))))));
                            arr_18 [i_4] = ((/* implicit */_Bool) (-(max((((/* implicit */long long int) arr_11 [i_2 + 1])), (((long long int) arr_9 [i_2] [i_3]))))));
                        }
                    } 
                } 
                arr_19 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) arr_4 [i_2]);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        {
                            arr_27 [i_2] [10U] [i_6] [4] [i_3] [i_2] = ((/* implicit */int) (signed char)127);
                            arr_28 [i_6] [i_3] [i_6] [i_3] = ((/* implicit */unsigned short) (~(3210260267U)));
                            arr_29 [i_2] [(short)7] [(short)7] [i_6] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) var_6)), (402190259U)))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((arr_0 [i_3] [i_6]), (arr_0 [11] [i_3])))) <= (((((/* implicit */_Bool) 2227893157U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12633))) : (0ULL))))))));
                            arr_30 [i_6] [(unsigned short)8] [(unsigned short)8] [i_3] [i_6] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_21 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_7])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)50110))));
                        }
                    } 
                } 
            }
        } 
    } 
}
