/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60086
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
    var_18 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) min(((signed char)-1), (((/* implicit */signed char) var_3))))), (min((var_1), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) min(((signed char)-91), (var_8)))), (min((((/* implicit */unsigned char) (_Bool)1)), (var_12))))))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((var_8), (((/* implicit */signed char) (_Bool)0))))), (min((var_4), (((/* implicit */long long int) (signed char)-59))))))), (min((min((((/* implicit */unsigned long long int) 223546884889481982LL)), (var_6))), (((/* implicit */unsigned long long int) min((-4664432046323665827LL), (var_4)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_20 -= (signed char)54;
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) 995060676U);
            var_21 = ((/* implicit */unsigned short) (_Bool)1);
        }
        for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
        {
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) 5791335834610926500LL);
            var_22 ^= (signed char)74;
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) (signed char)74);
                /* LoopSeq 3 */
                for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
                {
                    var_24 = ((/* implicit */long long int) (signed char)82);
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        arr_16 [i_5] [i_4 + 1] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_25 ^= ((/* implicit */short) -6955374589910618322LL);
                        var_26 = ((/* implicit */unsigned char) (signed char)120);
                    }
                    arr_17 [9LL] [i_0] = ((/* implicit */short) (unsigned char)97);
                }
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) (unsigned char)129);
                    var_28 -= ((/* implicit */unsigned char) (signed char)87);
                }
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    arr_24 [i_0] [i_0] [i_3] [i_7] = ((/* implicit */unsigned long long int) (unsigned short)31);
                    arr_25 [i_0] [i_2 + 2] [i_0] [i_7] [i_7] [i_3] = ((/* implicit */signed char) (unsigned char)208);
                    var_29 = ((/* implicit */long long int) (signed char)54);
                }
                var_30 = ((/* implicit */short) (_Bool)1);
            }
        }
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (unsigned short)37362))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 2; i_8 < 11; i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] [i_8 - 1] = ((/* implicit */unsigned long long int) (short)-15356);
        arr_29 [i_8] [i_8] = (signed char)54;
        arr_30 [i_8] = ((/* implicit */_Bool) (short)-15352);
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) 4294967295U))));
    }
}
