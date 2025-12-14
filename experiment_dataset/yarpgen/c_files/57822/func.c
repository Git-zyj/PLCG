/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57822
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
    var_10 += ((/* implicit */unsigned int) ((unsigned char) var_4));
    var_11 = max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) - (var_2))), (max((min((((/* implicit */unsigned int) var_5)), (var_2))), (var_7))));
    var_12 = ((/* implicit */long long int) (unsigned char)198);
    var_13 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_14 = ((short) (unsigned char)0);
            var_15 ^= ((/* implicit */signed char) (~(((/* implicit */int) min(((short)-3624), (((/* implicit */short) (unsigned char)243)))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 12; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_16 *= ((/* implicit */_Bool) (+(max((0LL), (((/* implicit */long long int) 96534192U))))));
                        var_17 = ((/* implicit */short) arr_12 [i_0] [i_2] [i_2] [i_4]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            var_18 = (+(((/* implicit */int) (unsigned char)255)));
                            var_19 = ((/* implicit */unsigned short) (~(arr_17 [i_0] [i_0] [i_2] [i_3] [i_3 - 2] [i_4] [i_5])));
                        }
                        for (unsigned short i_6 = 2; i_6 < 13; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)27140))))), (((unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                            var_21 ^= ((/* implicit */unsigned char) 20995568U);
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (signed char)36))) ? ((-((+(((/* implicit */int) var_6)))))) : ((-(arr_7 [i_2] [i_2])))));
                        }
                    }
                } 
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)21663))));
        arr_24 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_3 [i_7] [i_7] [i_7]), (arr_3 [i_7] [i_7] [i_7])))) ? ((~(arr_10 [i_7] [6] [i_7] [i_7]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned int) arr_9 [(short)10]))), (((((/* implicit */_Bool) arr_12 [i_7] [i_7] [(unsigned short)4] [i_7])) ? (-5140747678692641184LL) : (((/* implicit */long long int) 3673358056U)))))))));
    }
}
