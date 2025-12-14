/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91431
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
    var_20 = ((/* implicit */long long int) (short)4095);
    var_21 |= ((/* implicit */unsigned short) (~(4464864479362111928LL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) arr_1 [i_0]);
                    arr_7 [i_1 - 1] [i_0] = ((/* implicit */signed char) (+(4294967292U)));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_23 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_4 [i_0])) ? (18446744073709551609ULL) : (arr_4 [i_0])))));
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned char)0))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)230)))))) + (arr_5 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])) > (((/* implicit */int) (unsigned short)20824))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) : (267144980U)))))))));
                    arr_14 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (+((+(arr_8 [i_0] [i_0] [i_2] [i_2])))));
                }
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_0 [(signed char)7] [5ULL]))));
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */short) arr_2 [i_1 - 1]);
                    arr_20 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 - 1] [i_5] [i_1] [9U])) ? (13517652975792233944ULL) : (((/* implicit */unsigned long long int) 1550844715U))))) ? (((arr_0 [i_5] [i_0]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))) : (arr_17 [(signed char)12] [i_1] [i_1] [i_1 - 1]))) : ((-((~(arr_17 [(unsigned short)11] [i_0] [i_1 + 1] [i_5])))))));
                }
                arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_1] [i_0]);
                var_25 *= ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [(unsigned short)1]);
            }
        } 
    } 
}
