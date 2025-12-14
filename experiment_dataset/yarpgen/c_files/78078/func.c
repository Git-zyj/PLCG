/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78078
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
    var_13 = var_0;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)10447)) * (((/* implicit */int) (!(((/* implicit */_Bool) 4739800055237071436ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) 15386384189629639085ULL);
                                arr_14 [i_3] [i_1] [i_2] [(_Bool)1] [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) & (((/* implicit */int) var_5))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [8ULL]))) ^ (arr_5 [i_0] [i_4 - 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                    {
                        arr_17 [(unsigned char)1] [(_Bool)1] [i_2] [i_5] = ((/* implicit */unsigned short) ((unsigned char) (~((+(var_12))))));
                        var_16 = ((/* implicit */int) (~((-(20ULL)))));
                        var_17 = ((/* implicit */unsigned long long int) arr_3 [i_2]);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 1; i_7 < 10; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) arr_21 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]);
                            arr_25 [i_0] [10ULL] [i_2] [i_6] [10ULL] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
                            arr_26 [i_0] [i_1] [i_7] [(unsigned short)1] [(signed char)3] = ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) var_11)))));
                        }
                        for (signed char i_8 = 1; i_8 < 9; i_8 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_1])) && (var_11)))) + (((/* implicit */int) var_4)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_8 + 2] [i_8 - 1] [i_8 - 1] [i_8 + 2] [i_8] [i_8])))))));
                            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_8 - 1] [i_1])))));
                            var_21 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_6))))));
                            var_22 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_8 + 1] [i_6] [i_8])))))));
                            var_23 = ((/* implicit */unsigned short) 8897079639911351651ULL);
                        }
                        for (signed char i_9 = 1; i_9 < 9; i_9 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) var_8);
                            var_25 &= ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) arr_30 [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_9] [i_9 + 1])));
                            var_26 = ((/* implicit */unsigned long long int) arr_19 [i_6] [3ULL] [(_Bool)1]);
                            arr_32 [10ULL] [i_9] [i_2] [i_6] [i_9 + 2] = ((/* implicit */unsigned long long int) ((_Bool) (~(((unsigned long long int) var_0)))));
                        }
                        for (signed char i_10 = 1; i_10 < 9; i_10 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(2147483647))))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (var_3)));
                            var_29 = ((/* implicit */unsigned long long int) (-(((long long int) arr_33 [i_10 + 2] [i_2] [i_2] [5ULL] [(unsigned char)9]))));
                        }
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) 8897079639911351650ULL))));
                        var_31 = ((/* implicit */unsigned long long int) (!(((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_6] [i_2] [i_6] [i_2])))))));
                    }
                    arr_36 [6ULL] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_0);
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */int) var_0);
}
