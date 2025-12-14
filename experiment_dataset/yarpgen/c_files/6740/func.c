/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6740
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 6; i_2 += 4) 
            {
                {
                    arr_8 [0] [i_1] [i_1] &= ((/* implicit */unsigned char) ((signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1)))));
                    arr_9 [i_0] = ((/* implicit */long long int) var_1);
                    arr_10 [i_0] [i_0] [i_0] [i_2 - 1] = ((/* implicit */unsigned int) arr_6 [i_1] [8LL] [i_2 + 3] [i_2 + 2]);
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_2] [6ULL] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((signed char) (signed char)-1)))))), (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_0] [i_1] [i_3]), (((/* implicit */unsigned short) var_5)))))) + (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) 1966226171)) >= (7822089608673979177LL)));
                        var_17 = ((/* implicit */int) (~(arr_2 [i_1])));
                        var_18 = ((/* implicit */short) ((9769517605448681608ULL) % (((/* implicit */unsigned long long int) 2378493168U))));
                        arr_15 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) 1966226171))))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_19 += ((/* implicit */signed char) (+(min((((/* implicit */long long int) arr_18 [i_1] [i_1] [i_2])), (max((((/* implicit */long long int) arr_0 [i_1])), (var_6)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            arr_23 [i_0] [i_5] [i_4] [i_4] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) + (14234525605118181171ULL)));
                            arr_24 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5] &= ((/* implicit */long long int) max((((unsigned int) ((((/* implicit */_Bool) arr_4 [(unsigned short)3] [i_4] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)1))))), (((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) var_8))))))));
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) / (((((/* implicit */_Bool) 353282469)) ? (((/* implicit */int) (unsigned short)13930)) : (-1159616098)))));
                            var_21 = ((/* implicit */_Bool) ((((var_16) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7)))) & (((((/* implicit */_Bool) arr_16 [i_2 + 3] [i_2 + 1] [i_2] [i_2] [i_0] [i_6])) ? (((/* implicit */int) arr_16 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_0] [7])) : (((/* implicit */int) arr_16 [i_2 + 3] [i_2] [i_2] [3LL] [i_0] [i_6]))))));
                        }
                        arr_30 [i_0] [i_0] = ((/* implicit */short) arr_20 [(short)3] [(short)3] [(short)3]);
                    }
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        arr_34 [i_0] = 61381431U;
                        arr_35 [i_0] [(signed char)7] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_3 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0]))))))));
                        var_22 ^= ((/* implicit */short) min((((/* implicit */unsigned int) 702638486)), (2889321404U)));
                        arr_36 [i_0] [(unsigned short)9] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_20 [i_2 - 1] [i_2 + 3] [i_2 + 1]));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)71)), (4233585865U)))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 72710871U)) ? (var_12) : (((/* implicit */int) (unsigned short)26592))))), (var_6)))));
}
