/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70663
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_13))))) == (max((((long long int) var_5)), (var_7)))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_14);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [(short)7] [i_1] [i_0 + 2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (max((((/* implicit */unsigned long long int) ((long long int) var_10))), (((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned long long int) -3686915297321875592LL))))))));
                    arr_8 [i_1] = ((/* implicit */long long int) (short)-7533);
                }
            } 
        } 
    }
    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31672))) : (17397170908253335242ULL))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-18)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) var_1)) : (var_6)))), (max((1049573165456216373ULL), (((/* implicit */unsigned long long int) var_1)))))))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_2))))))))));
    }
    for (unsigned int i_4 = 1; i_4 < 16; i_4 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_14))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 17; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
                    {
                        arr_19 [i_4] [i_5] [i_6] [i_7] &= ((/* implicit */unsigned int) (short)-1880);
                        arr_20 [i_4] [i_5] [i_6] [i_7] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) max((var_5), (var_7)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_2)) : (var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((max(((short)(-32767 - 1)), ((short)-6602))), (((/* implicit */short) ((unsigned char) var_5))))))) : (((((/* implicit */_Bool) max((var_0), ((short)21068)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) : (var_15)))));
                    }
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                    {
                        var_22 += ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (max((var_6), (((/* implicit */long long int) var_13)))) : (584880377950159430LL))));
                        arr_24 [i_4 - 1] [i_5] [i_6] [(unsigned char)16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-1308), (var_0))))) : (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)27579)))))))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) (short)-2)) : (((/* implicit */int) var_12))))));
                    }
                    var_23 *= ((/* implicit */unsigned int) ((short) var_13));
                }
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        arr_28 [i_9] [i_9] = ((/* implicit */short) ((var_6) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_9)) >= (var_6)))))));
        var_24 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((3406146531U), (((/* implicit */unsigned int) var_8))))) ? (max((var_14), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) << (((var_9) - (2866143019U)))))))), (((/* implicit */unsigned long long int) var_5))));
    }
    var_25 = ((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (short)-31254))));
}
