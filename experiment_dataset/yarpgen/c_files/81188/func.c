/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81188
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
    var_18 = ((/* implicit */signed char) (!(var_6)));
    var_19 = var_17;
    var_20 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) arr_3 [i_1 - 4] [i_1 + 1] [i_1 + 1]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_12);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((unsigned int) var_13));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (var_17) : (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                arr_20 [(unsigned char)22] [i_0] [17LL] [i_2 - 1] [i_2] [i_5] [(unsigned char)17] = ((/* implicit */unsigned int) ((long long int) ((unsigned char) (unsigned short)3764)));
                                var_24 = ((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1] [i_6]);
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    arr_25 [i_7] [(_Bool)1] [i_7] [i_1] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [23] [i_1 - 3] [17ULL] [i_1 - 1])) ? (((/* implicit */int) arr_21 [i_1 - 4] [i_1 - 4] [14ULL] [i_1 + 1])) : (((/* implicit */int) arr_21 [i_0] [i_1 - 2] [i_1] [i_1 - 1]))))) < (((long long int) min((((/* implicit */short) (signed char)55)), (var_2)))));
                    var_25 = ((/* implicit */int) max((var_25), (max((((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [7LL] [(short)19]))) ? (((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_1] [i_0] [i_0] [i_0]))) : (((/* implicit */int) var_11))))))));
                    arr_26 [0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) 31457280U))));
                }
                for (int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((549755797504ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8] [i_1] [i_1] [i_1] [i_0]))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_0] [i_8])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_8] [i_0] [i_1]))))) ^ (((long long int) var_1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (arr_14 [i_0] [i_0] [(_Bool)1] [i_1 - 2] [i_8]) : (549755797504ULL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : (max((arr_5 [i_0] [i_1] [i_1] [(_Bool)1]), (((/* implicit */long long int) var_0))))))));
                    var_27 = ((/* implicit */short) arr_13 [i_0] [i_1] [i_1 - 2] [i_1] [i_8]);
                    var_28 = 549755797504ULL;
                }
            }
        } 
    } 
}
