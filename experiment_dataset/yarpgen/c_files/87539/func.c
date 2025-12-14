/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87539
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (unsigned short)31096))))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [(short)19] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)31100))))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) (short)4309)) : (((/* implicit */int) (unsigned short)34443))))));
                        var_13 = ((/* implicit */unsigned int) (unsigned short)31110);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            arr_17 [13] [13] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)34408)) + (((/* implicit */int) (signed char)-116))));
                            arr_18 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)34439))));
                            var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (777523361U)));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */short) ((((((/* implicit */int) (short)-16)) + (2147483647))) << (((((/* implicit */int) (unsigned short)24899)) - (24899)))));
                            var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)127))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            arr_25 [6U] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-120)) / (((/* implicit */int) (short)1020))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)5402))))) : (max((((/* implicit */unsigned int) (signed char)91)), (1893848434U)))))), (((((/* implicit */_Bool) (signed char)96)) ? (31525197391593472ULL) : (((/* implicit */unsigned long long int) 2988361743U))))));
                            arr_26 [i_6] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (((~(-2134567221550777077LL))) > (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))));
                            arr_27 [i_6] [i_1] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned short)31116))))));
                            arr_28 [i_0] [i_2] [i_3] [(short)7] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */int) (signed char)-123)) & (((/* implicit */int) (_Bool)1)))) <= (((((/* implicit */_Bool) (unsigned short)31080)) ? (-4471982) : (((/* implicit */int) (signed char)-4)))))))));
                        }
                        arr_29 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(1048575ULL)))) && (((/* implicit */_Bool) (short)28259)))), (((((/* implicit */int) (unsigned short)34426)) > (((/* implicit */int) (unsigned short)31106))))));
                    }
                    for (unsigned char i_7 = 1; i_7 < 17; i_7 += 2) /* same iter space */
                    {
                        var_17 -= ((/* implicit */short) (((~((+(((/* implicit */int) (signed char)(-127 - 1))))))) >= ((-2147483647 - 1))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-2134567221550777077LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18)))))) ? (((((/* implicit */int) (unsigned short)31109)) % (2147483638))) : (((/* implicit */int) max(((unsigned char)45), ((unsigned char)233)))))))));
                        arr_32 [i_0] [i_1] [i_2] [i_7] [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max(((+(2401118862U))), (((/* implicit */unsigned int) 2147483639))))) == (max((((/* implicit */unsigned long long int) 1893848423U)), (18445618173802708992ULL)))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551592ULL)))))));
}
