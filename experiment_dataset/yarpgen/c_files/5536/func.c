/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5536
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((_Bool) (_Bool)1));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)15)) | (((/* implicit */int) (unsigned char)255))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (short)15)) >= (((/* implicit */int) ((unsigned short) 1073741823LL))))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-16)), (((unsigned long long int) (signed char)-89))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_3] [i_1] [i_3] = ((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) ((unsigned short) (unsigned short)54090))), (-2733713434105997521LL))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_15 = min((((/* implicit */unsigned long long int) ((unsigned int) min((4294967279U), (1580195285U))))), (((unsigned long long int) (_Bool)1)));
                                var_16 += ((/* implicit */short) ((unsigned short) ((unsigned char) ((_Bool) 6904327314013131065ULL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned int) max((((long long int) 6590522303318571334LL)), (((/* implicit */long long int) max((min((((/* implicit */unsigned int) (unsigned char)0)), (3038245867U))), (((/* implicit */unsigned int) (unsigned short)11473)))))));
                                arr_24 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 35184372088831ULL)) || (((/* implicit */_Bool) (short)15))))), (-8267970553920259665LL)))), (((unsigned long long int) 6706530685726888571LL))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) min((((int) min((((/* implicit */long long int) 1288404528U)), ((-9223372036854775807LL - 1LL))))), (((int) ((((/* implicit */_Bool) (unsigned short)23421)) && ((_Bool)1))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) max((((unsigned int) -1997360757)), (((/* implicit */unsigned int) ((_Bool) -1536387259)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            var_20 = ((/* implicit */_Bool) ((-717273431) % (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((unsigned char) -880276138));
                            arr_36 [i_12] [i_9] [i_12] [i_9] [i_9] [i_9] [i_12] = ((/* implicit */unsigned short) 3217166818U);
                        }
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (unsigned short)54090))) || (((/* implicit */_Bool) 18446744073709551615ULL))));
                    }
                } 
            } 
            var_23 *= ((/* implicit */unsigned short) (short)9184);
        }
        arr_37 [i_8] [i_8] |= ((/* implicit */unsigned short) ((unsigned char) ((short) max(((short)-1), (((/* implicit */short) (unsigned char)255))))));
        arr_38 [i_8] [9LL] = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) ((unsigned short) (_Bool)1))), (((unsigned int) 255ULL)))), (((unsigned int) (unsigned char)2))));
    }
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) != (min((max((-2733713434105997521LL), (6590522303318571334LL))), (((/* implicit */long long int) ((_Bool) (unsigned short)11446)))))));
}
