/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69008
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
    var_13 ^= max((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_3))))), (((((/* implicit */_Bool) max((14466911301271502879ULL), (((/* implicit */unsigned long long int) (signed char)-93))))) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (var_8)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) arr_4 [i_0])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_1 + 2] [i_0] = ((/* implicit */unsigned int) arr_2 [i_2] [i_1]);
                                var_15 = ((/* implicit */int) (signed char)58);
                                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (+((-2147483647 - 1)))))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                var_17 = ((/* implicit */signed char) ((int) 2147483647));
                                var_18 = ((/* implicit */_Bool) (~((-2147483647 - 1))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_11 [i_0] [i_1] [i_1] [(signed char)18] [i_3] [i_3])))) ? (((/* implicit */int) ((signed char) -2147483647))) : (2147483647)));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_3] [i_1 + 3] [i_1 + 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))) : (6215888665204666984LL)));
                            }
                            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                            {
                                var_21 = 18446744073709551615ULL;
                                arr_25 [i_7] [i_3] [i_2] [i_1 - 1] [i_3] [i_0] = ((/* implicit */int) var_10);
                            }
                            var_22 ^= ((/* implicit */unsigned char) 3862168464U);
                            /* LoopSeq 2 */
                            for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                            {
                                var_23 = ((/* implicit */signed char) ((unsigned char) (+(((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */int) arr_0 [(unsigned char)10])) : (((/* implicit */int) arr_21 [i_3])))))));
                                var_24 -= ((/* implicit */short) ((((((((/* implicit */int) arr_24 [i_1 + 1] [i_8] [i_2] [(_Bool)1] [i_1 + 1])) & (((/* implicit */int) arr_24 [i_1 + 2] [i_2] [(short)16] [(short)16] [i_8])))) + (2147483647))) >> ((((-(var_9))) - (17255880249704336498ULL)))));
                                var_25 += ((/* implicit */unsigned short) (~(((/* implicit */int) (((~(((/* implicit */int) arr_14 [i_3])))) != ((+(((/* implicit */int) (signed char)-31)))))))));
                                arr_28 [(signed char)6] [i_1 + 1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((-2147483647) / (((/* implicit */int) (unsigned char)248))));
                                var_26 = ((/* implicit */int) arr_0 [i_1 + 3]);
                            }
                            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
                            {
                                var_27 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((arr_10 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 1]), (var_7)))), (max((arr_3 [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned long long int) var_0))))));
                                var_28 = ((/* implicit */_Bool) (signed char)94);
                            }
                            var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-93)))) ? (((/* implicit */unsigned long long int) arr_22 [i_0] [20LL] [(_Bool)1] [i_2] [i_2])) : (max((arr_8 [i_2] [i_2] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_27 [i_0] [18] [i_0] [i_1] [i_2] [i_3]))))))) ? (((/* implicit */int) arr_27 [0] [16U] [i_2] [i_3] [i_2] [i_3])) : (((/* implicit */int) var_10))));
                        }
                    } 
                } 
            }
        } 
    } 
}
