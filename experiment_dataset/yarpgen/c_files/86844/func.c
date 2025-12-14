/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86844
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+((~(arr_5 [i_0] [i_0] [i_0])))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) 3U)) % (max((arr_8 [i_2 - 2] [i_1] [i_1 - 1] [i_1 - 4] [i_1 + 1]), (arr_8 [i_2 - 1] [i_2] [i_1 - 4] [i_1 - 4] [i_1 + 1])))));
                        var_17 |= ((/* implicit */unsigned int) ((((/* implicit */int) (short)16)) / (((/* implicit */int) (unsigned short)34376))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)107)), (2722441549U))))));
                    }
                    var_19 = (-(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)22)), (2067675587160914608LL)))) && (((/* implicit */_Bool) min((883886839U), (((/* implicit */unsigned int) (unsigned short)34360)))))))));
                }
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned char)150)), (((((/* implicit */_Bool) (short)22)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((+(var_14)))))));
                    var_20 *= ((/* implicit */signed char) (short)16219);
                }
                var_21 = ((/* implicit */int) var_15);
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    for (short i_6 = 1; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_15)), (4294967282U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) & (9249115U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned short)48375)) : (((/* implicit */int) (short)2066)))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)18)) ? (((/* implicit */int) (short)27164)) : (((/* implicit */int) (unsigned short)34376))));
                            arr_21 [i_0] [i_0] [i_0] [i_6] [(unsigned char)18] = (-(((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)1), (((/* implicit */unsigned short) (short)22)))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) (-(max((3473963563U), (4294967295U)))));
                    arr_24 [i_0] [i_1 - 1] [i_7] = ((/* implicit */short) (-(((((/* implicit */_Bool) 1407600017U)) ? (((/* implicit */int) (unsigned short)2642)) : (((/* implicit */int) (short)-27147))))));
                }
                for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    arr_27 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (2451538166U)))) ? ((~(((/* implicit */int) (unsigned short)49141)))) : (((/* implicit */int) ((unsigned char) (short)2074)))))) ? (28U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                    var_25 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (signed char)112))));
                    arr_28 [16ULL] [i_1 - 1] [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)27313)), (((((/* implicit */_Bool) min((4278436030U), (((/* implicit */unsigned int) (unsigned char)35))))) ? (((((/* implicit */_Bool) arr_3 [(unsigned char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) var_4);
    var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3975521549U)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (unsigned char)118))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)88)), ((unsigned short)64114)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-27154))))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (21U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) (signed char)74)) : (((int) var_12))))));
    var_28 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)2933), ((unsigned short)49141)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 965550092)) ? (((/* implicit */int) (signed char)-55)) : (-1358472930))))))), (var_15)));
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        for (unsigned char i_10 = 2; i_10 < 18; i_10 += 1) 
        {
            {
                var_29 = (((-(min((var_14), (var_14))))) << (((min((((/* implicit */unsigned int) arr_20 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 - 2] [(short)14] [i_10 - 1])), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49141))) : (5U))))) - (90U))));
                var_30 = ((/* implicit */unsigned char) (~((~(((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-17)))))))));
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) var_7)))) != (((/* implicit */int) ((((/* implicit */_Bool) 264138542993595846LL)) || ((_Bool)1)))))))) + (max((arr_5 [i_9] [i_10 - 2] [i_10]), (((/* implicit */unsigned long long int) (~(-965550092))))))));
                var_32 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-17)) ? (arr_1 [i_10 - 1]) : (((/* implicit */int) (short)14)))) * (((/* implicit */int) ((_Bool) var_15)))));
                var_33 *= ((/* implicit */unsigned int) (+(3400301893945254566ULL)));
            }
        } 
    } 
}
