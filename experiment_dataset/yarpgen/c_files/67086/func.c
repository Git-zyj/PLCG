/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67086
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (((~(max((var_10), (((/* implicit */unsigned long long int) -3514960499264309272LL)))))) < (var_1))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((unsigned int) var_4)) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (0U)))))) > (var_5)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [(signed char)10] [i_0] |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) max((var_15), ((~(var_10)))));
            var_16 &= ((/* implicit */_Bool) arr_4 [i_0]);
            arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [(signed char)16] = ((3514960499264309272LL) ^ (((((/* implicit */_Bool) arr_1 [17U])) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_3] [i_0] [i_3]))))));
                        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0]))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned char) ((var_10) / (((/* implicit */unsigned long long int) 16777215U))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (short)-16776))));
                var_20 = ((/* implicit */unsigned long long int) -3514960499264309272LL);
                arr_19 [i_5] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) (short)31433);
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((var_12) ? (((/* implicit */unsigned int) ((((arr_15 [i_4] [i_5]) + (2147483647))) >> (((var_10) - (17825676841888493224ULL)))))) : ((~(arr_14 [i_5] [i_0]))))))));
                arr_20 [i_0] [i_4] = var_9;
            }
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_4] [i_4]))));
                var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */int) (short)-16776)) | (((/* implicit */int) (unsigned char)1))))));
            }
            var_24 -= ((/* implicit */short) var_8);
        }
        for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-(((arr_24 [i_7]) ? (((/* implicit */unsigned long long int) arr_17 [i_0])) : (var_1))))))));
            var_26 *= ((/* implicit */_Bool) (((+(var_5))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (4294967295U)))))));
            var_27 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_7 [i_0])))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
            var_28 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_7] [i_0] [i_7] [i_0]))))) || (((/* implicit */_Bool) (-(var_9))))));
        }
        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            var_29 += ((/* implicit */unsigned long long int) (unsigned char)249);
            arr_30 [i_0] [2U] [i_0] = ((/* implicit */unsigned char) -3514960499264309290LL);
        }
    }
}
