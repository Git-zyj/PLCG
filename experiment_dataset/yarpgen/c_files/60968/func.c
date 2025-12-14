/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60968
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = max((((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0] [i_1]))), (max((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1]))));
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((((arr_2 [i_1] [i_1]) ^ (18446744073709551615ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))) ? (((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) var_2)))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20812))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) >= (var_12)));
                                var_18 = ((/* implicit */_Bool) (~(2749512718U)));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((unsigned long long int) arr_13 [i_4] [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 1])));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_2] [(_Bool)1] [(short)9] = ((/* implicit */unsigned short) arr_9 [i_0] [i_1]);
                }
                for (long long int i_5 = 3; i_5 < 8; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (short i_7 = 1; i_7 < 7; i_7 += 3) 
                        {
                            {
                                arr_27 [i_1] [i_0] [i_5 + 2] [i_1] [i_0] = ((/* implicit */unsigned int) min((((long long int) (signed char)24)), (((/* implicit */long long int) ((-645665972) ^ (max((((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_1] [i_7 - 1] [i_6])), (645665972))))))));
                                arr_28 [i_1] [i_5] [i_5] = ((/* implicit */long long int) (+(645665952)));
                                arr_29 [2U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-1)) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_2)))) ? (max((-1230806314), (645665957))) : (((/* implicit */int) arr_23 [i_0] [i_1] [i_5 - 1] [i_1] [i_7 + 3] [i_7]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        arr_33 [i_5 + 1] [i_5] = ((((/* implicit */_Bool) arr_2 [i_5 - 3] [i_5])) ? (((/* implicit */unsigned long long int) 645665972)) : (arr_2 [i_5 + 2] [i_5]));
                        arr_34 [i_8] [i_5] [i_1] = ((/* implicit */unsigned short) ((((long long int) 9134235979540183402ULL)) + (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_8] [i_0] [i_0] [i_1]))) / (var_16))))));
                    }
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29377))) > (arr_21 [i_1] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [4U] [6] [i_1] [i_5] [i_0] [(_Bool)1]))) > (67426097U))))) : (2621360739U)));
                }
                var_20 = ((/* implicit */unsigned long long int) -3958894256236172717LL);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_8);
}
