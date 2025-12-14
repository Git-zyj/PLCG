/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94917
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
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
    var_21 = ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-8)), (arr_10 [i_1 + 2])));
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) /* same iter space */
                            {
                                var_23 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [6ULL] [i_3 - 1] [i_3 - 1] [i_1]))))));
                                arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_3 - 1] [i_4] [i_4] = min(((+(((/* implicit */int) arr_5 [i_0] [i_0 - 1])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-16073))))) != (arr_7 [i_0])))));
                                var_24 = ((/* implicit */int) arr_11 [i_3 + 1] [i_0] [16ULL] [i_0] [i_1 + 1]);
                                arr_14 [2LL] [2LL] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_10 [i_0 + 3])) ? (var_18) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16237417704913256561ULL)) ? (((/* implicit */int) arr_9 [15LL] [i_4] [1ULL] [(unsigned char)16])) : (arr_0 [i_0])))))));
                                var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) var_6))))) ? (12793275491068594685ULL) : (72040001851883520ULL)))));
                            }
                            for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) /* same iter space */
                            {
                                var_26 |= ((/* implicit */unsigned long long int) 2090454472);
                                var_27 = ((/* implicit */signed char) ((int) (+(18374704071857668095ULL))));
                            }
                            for (unsigned short i_6 = 1; i_6 < 19; i_6 += 4) /* same iter space */
                            {
                                var_28 += ((/* implicit */int) (unsigned short)48221);
                                arr_19 [(unsigned short)19] [i_0] [i_2] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_14);
                            }
                        }
                    } 
                } 
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [7ULL] [(unsigned char)6] [i_0] [i_1 - 2])) ^ (((/* implicit */int) ((((/* implicit */_Bool) (-(var_1)))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_6))))))))));
                /* LoopNest 3 */
                for (unsigned int i_7 = 2; i_7 < 19; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_6 [i_8] [i_1 + 1] [i_7 - 1] [i_8]), (arr_6 [i_1] [i_1] [i_7] [i_8])))), (((((/* implicit */_Bool) arr_23 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_7 + 1] [i_1 + 2] [i_7] [i_8] [9ULL]))) : ((~(18374704071857668095ULL))))))))));
                                arr_33 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (short)16080);
                            }
                        } 
                    } 
                } 
                var_30 = ((/* implicit */int) arr_31 [i_0] [i_1 + 2] [i_0 + 4] [i_0]);
            }
        } 
    } 
}
