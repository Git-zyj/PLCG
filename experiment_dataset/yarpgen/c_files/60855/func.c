/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60855
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = (-((+(((/* implicit */int) arr_0 [i_0])))));
        var_13 = ((/* implicit */int) (~((((~(20LL))) + (((/* implicit */long long int) min((((/* implicit */int) var_12)), (var_2))))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_14 &= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))) ^ (((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_15 = ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                var_16 = ((/* implicit */int) (+(var_4)));
            }
            for (unsigned int i_3 = 2; i_3 < 16; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) -559096477)))) ? (((arr_13 [i_0] [i_0] [i_3 - 2] [i_5] [i_5 - 1] [i_5]) | (arr_13 [i_4] [i_4] [i_4] [i_5] [i_5 - 1] [i_4]))) : ((-(var_4)))));
                            var_18 = ((/* implicit */_Bool) var_5);
                            var_19 |= ((/* implicit */short) (_Bool)1);
                            var_20 = ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
                var_21 |= ((/* implicit */long long int) ((short) (unsigned char)254));
            }
            arr_20 [i_0] [i_1] = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) >> (((/* implicit */int) (!((_Bool)1))))))) ? ((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) 675561071)))) : (((/* implicit */unsigned long long int) -2063331832723015814LL))));
        }
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_22 += ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_7 [i_0]), (((/* implicit */short) (unsigned char)255))))), (max((arr_14 [i_0] [i_6] [i_6] [i_6]), (((/* implicit */int) var_5))))));
            var_23 = ((/* implicit */unsigned char) arr_16 [i_0] [i_0] [i_0]);
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        var_24 = (((+(arr_16 [i_7] [i_7] [i_7]))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
        {
            arr_31 [i_7] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)14))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                for (short i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    {
                        arr_38 [i_8] [i_8] = ((/* implicit */_Bool) ((unsigned char) arr_37 [i_7] [i_8] [i_8] [i_10] [i_7] [i_7]));
                        var_25 = ((/* implicit */unsigned char) ((12523978517665769209ULL) > (((/* implicit */unsigned long long int) arr_6 [i_10] [i_9]))));
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28288))) : (8815320819602230937ULL))))));
                        arr_39 [i_7] = ((/* implicit */int) ((unsigned long long int) ((_Bool) (unsigned char)252)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            arr_42 [i_7] = ((/* implicit */short) arr_33 [i_7] [i_11]);
        }
    }
    var_28 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((9223372036854775807LL), (((/* implicit */long long int) var_0))))))), (((unsigned long long int) ((signed char) var_4)))));
    var_29 = ((/* implicit */short) (unsigned char)209);
    var_30 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != ((+(((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_6)))))));
    var_31 = ((/* implicit */long long int) var_1);
}
