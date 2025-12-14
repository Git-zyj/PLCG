/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69901
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
    var_11 = ((/* implicit */_Bool) (+(var_9)));
    var_12 = ((/* implicit */short) min((var_9), (((((/* implicit */_Bool) 2102157141710074332ULL)) ? (((/* implicit */int) (short)-27166)) : (31719367)))));
    var_13 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((unsigned int) var_0)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((-1544426175) <= (((/* implicit */int) (unsigned short)44251))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 7; i_2 += 3) 
            {
                {
                    var_14 += ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 67108863)) ? (arr_5 [i_0] [(short)4] [i_2 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22616)))))))));
                    arr_11 [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0] [i_1] [i_2 - 1]))), (min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_2 - 1])), (var_8)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) 4294967294U);
                                var_15 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [6ULL] [i_3] [i_2] [6ULL]))) >= (min((((((-258518080392452991LL) + (9223372036854775807LL))) >> (((-1289259750) + (1289259781))))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2] [(short)0] [i_4 + 1])) % (((/* implicit */int) (signed char)-125)))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(arr_14 [i_1] [i_2 - 3] [i_1] [i_1] [i_0] [i_2] [i_0])))) == (0ULL)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 17; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)255))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~((+(1772691924))))))));
                }
            } 
        } 
        arr_26 [i_5 + 3] = ((/* implicit */unsigned long long int) 2234579302U);
    }
    for (int i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        var_19 -= ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))) : (var_7)))))), (((((/* implicit */int) ((((/* implicit */int) (unsigned char)228)) >= (((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8] [2U] [i_8] [i_8]))))) == (((/* implicit */int) ((unsigned char) 872286546U)))))));
        arr_30 [i_8] = ((/* implicit */signed char) ((arr_22 [i_8]) >= ((+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (10151429498287705095ULL)))))));
    }
}
