/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92762
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)49260)))))));
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) > ((-2147483647 - 1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (int i_3 = 3; i_3 < 10; i_3 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    arr_14 [i_3 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [2LL])) <= (((/* implicit */int) arr_2 [i_2] [6ULL])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        for (long long int i_6 = 2; i_6 < 7; i_6 += 4) 
                        {
                            {
                                arr_21 [i_2] [i_3] [i_6] [i_5 + 2] [i_6] [i_6] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_19 [i_6] [i_4] [i_2])) : (var_3)));
                                var_16 = ((/* implicit */unsigned char) var_3);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 10; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            arr_27 [i_2] [i_2] [i_7] [i_8] [i_7] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_12)))));
                            arr_28 [i_7] = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)16276));
                            var_17 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) (signed char)48))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_7)) : (var_3))) : (((/* implicit */unsigned long long int) (~(arr_16 [(signed char)1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_2])) ? (((/* implicit */int) arr_2 [i_2] [i_8])) : (((/* implicit */int) arr_13 [i_2] [i_3]))))) - (var_4))))));
                            arr_29 [i_7] = ((/* implicit */unsigned int) var_2);
                            arr_30 [i_8] [i_3] [i_7] [i_8] |= (-(((var_0) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)242))))))));
                        }
                    } 
                } 
                arr_31 [i_2] [(signed char)5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [14U]))) > (((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_3 - 3])) ? (arr_0 [i_3 - 2] [i_3 - 1]) : (arr_0 [i_3 - 3] [i_3 - 1])))));
                var_18 = ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_4);
    var_20 = ((/* implicit */unsigned long long int) (((~(var_1))) == (((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (var_1))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) var_11))))))));
}
