/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57274
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) min((arr_1 [i_0] [(short)14]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) arr_5 [i_1]))))))))));
                var_13 = ((/* implicit */long long int) arr_0 [i_0] [(unsigned short)2]);
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_14 = ((/* implicit */short) ((unsigned long long int) arr_2 [i_0]));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2] [i_1])))))) : (((max((((/* implicit */long long int) -1695125306)), (var_4))) - (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                }
                for (short i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_1] [i_3] [(unsigned short)13] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_6 [1U] [1U] [i_3] [1U]))))))) - (((unsigned long long int) var_11))));
                                var_16 = ((/* implicit */unsigned short) ((signed char) (short)-32761));
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */unsigned long long int) -1558856011);
                    arr_17 [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_2 [i_1]));
                }
                for (short i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 2; i_7 < 12; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_8 = 2; i_8 < 13; i_8 += 4) 
                        {
                            arr_28 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) var_3));
                            var_18 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-81))));
                            arr_29 [i_0] [10ULL] [i_0] [(unsigned short)3] [i_0] |= ((/* implicit */unsigned int) (signed char)-15);
                        }
                        arr_30 [(short)10] [i_1] [i_1] [i_1] |= ((/* implicit */signed char) (~(((/* implicit */int) (short)-15375))));
                        var_19 = ((/* implicit */unsigned int) max(((~(var_10))), (max((((/* implicit */unsigned long long int) min(((unsigned short)22242), (var_11)))), (((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [9U] [i_6] [i_7]))) : (18446744073709551615ULL)))))));
                    }
                    arr_31 [i_0] [i_0] [i_6] [i_6] = (short)15367;
                    var_20 = ((/* implicit */unsigned char) var_5);
                    arr_32 [i_1] [i_1] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-12132))));
                }
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned short) ((7058033944635600829LL) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    var_22 = ((/* implicit */signed char) (((~((~(202875773U))))) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34)))));
}
