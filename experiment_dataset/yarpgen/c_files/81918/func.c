/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81918
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) & (min((max((var_4), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1)))))))));
    var_15 = ((/* implicit */short) min((((var_4) - (((/* implicit */unsigned long long int) var_5)))), (((((/* implicit */unsigned long long int) ((var_5) | (((/* implicit */int) var_1))))) - ((-(var_4)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (((+(arr_12 [i_0] [i_3]))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [4LL] [i_1] [i_1] [i_3]), (((/* implicit */unsigned int) arr_9 [1ULL] [(unsigned char)5] [(unsigned short)2] [i_3]))))))))))))));
                            var_17 -= ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) (-(arr_7 [i_0] [i_1 - 1] [i_2] [13U])))) % (arr_1 [i_1])))));
                            var_18 = ((/* implicit */unsigned short) (-(arr_8 [i_0] [(short)0] [i_2])));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [10LL]))) | (arr_10 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [i_0])))), ((-(arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [18LL] [i_3] [(unsigned short)1]))))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 15; i_4 += 4) 
                {
                    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_9 [i_0] [6] [i_4 + 3] [(_Bool)1]))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [(_Bool)1])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) max((max((((((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_7])) % (arr_18 [i_0 + 1] [6LL] [i_6] [i_0 + 1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)1] [i_0]))) - (arr_11 [i_0] [15ULL] [i_0] [i_1] [i_0] [i_6]))))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0]))));
                            var_23 = ((/* implicit */short) (+(((min((arr_5 [(unsigned char)13] [(unsigned short)10] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_6])))) & (((((/* implicit */unsigned long long int) arr_14 [i_7] [2ULL] [2ULL])) & (arr_5 [i_0] [16ULL] [16ULL])))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) (!(arr_17 [i_0 + 1] [i_0])));
                var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 - 1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        for (int i_9 = 2; i_9 < 10; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                {
                    var_26 &= ((/* implicit */unsigned int) arr_16 [18ULL] [18ULL] [i_10] [12LL]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) (~(arr_31 [i_8] [i_8] [i_8] [0])));
                                var_28 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (~(((/* implicit */int) arr_28 [i_8] [i_10] [i_12]))))), (min((arr_10 [i_9] [4] [i_9] [(unsigned char)6]), (((/* implicit */long long int) arr_15 [6LL] [6LL] [i_12])))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_8] [(_Bool)1] [16LL] [i_9])))))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */_Bool) arr_30 [i_10] [i_9] [i_8]);
                    var_30 = ((/* implicit */unsigned short) arr_36 [i_8] [i_10]);
                }
            } 
        } 
    } 
}
