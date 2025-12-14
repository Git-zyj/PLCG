/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57697
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
    var_13 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) var_8);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_3))));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) 994173671U))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */signed char) arr_3 [i_2] [i_2]);
                            }
                        } 
                    } 
                    arr_12 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        var_17 |= var_5;
                        var_18 ^= ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_1] [i_0] [i_5]);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)37710)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 - 2] [i_5 - 2] [i_5] [i_5] [i_5 + 1]))) : (arr_4 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 1])));
                        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [(_Bool)1] [i_1] [12ULL] [(short)5] [i_5 - 2])) > (((/* implicit */int) var_9))));
                        arr_16 [i_5] = ((/* implicit */unsigned short) arr_3 [(short)9] [(short)9]);
                    }
                    var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [16LL] [i_2])) * (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_0]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (short i_7 = 4; i_7 < 17; i_7 += 4) 
            {
                for (unsigned int i_8 = 2; i_8 < 17; i_8 += 1) 
                {
                    {
                        arr_25 [i_0] [i_0] [i_0] = ((/* implicit */short) ((signed char) arr_4 [i_8 + 2] [i_8 + 2] [i_7 - 2] [i_7 - 2]));
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 4; i_9 < 17; i_9 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) var_12);
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~((~(1536208598056941984ULL))))))));
                            arr_28 [i_0] [i_9] [i_7] [i_8] [i_0] = ((/* implicit */_Bool) var_8);
                        }
                        for (unsigned short i_10 = 4; i_10 < 17; i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_6] [i_10] [(unsigned short)2] [i_6] [i_10] [i_10] [1] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0]);
                            var_24 = ((/* implicit */unsigned short) ((unsigned long long int) ((arr_23 [(unsigned short)0] [(unsigned short)0] [i_0] [i_10] [(_Bool)0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                            var_25 = ((/* implicit */long long int) var_12);
                        }
                        for (unsigned short i_11 = 4; i_11 < 17; i_11 += 1) /* same iter space */
                        {
                            var_26 -= ((/* implicit */int) arr_7 [i_8 - 2] [i_8 - 2] [i_8 - 2]);
                            var_27 += ((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_11]);
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_7 - 1] [(_Bool)1] [(_Bool)1] [i_8 + 2] [i_11 - 4])) + (((/* implicit */int) arr_8 [i_7 - 1] [i_8] [i_8 - 1])))))));
                        }
                    }
                } 
            } 
        } 
    }
}
