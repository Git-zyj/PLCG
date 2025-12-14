/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95671
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) (_Bool)1);
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) 2469870853U))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_16 [i_2] [i_2] = ((/* implicit */int) 1623046281698397393LL);
                            var_16 = ((/* implicit */unsigned char) (short)-8401);
                            arr_17 [i_0] [1ULL] [i_2] [i_3] [i_3] = ((/* implicit */signed char) -975983254);
                        }
                        var_17 -= ((/* implicit */_Bool) -6791245404750595701LL);
                        arr_18 [i_0] [i_0] [8LL] [(signed char)4] [i_3 - 1] &= ((/* implicit */signed char) (unsigned char)132);
                        arr_19 [i_0] [i_1] [i_2 + 2] [i_2] = 17087056956160128985ULL;
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 4; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */long long int) (unsigned char)72);
                            var_19 = ((/* implicit */unsigned short) (short)(-32767 - 1));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (unsigned char)242))));
                        }
                        for (unsigned long long int i_6 = 4; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            arr_27 [i_2] = ((/* implicit */unsigned long long int) (unsigned char)254);
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) -6859687209124899748LL))));
                            arr_28 [i_2] [i_3] [i_3] [i_2] [i_2] [i_1 + 1] [i_2] = ((/* implicit */signed char) 7021441331358197206ULL);
                            arr_29 [i_0] [i_1] [i_6] [i_1] [i_2] [i_3 - 1] = ((/* implicit */short) (unsigned char)244);
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) -5744803345439625358LL))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 4; i_7 < 20; i_7 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) 14394520132022552381ULL))));
                            arr_34 [i_2] [i_3] [i_2] [i_1 - 1] [i_2] = ((/* implicit */int) (_Bool)1);
                            var_24 *= ((/* implicit */short) (unsigned char)123);
                            var_25 = ((/* implicit */int) (signed char)95);
                        }
                    }
                } 
            } 
        } 
    }
    var_26 |= ((/* implicit */_Bool) var_0);
    var_27 = ((/* implicit */signed char) var_10);
    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_12))));
    var_29 -= ((/* implicit */unsigned long long int) var_6);
}
