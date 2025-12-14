/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91428
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
    var_14 = ((/* implicit */int) ((unsigned int) ((((/* implicit */long long int) (~(var_8)))) & (-332753479929841409LL))));
    var_15 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_10)) + (4190))))) <= (((/* implicit */int) ((unsigned short) (_Bool)1)))))), (var_11)));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_4))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 332753479929841409LL)) : (6403148463605607760ULL))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_18 = ((-332753479929841394LL) != (((((/* implicit */_Bool) min((((/* implicit */short) var_9)), (var_10)))) ? (332753479929841393LL) : (((/* implicit */long long int) ((/* implicit */int) max(((short)32645), (((/* implicit */short) var_5)))))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                arr_6 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))) != ((-(max((1047520258U), (((/* implicit */unsigned int) (unsigned short)22532))))))));
                arr_7 [i_2] = ((/* implicit */unsigned long long int) var_1);
            }
            /* vectorizable */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_19 *= ((/* implicit */unsigned short) ((((_Bool) -332753479929841409LL)) ? (((/* implicit */int) var_13)) : (((var_12) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)42978))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (var_6) : ((~(0)))));
                arr_10 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned int) -332753479929841409LL);
            }
            var_21 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_11))))))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)42978))))) ? (max((((/* implicit */long long int) (signed char)23)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)43004)))))))) ? (((/* implicit */long long int) ((((var_8) + (((/* implicit */int) (short)32658)))) + (min((var_8), (((/* implicit */int) (unsigned char)0))))))) : (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-5104092532347109839LL))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned short)43004)))))))));
            arr_11 [i_0] [i_0] = ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) -26)) : (var_7)));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-1))))) ? (max((((/* implicit */int) var_5)), (8064))) : (((/* implicit */int) (short)-18328))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (unsigned char i_6 = 2; i_6 < 12; i_6 += 2) 
                {
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((max((max((((/* implicit */long long int) var_5)), (var_3))), (((/* implicit */long long int) 8051)))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)12)))))))));
                        arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_1)))) <= (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_12)))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 1472612683)) ? (((/* implicit */int) (short)-29313)) : (((/* implicit */int) var_12))))), (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned short)42982))))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (unsigned char)47))))), (((((/* implicit */long long int) var_8)) / (var_3)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) ^ (var_8)));
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((unsigned long long int) (short)9863)))));
            var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)167))) > (var_7)));
        }
    }
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        arr_24 [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-32))))) - (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (979414392U)))));
        var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) (unsigned char)255))))) ? (9713305588437183LL) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -332753479929841388LL)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) var_11)))) > (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)224))))))))));
        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (((~(((/* implicit */int) (_Bool)0)))) ^ (((((/* implicit */_Bool) -263910506)) ? (558515363) : (((/* implicit */int) var_5)))))))));
        arr_25 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)15), (((unsigned char) 201025979U)))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (((/* implicit */int) (short)20778))))) - (((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_7)))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 1; i_10 < 20; i_10 += 4) 
            {
                {
                    var_31 = ((var_9) ? (((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */int) var_1)) + (67))) - (28))))) : (((/* implicit */int) var_4)));
                    arr_32 [i_8] [i_9] [i_10] = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)219)) >> (((((/* implicit */int) (unsigned short)3072)) - (3060))))) != (((/* implicit */int) var_9))));
                    var_32 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)25))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)144)))))) : (var_3)))));
                    var_33 = ((/* implicit */signed char) var_0);
                }
            } 
        } 
    }
}
