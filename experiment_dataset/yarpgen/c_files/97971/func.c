/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97971
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
    var_14 = ((/* implicit */unsigned int) (-(4741871616458293497ULL)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_2] [i_0]) / (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                    var_15 *= ((/* implicit */unsigned int) ((unsigned char) arr_4 [i_1] [i_1] [i_1]));
                }
                /* vectorizable */
                for (short i_3 = 4; i_3 < 23; i_3 += 2) /* same iter space */
                {
                    var_16 += ((/* implicit */short) arr_7 [i_3]);
                    var_17 *= arr_10 [i_3] [i_3];
                    arr_11 [i_0] [i_1] = ((/* implicit */signed char) (-((-(1960214785)))));
                }
                for (short i_4 = 4; i_4 < 23; i_4 += 2) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) -1960214786);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_20 [i_6] [i_5] [i_1] [i_4] [i_1] [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (-1960214785) : ((~(((1960214801) >> (((((/* implicit */int) (short)13040)) - (13033)))))))));
                                arr_21 [i_0] [i_1] [i_4] [i_4] [(unsigned char)7] = ((/* implicit */unsigned char) (+((-(arr_1 [i_4 - 2] [i_4 - 1])))));
                                var_18 &= ((/* implicit */short) (+(arr_10 [i_1] [i_6])));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            {
                                arr_29 [i_0] [i_1] [i_0] [i_0] [i_8] = ((/* implicit */_Bool) -1960214785);
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_24 [i_0] [i_0] [i_0] [i_0]))));
                                arr_30 [i_1] [i_0] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_16 [i_0] [i_4] [i_7] [i_8]) ? (arr_4 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_8] [i_8] [i_8] [i_0]))))))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [18U] [i_1])) % (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [11LL] [i_0])))))));
                var_21 = ((/* implicit */short) arr_9 [i_0] [i_1] [i_0] [i_1]);
            }
        } 
    } 
    var_22 *= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + ((-2147483647 - 1))))) ? (((((/* implicit */int) var_6)) + (var_10))) : ((-(((/* implicit */int) (unsigned char)147))))))) - ((+(var_4))));
    var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1960214775)))))));
}
