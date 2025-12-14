/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63478
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((13001873969353684883ULL) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))))))) < (min((((/* implicit */long long int) var_18)), ((~(9223372036854775807LL))))))))));
                                var_20 = ((/* implicit */unsigned short) max((((((((var_14) % (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)95)) - (36))))), (min((2390756475342467689LL), (((((/* implicit */_Bool) 5444870104355866716ULL)) ? (((/* implicit */long long int) 986521038U)) : (var_2)))))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_11))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 8U)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48604))) : (3612726497U))))))) && (((((((/* implicit */_Bool) 5444870104355866737ULL)) ? (-1476862317531383335LL) : (var_14))) < (2390756475342467712LL)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) -168270594);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (signed char)103)), (22ULL))) * (((/* implicit */unsigned long long int) -168270564))));
                    arr_20 [9LL] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [i_5] [i_6] [i_7])), (var_18)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_7] [i_6])) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) arr_3 [i_5] [i_6]))))) : (((((/* implicit */_Bool) arr_3 [i_5] [i_6])) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7] [i_6] [i_7])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 4; i_8 < 9; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_6] [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)23))))) > (min((arr_13 [i_5] [i_5]), (arr_13 [i_6] [i_5])))));
                                var_26 *= ((/* implicit */short) (signed char)-1);
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52516))) < (((26ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) < (((/* implicit */int) (signed char)126))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
}
