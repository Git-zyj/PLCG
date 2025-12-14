/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99378
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) var_15);
        var_18 = ((/* implicit */long long int) var_17);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)95)) ? (-1LL) : (((/* implicit */long long int) -55396684))));
                    var_20 *= ((/* implicit */signed char) 55396688);
                    arr_8 [i_2] [(unsigned short)10] [12U] [17U] = ((/* implicit */int) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_13)))))), (var_14)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_4))));
                    arr_14 [i_4] [i_3] [i_3] [i_4] = ((/* implicit */short) -1);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(var_8))))));
                        var_24 = (-(arr_13 [i_5]));
                    }
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            arr_25 [i_4] [12U] [i_3] [(short)11] [i_3] [i_3] [4] = ((/* implicit */short) ((((var_13) != (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_4] [4U] [i_6] [19]))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [12] [i_4] [i_6] [i_7])) ? (var_13) : (var_13))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_16 [i_0] [i_3] [4LL] [i_6] [i_7])) : (((/* implicit */int) arr_16 [i_0] [i_3] [i_4] [i_6] [i_7])))))));
                            arr_26 [i_4] [15U] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_0) : (((/* implicit */unsigned long long int) (~(3201364780U))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((arr_24 [i_0] [i_6] [i_4]) + (2147483647))) >> (((((/* implicit */int) var_15)) + (113))))))));
                        }
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((signed char) (~(arr_30 [i_0] [(_Bool)1] [i_6] [(signed char)18] [i_8])))))));
                            var_27 = ((/* implicit */unsigned short) 18446744073709551615ULL);
                            arr_31 [i_3] [12] [i_4] [i_8] = ((/* implicit */signed char) var_14);
                        }
                        arr_32 [i_3] [i_4] [19LL] [i_4] [(signed char)19] [12ULL] = ((/* implicit */unsigned short) ((unsigned int) var_1));
                    }
                }
            } 
        } 
        var_28 = ((/* implicit */int) arr_7 [i_0]);
    }
    var_29 -= ((/* implicit */unsigned short) ((int) 28ULL));
    var_30 ^= ((/* implicit */unsigned long long int) var_16);
    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_17))));
}
