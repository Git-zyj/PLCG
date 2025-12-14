/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92057
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
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) (+((~(arr_0 [i_1] [i_1 - 2])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
                            {
                                arr_15 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_4]))))) && (((/* implicit */_Bool) (unsigned short)49647))));
                                arr_16 [i_0] [1LL] [i_1 - 2] [i_2] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_1 + 1])))) ? ((~(((/* implicit */int) arr_14 [i_4] [i_1 + 1] [12ULL] [i_4] [i_4] [i_3] [i_3])))) : ((-(((/* implicit */int) arr_14 [i_0] [2LL] [5] [i_4] [i_1 - 1] [(unsigned char)12] [i_3]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 2] [i_1 + 1] [i_1] [i_2]))) : ((-(((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_2] [i_0 - 2] [i_2])) ? (((/* implicit */unsigned long long int) arr_3 [i_2] [i_0])) : (arr_2 [i_0])))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
                            {
                                var_16 = ((/* implicit */long long int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1]))))) * (((((/* implicit */_Bool) arr_18 [i_0 - 3] [i_1] [i_2] [i_0] [i_5])) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_1 - 2] [i_2] [i_3] [(unsigned short)1])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_3] [i_5]))))))));
                                arr_19 [i_0 - 3] [i_0] [16] [i_0 - 3] = ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) arr_12 [2U] [i_1 - 2] [i_2] [i_2] [i_5])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2] [(_Bool)1])))))))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                            {
                                arr_23 [i_0] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_0 + 1] [i_0 + 1])))) ? ((-(arr_13 [i_0 - 2] [i_1 - 1]))) : (((/* implicit */long long int) arr_5 [i_0] [i_0 - 1] [(unsigned short)12]))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)49654))))) ? (arr_10 [i_2] [i_2] [i_2] [i_2]) : ((+(((/* implicit */int) arr_14 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0]))))));
                            }
                            var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(arr_17 [i_0 - 3] [i_0] [(_Bool)1] [(unsigned short)1] [11] [i_3] [i_3])))) ? ((-(arr_2 [15LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 - 1] [i_2] [i_3] [i_3] [i_3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_4)))))))));
    /* LoopSeq 1 */
    for (long long int i_7 = 3; i_7 < 16; i_7 += 4) 
    {
        arr_26 [i_7] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_22 [i_7] [i_7 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7 - 3] [i_7]))))) : ((~(((/* implicit */int) arr_20 [i_7 + 1] [i_7] [i_7 - 3] [i_7 - 3] [i_7 - 3] [i_7 - 3] [i_7 - 1]))))));
        var_20 = (((!(((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7 - 2] [11] [i_7])))) ? (((/* implicit */int) arr_12 [i_7] [i_7 - 3] [i_7 - 3] [i_7] [i_7])) : ((~(arr_21 [i_7 - 3] [i_7] [i_7] [i_7 - 1] [i_7 - 3] [i_7 - 3] [i_7 - 3]))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(arr_4 [i_7] [i_7 - 3] [i_7 - 3])))))) ? (arr_2 [i_7 - 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [9LL] [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7])) ? (arr_13 [i_7] [i_7 + 1]) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))))));
    }
}
