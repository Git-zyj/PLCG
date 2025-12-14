/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74217
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((min((var_11), ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15729))) : (var_4))))) ^ (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_1 + 1] [i_1 - 3]), (arr_2 [i_0])))))));
                var_13 *= ((/* implicit */unsigned char) arr_4 [i_0] [(unsigned char)20] [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_14 = max((((/* implicit */int) (signed char)11)), ((-2147483647 - 1)));
                            arr_14 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)0))))), (min((var_0), (((/* implicit */unsigned long long int) (short)-29247))))))) ? (((/* implicit */int) (signed char)91)) : (max((var_8), (var_9)))));
                            arr_15 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) min((var_1), ((short)4094)));
                            var_15 *= ((/* implicit */short) (-(max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)14836))) != (2097150U)))), (arr_7 [i_1 + 1] [i_1 - 1])))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */_Bool) var_9);
                    arr_19 [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) (unsigned char)20);
                }
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                {
                    arr_22 [i_5] [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) arr_2 [i_1 - 4]);
                    var_17 *= ((/* implicit */_Bool) ((unsigned char) (short)32752));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                {
                    var_18 = ((unsigned short) ((long long int) var_1));
                    arr_26 [i_0] [i_1] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 3]))));
                    var_19 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0])))));
                    var_20 = ((/* implicit */unsigned short) var_3);
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) 592945934)) : (4442968116515948061LL)));
                                arr_34 [i_9] [(signed char)0] [(signed char)0] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) && (((/* implicit */_Bool) var_8))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43807)) % (((/* implicit */int) (signed char)7))))) ? (3754631869U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    var_23 ^= (((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 2] [(short)10] [i_7])))))));
                }
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) max((((3670109331U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 2]))))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (signed char)-43)))), (((/* implicit */int) (unsigned char)225))))))))));
            }
        } 
    } 
    var_26 ^= ((/* implicit */signed char) var_0);
}
