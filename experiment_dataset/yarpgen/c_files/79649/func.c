/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79649
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
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        var_15 |= ((/* implicit */short) ((((((/* implicit */_Bool) min(((short)-19091), ((short)24766)))) ? (((int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)24766))))))) == ((-(((/* implicit */int) (short)19091))))));
        var_16 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 4] [(signed char)12])) | (((/* implicit */int) arr_2 [i_0 - 3] [(signed char)10])))))));
        var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_5)) ? (min((16656600422133465751ULL), (1790143651576085865ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (var_11))))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_2 [i_0] [(short)0]))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            {
                var_19 |= ((/* implicit */unsigned short) -592479693);
                var_20 &= ((/* implicit */unsigned int) (+((-(((long long int) (short)-32714))))));
                var_21 = ((/* implicit */unsigned char) 0ULL);
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (short i_5 = 2; i_5 < 20; i_5 += 4) 
                            {
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [(unsigned short)2] [i_3] [i_4] [i_5 - 1])) ? (((((/* implicit */_Bool) 3723661348064348245ULL)) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_5] [i_1 - 1] [(_Bool)1])) : (arr_7 [i_4]))) : (((/* implicit */int) (short)4667)))))));
                                var_23 -= ((/* implicit */unsigned long long int) 1125801838U);
                                var_24 -= ((/* implicit */_Bool) (~(var_10)));
                                var_25 += ((/* implicit */signed char) 962112415U);
                            }
                            for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                            {
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)99)) ? (1790143651576085883ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35573)))))) ? (((((/* implicit */_Bool) arr_9 [i_1] [(signed char)12] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58569))) : (arr_10 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527))))) : ((~(5408621992441381198LL)))));
                                var_27 |= ((/* implicit */_Bool) ((((((/* implicit */int) min((var_0), (arr_6 [i_6])))) > (((/* implicit */int) var_14)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_1] [i_4] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_6])) || (((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_4] [i_6]))));
                                var_29 = ((/* implicit */_Bool) ((((/* implicit */int) max(((short)-14571), (((/* implicit */short) arr_9 [i_1] [i_2] [13ULL]))))) << (((/* implicit */int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                            }
                            for (signed char i_7 = 1; i_7 < 20; i_7 += 2) 
                            {
                                var_30 = ((/* implicit */unsigned int) (_Bool)1);
                                var_31 = ((/* implicit */int) arr_11 [i_1] [i_1] [i_4] [i_7]);
                                var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_7] [i_7 + 3] [(_Bool)1] [i_7 + 3] [14] [i_7]))));
                            }
                            var_33 = ((/* implicit */unsigned int) (short)10904);
                            var_34 = ((/* implicit */long long int) arr_6 [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_35 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_12))))));
}
