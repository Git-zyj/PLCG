/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77533
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2249600790429696LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) : (var_11)))) ? (((31U) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)48)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)31)) + ((-(((/* implicit */int) var_5)))))))));
                arr_6 [i_0] [i_1 - 1] [10ULL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned short)16])) ? ((+(((/* implicit */int) (signed char)30)))) : (((/* implicit */int) (unsigned char)239))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)31)) + (((/* implicit */int) (unsigned short)65535))))) : (var_8)));
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-99)), (((((/* implicit */int) (unsigned short)60665)) + (((/* implicit */int) var_5)))))))));
            }
        } 
    } 
    var_13 |= ((/* implicit */int) var_9);
    var_14 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_1 [i_2] [22LL])))))));
        arr_9 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)254)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1084109994))))));
        arr_10 [i_2] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)61))));
    }
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_6))));
                        arr_22 [i_5] [14ULL] [i_5] [i_6] &= ((/* implicit */unsigned short) var_4);
                    }
                } 
            } 
            arr_23 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((arr_15 [i_4] [i_4 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    arr_29 [i_4] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 8658797726598335478ULL))));
                    var_17 = ((/* implicit */signed char) ((_Bool) (signed char)(-127 - 1)));
                }
                var_18 |= (((+(-2249600790429696LL))) / (-2249600790429701LL));
                arr_30 [i_4] [i_7] [i_7] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2249600790429714LL)) || (((/* implicit */_Bool) (unsigned short)2))));
            }
        }
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_19 &= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13787684370289637972ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22511))) : (arr_4 [i_3] [(unsigned short)8] [i_9])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((unsigned long long int) 4294967288U)))));
            arr_34 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (short)-1))) ? (((((unsigned long long int) arr_3 [i_9] [i_9])) ^ (((/* implicit */unsigned long long int) -2249600790429685LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
            arr_35 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) var_9);
        }
        arr_36 [i_3] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (unsigned char)165)) >> (((arr_26 [7ULL] [i_3] [13U] [i_3]) - (14293787636047912353ULL))))));
    }
}
