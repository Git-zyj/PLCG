/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89385
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
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_10 ^= ((/* implicit */short) max(((~(((/* implicit */int) arr_0 [i_0 - 1] [(unsigned char)5])))), ((((~(arr_2 [i_0] [i_0]))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)72)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) var_0))))) ? ((+(arr_2 [i_0] [i_0 - 3]))) : (((/* implicit */int) var_0))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        {
                            var_11 |= ((/* implicit */_Bool) var_6);
                            arr_13 [i_1] [(unsigned short)7] [7] [i_1] [2LL] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_1] [7U] [i_3] [i_4] [i_2] [i_3])) & (((/* implicit */int) (short)1))))) != (17425679989025183012ULL))))));
                            var_12 *= ((/* implicit */int) ((((/* implicit */int) (short)1)) < (((((/* implicit */int) (unsigned char)132)) ^ (((/* implicit */int) (short)-31406))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((var_7), (((/* implicit */int) ((arr_9 [i_1 - 1] [6LL] [(_Bool)1]) == (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_9 [(short)13] [i_1] [i_1]) : (arr_9 [9ULL] [i_1] [i_1])))))))))));
                /* LoopNest 3 */
                for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31393)) ? (((/* implicit */int) arr_12 [i_1] [i_2] [i_5 - 1] [i_2])) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_1 - 1] [i_2] [i_2] [i_5] [i_6] [8])) > (((/* implicit */int) arr_10 [i_6])))))) : (((arr_9 [i_1] [(_Bool)1] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [9LL])))))))) ? (min(((~(((/* implicit */int) arr_20 [(unsigned short)16] [8] [i_5] [(signed char)10] [(_Bool)1])))), (((((/* implicit */int) arr_6 [i_1] [i_1])) | (((/* implicit */int) arr_15 [(signed char)8] [i_2] [i_5] [i_6])))))) : (((/* implicit */int) arr_8 [i_1]))));
                                arr_21 [i_1 - 1] [i_2] [i_5] [(signed char)7] [i_6] [i_5] [i_7] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (unsigned char)129)), ((+(arr_17 [i_7] [i_5] [i_5] [i_1]))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) (short)-31400))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-31386)) + (((/* implicit */int) arr_10 [i_1]))))) : (((((/* implicit */_Bool) (short)-31403)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (1156089100690031752LL))))))));
                                var_15 -= ((/* implicit */signed char) (-(((/* implicit */int) (short)3))));
                                var_16 += ((/* implicit */long long int) arr_1 [i_7]);
                            }
                        } 
                    } 
                } 
                var_17 -= ((/* implicit */signed char) (short)31386);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))))), (min(((unsigned char)217), (((/* implicit */unsigned char) (signed char)-125))))))), (max((((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (var_7)))), (max((3554207730U), (((/* implicit */unsigned int) (short)31392))))))));
}
