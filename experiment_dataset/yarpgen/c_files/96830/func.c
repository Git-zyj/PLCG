/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96830
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) min((max((max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)194))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)61))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1])))))) : (max((((/* implicit */unsigned long long int) -1519099942)), (3481428863801835775ULL))))))))));
                    var_12 |= ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 3451361342U))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */int) (!(((((unsigned int) arr_3 [i_2])) < (3669344954U)))));
                                var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1])) > (((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) max((var_15), (((min((((((/* implicit */int) (unsigned char)194)) % (-1519099929))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) >> (((((unsigned long long int) var_10)) - (1695319707ULL)))))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(var_8))))));
                                arr_29 [(_Bool)1] [i_9] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) 498374180))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)61)))))));
                                arr_30 [i_9] [i_8] [i_8] [i_9] [i_7] [i_6] [i_5] = ((/* implicit */unsigned int) arr_23 [i_5] [i_6] [i_5] [i_8]);
                            }
                        } 
                    } 
                } 
                arr_31 [i_6] = (+(((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5])));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 1) 
                {
                    for (unsigned char i_11 = 2; i_11 < 9; i_11 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_26 [i_10 + 1] [i_10] [i_10 - 2]))));
                            var_18 = ((/* implicit */signed char) (unsigned char)169);
                            var_19 ^= ((/* implicit */unsigned long long int) (((~((~(18446744073709551615ULL))))) > (((/* implicit */unsigned long long int) arr_15 [8ULL] [i_10 - 1]))));
                            arr_38 [i_11 - 2] [10ULL] [i_5] [i_5] [i_6] [i_5] &= arr_32 [i_6];
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) arr_36 [i_5] [i_10 - 2] [10] [i_10] [i_10 - 2] [i_5])) : (((/* implicit */int) arr_36 [i_5] [i_11] [i_11] [i_11 + 2] [i_10 - 2] [i_5])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (unsigned char)194)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) (unsigned short)65535)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned short)65535))))))));
}
