/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94997
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
    var_19 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)255)), (5469088437522140876LL)))), (min((18446744073709551606ULL), (((/* implicit */unsigned long long int) var_12)))))) % (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((long long int) 25ULL))) < (7ULL)))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
                            {
                                arr_13 [i_0] [(_Bool)1] [i_0] [i_3] [i_0] &= ((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)13)), ((unsigned short)65235)));
                                arr_14 [i_2] [i_1 - 1] [i_2] [i_3] [(signed char)11] = ((/* implicit */short) ((unsigned short) ((short) ((24ULL) & (((/* implicit */unsigned long long int) 2278644462366024746LL))))));
                                var_21 += ((/* implicit */_Bool) (unsigned char)165);
                            }
                            for (long long int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                            {
                                var_22 = ((/* implicit */long long int) 18446744073709551594ULL);
                                var_23 = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned long long int) 1476097482U)) != (20ULL))));
                            }
                            arr_18 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) -1602239710)) : (1121204213U)))), (((max((var_11), (((/* implicit */long long int) (unsigned char)52)))) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 4503591037435904LL))))))));
                            var_24 *= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) (_Bool)1)), (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((266338304LL), (((/* implicit */long long int) (_Bool)1))))) && (((/* implicit */_Bool) max((1864961881U), (2342980095U)))))))));
                            var_25 = ((/* implicit */short) min((((((((/* implicit */_Bool) var_6)) ? (2430005409U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-10958))))))))), (((((1031475480U) >> (((2181843386368LL) - (2181843386341LL))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)32767)) == (((/* implicit */int) (unsigned char)79))))))))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_0] [i_0] &= max((((/* implicit */short) ((((/* implicit */unsigned int) ((int) var_7))) >= (1864961881U)))), (max((((/* implicit */short) var_4)), (((short) var_7)))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) 536870911)) | (-4339583916124169268LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -8064465137280611295LL)) ? (var_5) : (var_0)))) : (max((((/* implicit */long long int) var_7)), (var_15))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)19892), (((/* implicit */short) (_Bool)0)))))) : (((((/* implicit */_Bool) var_6)) ? (-5715741508753702930LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    var_27 &= ((/* implicit */signed char) ((((var_6) + (9223372036854775807LL))) >> (((max((((((/* implicit */long long int) ((/* implicit */int) var_9))) & (2181843386362LL))), (((long long int) var_18)))) - (126LL)))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            {
                arr_25 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((long long int) ((var_15) >> (((/* implicit */int) (short)7))))) : (max((((/* implicit */long long int) max((2072608364), (2147483647)))), (((((/* implicit */_Bool) (short)11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))) : (3153379462377429562LL)))))));
                var_28 *= ((/* implicit */unsigned char) ((_Bool) (unsigned char)96));
            }
        } 
    } 
}
