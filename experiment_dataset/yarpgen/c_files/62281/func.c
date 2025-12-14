/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62281
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
    var_16 |= ((/* implicit */unsigned char) var_7);
    var_17 = ((/* implicit */signed char) ((short) ((_Bool) min((((/* implicit */unsigned long long int) -9223372036854775804LL)), (18446744073709551614ULL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 ^= ((/* implicit */unsigned char) ((long long int) (((((~(9223372036854775799LL))) + (9223372036854775807LL))) << (((((((-9223372036854775800LL) - (-9223372036854775789LL))) + (73LL))) - (15LL))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_19 = max((min(((+(var_6))), (((/* implicit */long long int) ((short) arr_8 [i_0] [(unsigned short)1] [i_2]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) -9223372036854775804LL)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned short)0)))) : ((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_4]))))))));
                                var_20 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) -1528842621)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)14)))));
                                var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)448)), ((unsigned short)65521))))));
                            }
                        } 
                    } 
                    var_22 |= ((/* implicit */unsigned char) ((long long int) ((_Bool) var_11)));
                    arr_15 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) -374648073)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-77)) ^ (((/* implicit */int) var_5)))))))) && (((/* implicit */_Bool) var_9))));
                }
                var_23 = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_1))))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_24 = max((((((/* implicit */int) arr_16 [i_0] [i_0 - 3] [i_5] [i_7 - 4])) + (((/* implicit */int) arr_18 [i_0] [i_0 - 3] [i_5] [i_7 - 4])))), (((/* implicit */int) ((_Bool) var_12))));
                                var_25 |= ((/* implicit */_Bool) (-(arr_10 [(short)20] [(short)14] [(short)14] [12LL])));
                                var_26 += ((/* implicit */_Bool) (-(max((((/* implicit */long long int) arr_4 [(short)18])), (var_15)))));
                                var_27 = ((/* implicit */unsigned long long int) ((long long int) min((((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [(_Bool)1] [i_1] [(short)9] [i_0]))) : (var_15))), (((/* implicit */long long int) arr_14 [(unsigned short)14] [i_1] [i_7 - 4] [i_5] [(_Bool)1])))));
                            }
                        } 
                    } 
                    var_28 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_18 [i_0] [i_0 - 1] [i_0] [i_0 - 1])), (((int) arr_18 [i_0] [i_0 + 1] [i_0] [i_0 - 2]))));
                    var_29 *= ((/* implicit */unsigned char) max(((~(arr_6 [i_0 + 1] [(unsigned char)8]))), ((+(arr_6 [i_0] [12ULL])))));
                    var_30 -= ((signed char) (unsigned short)24);
                }
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)21));
                    var_32 = ((/* implicit */long long int) max((var_32), ((~(((((/* implicit */long long int) ((/* implicit */int) var_9))) - (((var_2) ? (18014398475927552LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_0] [i_0 - 3] [i_0] [i_0 - 2])))))))))));
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                }
            }
        } 
    } 
}
