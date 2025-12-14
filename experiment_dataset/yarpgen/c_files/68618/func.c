/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68618
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */short) ((unsigned long long int) (+((-2147483647 - 1)))));
                        arr_10 [i_0] = ((/* implicit */unsigned short) var_0);
                    }
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_1] [i_2] [(signed char)12] = ((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_0] [i_4] [i_2 - 3] [i_0 + 1] [i_2 - 3]);
                            arr_19 [i_0] [i_0] [i_5] = ((/* implicit */_Bool) ((unsigned int) 13353232733369118506ULL));
                        }
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                        {
                            var_12 &= ((/* implicit */signed char) min((max((((/* implicit */int) (signed char)115)), (max((((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_2 - 1] [i_4])), (var_2))))), (((/* implicit */int) var_8))));
                            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_2)))) ? (((unsigned int) ((((/* implicit */_Bool) 13393604390799694754ULL)) ? (-117487487) : (((/* implicit */int) (short)(-32767 - 1)))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_2 + 1] [i_4] [i_0])) ? (((/* implicit */unsigned int) ((int) 8299499760826763000ULL))) : ((+(arr_21 [i_0] [i_1] [i_6])))))));
                            var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_2 - 2] [(_Bool)1])) ? (arr_0 [i_0] [20ULL]) : (arr_0 [i_1] [i_2 - 1]))), (((/* implicit */int) var_10))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_11 [i_4] [i_4] [i_4]))));
                            var_17 = ((/* implicit */long long int) (~(var_5)));
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((int) 117487494));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_30 [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_4 [i_2 - 1] [i_0 + 1] [i_0]), (((/* implicit */long long int) var_2)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            arr_33 [i_0] [17ULL] [(signed char)16] [i_8] [i_0] [3] = ((/* implicit */unsigned long long int) ((int) var_9));
                            var_18 = ((/* implicit */unsigned long long int) arr_6 [i_2 + 1] [i_0] [i_2 - 2]);
                        }
                    }
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((signed char) var_6)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        for (unsigned char i_11 = 3; i_11 < 15; i_11 += 2) 
        {
            {
                arr_38 [i_11] = ((/* implicit */short) var_10);
                var_20 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_10] [i_10] [i_10] [i_10] [(unsigned short)9] [(unsigned short)9])) ? (117487494) : (((/* implicit */int) var_3))))) ? (min((((/* implicit */long long int) arr_22 [24LL] [i_11 - 2] [i_11 - 2] [i_11] [i_10])), (-4295430765674788349LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_10])))))))) <= (var_5)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    arr_41 [i_11] [i_11] = (+(((/* implicit */int) (signed char)-113)));
                    arr_42 [i_10] [i_11] = ((/* implicit */_Bool) ((arr_1 [i_11 - 2] [i_11 - 3]) ? ((-(((/* implicit */int) (signed char)115)))) : (((/* implicit */int) arr_11 [i_11] [i_11 + 1] [4]))));
                    var_21 += ((/* implicit */signed char) arr_5 [i_10] [i_10] [i_10] [i_10]);
                }
            }
        } 
    } 
}
