/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73214
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((arr_2 [i_0] [i_0]) >= (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        var_16 ^= ((/* implicit */unsigned int) ((unsigned short) 1739784676));
        var_17 *= var_11;
        arr_8 [i_1] = ((/* implicit */signed char) (+(min((((/* implicit */long long int) arr_7 [i_1])), (var_9)))));
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (short i_5 = 1; i_5 < 23; i_5 += 4) 
                {
                    {
                        arr_21 [i_5] = ((/* implicit */unsigned int) var_4);
                        var_18 -= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)13))));
                        arr_22 [i_2] [i_5] [i_2] [i_2] [(short)3] = ((/* implicit */long long int) ((((((/* implicit */long long int) var_7)) != (var_1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (-929646139349610159LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) : (var_14)));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 2; i_6 < 24; i_6 += 3) 
                        {
                            var_19 = ((var_4) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) 505152833)) : (0U)))));
                            arr_26 [i_2] [(short)9] [i_2] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (var_4) : (((/* implicit */long long int) (+(arr_14 [(signed char)22] [i_3]))))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_23 [i_6 - 1] [i_5 + 2] [i_5] [i_5 - 1] [i_5]))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_5))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 21; i_7 += 4) 
                        {
                            arr_29 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_7 + 4])) && (((/* implicit */_Bool) var_6))));
                            arr_30 [i_5] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_28 [i_5] [5])) : (((/* implicit */int) var_13))))) ? (arr_15 [i_5 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511))) : (var_6))))));
                            var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65513))))) ? (((/* implicit */unsigned long long int) arr_13 [i_2] [i_5 - 1] [i_5 - 1])) : ((+(67108856ULL)))));
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [i_3] [i_2])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3])))));
        }
        var_24 &= ((/* implicit */short) (unsigned char)214);
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (+(((var_7) >> (((var_7) - (2877108299U))))))))));
    }
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (unsigned char)214))));
}
