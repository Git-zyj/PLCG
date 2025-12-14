/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96583
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_14))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6346)) ? (((long long int) (unsigned char)120)) : ((((_Bool)1) ? (-7780085235238153752LL) : (((/* implicit */long long int) ((/* implicit */int) (short)63)))))))) * (((unsigned long long int) (short)63))));
                var_21 = ((/* implicit */unsigned short) var_7);
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (+(var_1)));
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_3 + 1] [i_4] [i_3] = ((unsigned long long int) max(((~(((/* implicit */int) var_17)))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)83)) : (var_14)))));
                                arr_17 [i_0] [i_1] [i_1] [i_4] [i_4] [i_4] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)34))))) ? (max((var_11), (((/* implicit */long long int) var_17)))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)62151)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)63)) ? (((/* implicit */int) (short)5887)) : (((/* implicit */int) (unsigned short)15360)))), (((/* implicit */int) (short)63))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63439)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)63))))))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) var_0)), (max((((/* implicit */unsigned int) var_6)), (7U)))))));
                    var_25 = ((/* implicit */unsigned short) var_15);
                    var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(var_14)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (2946202098872903764LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (max((((/* implicit */unsigned int) var_17)), (var_16)))))));
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        arr_29 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */short) var_7);
                        var_27 = ((/* implicit */short) (+(max((((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))))));
                    }
                    for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                        var_29 = ((/* implicit */int) (signed char)125);
                        var_30 += ((/* implicit */int) 1ULL);
                        var_31 = ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54)))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 18446744073709551614ULL)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32766))))))))));
                        arr_33 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) var_3);
                    }
                    for (unsigned int i_10 = 1; i_10 < 18; i_10 += 3) 
                    {
                        arr_36 [i_5] [i_5] [i_7] [i_7] [i_7] [i_10] = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (signed char)-123)))))), (((int) ((short) var_7)))));
                        arr_37 [i_7] [i_5] [i_7] [i_7] [i_10] [i_10] = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_8)) - (((/* implicit */int) var_0))))));
                    }
                }
            } 
        } 
    } 
}
