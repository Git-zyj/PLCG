/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93980
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 4; i_2 < 8; i_2 += 4) /* same iter space */
                {
                    arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)252))));
                    arr_7 [i_2] [i_1 + 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4))))));
                }
                for (unsigned char i_3 = 4; i_3 < 8; i_3 += 4) /* same iter space */
                {
                    var_13 = ((/* implicit */long long int) min((min((((/* implicit */unsigned short) arr_4 [i_3 - 3] [i_3 - 2] [i_3 - 2] [i_1 + 1])), (var_4))), (((/* implicit */unsigned short) min((arr_4 [i_3 + 2] [i_3 - 3] [i_3 - 4] [i_1 + 2]), (var_2))))));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_0))));
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 3; i_5 < 8; i_5 += 3) 
                    {
                        var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_5 - 2] [i_1 + 1]))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_5] [i_5 - 2] [i_5])) ? (((/* implicit */int) arr_8 [i_5 + 2] [i_5 - 2] [i_5 - 2])) : (((/* implicit */int) arr_8 [i_5] [i_5 + 1] [i_5])))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6])) ? (arr_15 [i_6 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_1])))));
                            var_18 = ((/* implicit */signed char) var_12);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), ((~(((/* implicit */int) arr_19 [i_6 + 1] [i_1] [i_1 + 2] [i_1 - 1] [i_1] [i_1]))))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 + 2] [i_4] [i_6])) ? (arr_14 [i_6 + 1] [i_4] [i_1 + 1] [i_0]) : (arr_14 [i_6 + 1] [i_4] [i_1 + 1] [i_0])));
                        }
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            arr_27 [i_0] [i_9] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_1 + 2] [i_6 + 1] [i_4] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31360))) : (8589934591ULL)));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (unsigned char)245))))) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) var_0)))))));
                        }
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) arr_22 [i_6 + 1] [i_6] [i_6] [i_6])) : (((/* implicit */int) var_0)))))));
                        var_22 = ((/* implicit */int) (-(-2147075437991313484LL)));
                    }
                    var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) var_8))));
                    var_24 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned char)4))))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_23 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 + 2])))))));
                }
                var_26 = ((/* implicit */long long int) max((min((var_11), (((/* implicit */unsigned long long int) arr_12 [(_Bool)1] [i_1] [i_1 + 2])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)12)))))));
                arr_28 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_17 [i_1 + 1] [(unsigned char)9] [i_1 + 2]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned char) arr_26 [i_1] [(unsigned char)2] [(unsigned char)2] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)30)) ? (max((2708600115265835093LL), (((/* implicit */long long int) -275221951)))) : (((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) var_4)))))))) : (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)-9379)) : (-246359375)))) ? (((/* implicit */unsigned long long int) arr_15 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])) : (((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                var_27 = ((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 1] [(_Bool)0]);
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) var_5);
    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (11482842715886807571ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) && (((/* implicit */_Bool) var_12))));
    var_30 = ((/* implicit */short) max((var_1), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 2 */
    for (unsigned char i_10 = 3; i_10 < 13; i_10 += 2) 
    {
        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            {
                var_31 = ((/* implicit */_Bool) arr_34 [i_10 - 3] [i_10 + 2]);
                /* LoopNest 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) max((((var_8) ? (538524509) : (((/* implicit */int) arr_29 [i_10 - 2])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_29 [i_10 - 1])) : (((/* implicit */int) (_Bool)1)))))))));
                                var_33 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_34 [i_10 - 3] [i_10 - 1])) ? ((-(((/* implicit */int) (short)-32743)))) : (((/* implicit */int) arr_37 [i_10] [i_10] [i_10 + 1] [i_11] [i_10 + 2] [i_10 - 3])))));
                                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_32 [i_14])) ? (arr_36 [0] [0] [i_12] [i_12]) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) var_0))))) ? (min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)231)))) : (((/* implicit */unsigned long long int) arr_36 [i_10 - 2] [i_10] [i_10 + 2] [i_10])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
