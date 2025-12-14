/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6102
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) (unsigned short)16960)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) : (((/* implicit */int) (signed char)-102))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) - (arr_9 [i_2] [i_2] [i_2] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16960)) / (((/* implicit */int) arr_1 [i_0])))))))));
                            arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */int) ((((/* implicit */long long int) 886315530)) == (var_7)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)246)))))), (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 + 2] [i_0])) <= (((/* implicit */int) arr_7 [i_0 + 4] [i_0 + 1] [i_0 + 2])))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                            {
                                var_19 = ((/* implicit */int) var_4);
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (((((/* implicit */_Bool) (short)29105)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))) : (arr_11 [i_2] [i_1] [i_1] [i_1] [i_1]))))))));
                                var_21 ^= ((/* implicit */short) arr_11 [i_2] [i_4 + 1] [i_2] [i_2] [i_2]);
                                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_4 - 1] [i_0 + 4]))));
                            }
                            var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) ^ ((+(1802580826U)))));
                            var_24 = ((/* implicit */long long int) max((min((2727041228487545535ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 4])) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) (unsigned short)16958)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (long long int i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_25 &= max((((arr_5 [i_0 - 1] [i_5] [i_5] [i_6 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6] [i_6] [i_6 + 1] [i_1]))))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) >> (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) arr_20 [i_1] [i_7] [i_6 + 1] [i_1]))))));
                                arr_21 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (2526726298U)))) ^ (var_2))))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12)))))))), (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)124)) << (((((/* implicit */int) (unsigned short)30747)) - (30744)))))), (-1103160375652145355LL))))))));
                arr_22 [i_1] [i_1] [i_1] |= var_17;
                /* LoopSeq 1 */
                for (unsigned int i_8 = 3; i_8 < 20; i_8 += 4) 
                {
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((var_12), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-12)) != (((/* implicit */int) arr_19 [i_0 + 3] [i_8] [i_8 + 1] [i_8] [i_8 - 3] [i_1]))))))))));
                    var_28 *= ((/* implicit */unsigned char) max(((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) ^ (var_6))))), (((/* implicit */long long int) max((max((2333261194U), (((/* implicit */unsigned int) arr_16 [i_0 + 3] [i_1] [i_8 + 1] [i_8 + 2] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (short)17178))))))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))) < (279876102351110736LL)));
}
