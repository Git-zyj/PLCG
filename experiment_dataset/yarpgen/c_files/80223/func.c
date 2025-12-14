/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80223
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (((!((_Bool)1))) && (((/* implicit */_Bool) ((arr_2 [i_0]) * (((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 2) /* same iter space */
        {
            var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)120)))) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_1 [i_0] [i_1])))) ? ((~(arr_6 [i_1 - 1] [i_1] [i_0]))) : (1708523271U)));
            arr_8 [i_0] = ((/* implicit */unsigned long long int) var_9);
        }
        /* vectorizable */
        for (signed char i_2 = 2; i_2 < 23; i_2 += 2) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_2] = ((short) arr_10 [i_2 + 1] [i_2]);
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)0)))))));
        }
        for (signed char i_3 = 2; i_3 < 23; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (long long int i_5 = 2; i_5 < 24; i_5 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (min((arr_12 [i_5 - 1] [i_3] [i_0]), (((/* implicit */unsigned int) ((_Bool) (_Bool)0)))))));
                        arr_20 [i_3 - 2] [i_3] [i_3 - 1] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) var_6)), (((signed char) var_15))))) ^ (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_3])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_7 [i_3 + 2] [i_3 + 1] [i_3 + 1]))))));
                    }
                } 
            } 
            arr_21 [i_3 - 2] = var_4;
        }
        arr_22 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))), (arr_12 [i_0] [i_0] [i_0])));
    }
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_6])) : (111620599))) > (((/* implicit */int) (unsigned char)244))));
        arr_26 [i_6] = ((/* implicit */signed char) ((unsigned int) ((((_Bool) arr_1 [i_6] [i_6])) && (((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6])) || (((/* implicit */_Bool) (signed char)-110)))))));
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned char) arr_2 [i_6]);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 12753900689081295618ULL)) ? (3573013074U) : (3958994773U)))) >= (-4459103790485161986LL))))));
    }
    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 4) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) arr_16 [i_7 + 1] [i_7])) : (-2050323806))) >> (((((((/* implicit */_Bool) arr_6 [i_7] [i_7] [i_7])) ? (4459103790485161985LL) : (-4459103790485161998LL))) - (4459103790485161982LL)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 2; i_8 < 19; i_8 += 4) 
        {
            arr_33 [i_7] [i_8 + 1] = ((/* implicit */unsigned short) ((max((2131798437), (((/* implicit */int) (signed char)-49)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) (signed char)-127)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) - (arr_13 [i_8] [i_7 + 1]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))))))));
            arr_34 [i_7] [i_7] [i_7] = ((/* implicit */int) 7U);
            arr_35 [i_7] [i_7] = ((unsigned int) arr_29 [i_7]);
        }
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            var_23 |= ((/* implicit */signed char) ((arr_17 [i_7 + 2] [i_7] [i_7 + 2] [i_7 - 1] [i_9] [i_9]) <= (max((((/* implicit */long long int) arr_9 [i_7 - 1] [i_7] [i_7 + 2])), (arr_17 [i_7 + 1] [i_7] [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_9])))));
            arr_39 [i_7] [i_7] = ((/* implicit */int) (_Bool)1);
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) 8594241829570341804ULL))));
        }
        var_25 += ((/* implicit */_Bool) ((unsigned short) (~(((((/* implicit */int) arr_38 [i_7 - 1] [i_7] [i_7 + 2])) | (((/* implicit */int) (signed char)-127)))))));
    }
    var_26 |= ((/* implicit */_Bool) var_12);
    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4459103790485161986LL))));
}
