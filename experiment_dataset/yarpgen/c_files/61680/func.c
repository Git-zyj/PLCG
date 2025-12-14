/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61680
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
    var_15 = ((/* implicit */signed char) (unsigned short)1023);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65534)) || (((/* implicit */_Bool) 1ULL))))))))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((6705833720971168804ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) ? (((/* implicit */int) (short)18849)) : (((/* implicit */int) (short)(-32767 - 1)))))) && (((/* implicit */_Bool) (~((~(11740910352738382812ULL))))))));
                            var_18 &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-15112)))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_4)) + (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))) : (6705833720971168813ULL)))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_4 = 2; i_4 < 13; i_4 += 1) 
                {
                    arr_12 [i_0] [i_1] [i_1] [i_4 + 1] = (+(((((/* implicit */int) (unsigned char)137)) ^ (2113578282))));
                    var_19 = var_13;
                }
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~((~(((/* implicit */int) (unsigned char)128)))))))));
                                var_21 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1811))) == (11740910352738382812ULL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_1] [(short)9] [i_0] [i_0] [i_0] = ((/* implicit */int) 12149561722241864980ULL);
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((-(6297182351467686637ULL))) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_2))))))))))));
                                arr_29 [i_9] [i_1] [i_1] [i_0] = ((/* implicit */short) (_Bool)0);
                                var_23 = (+((((((~(((/* implicit */int) (unsigned char)255)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-124)) >= (((/* implicit */int) (short)-8))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_10 = 3; i_10 < 14; i_10 += 2) 
                {
                    arr_32 [(unsigned char)8] [i_0] &= ((/* implicit */long long int) (~(var_11)));
                    arr_33 [i_1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((8191) << (((var_11) - (9842520984736584656ULL)))))))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (1ULL)))));
                }
                arr_34 [i_1] = ((/* implicit */unsigned int) var_6);
                var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_7)))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) (+(((/* implicit */int) var_5))));
    var_26 = ((/* implicit */int) ((((((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_0))))) >= ((-(((/* implicit */int) (short)-12)))))) || (((/* implicit */_Bool) 18446744073709551613ULL))));
}
