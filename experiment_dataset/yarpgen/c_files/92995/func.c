/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92995
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
    var_13 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) (short)-22155)))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)35))))), (((unsigned short) arr_1 [i_0])))))));
        var_15 -= ((/* implicit */unsigned int) ((signed char) min(((short)-1), (((/* implicit */short) arr_2 [i_0])))));
        var_16 -= ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned char) arr_2 [i_0])), (var_8))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (min((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2] [i_3])), (arr_10 [(_Bool)1] [22] [(unsigned char)16] [i_0]))))))));
                        arr_11 [i_0] [i_2] [i_2] [i_2] = ((unsigned int) min((((int) 5ULL)), (((/* implicit */int) (_Bool)0))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) var_4);
            arr_16 [i_4] = ((/* implicit */signed char) 103114405U);
            var_19 = ((/* implicit */unsigned int) ((long long int) var_9));
            var_20 -= ((unsigned int) arr_2 [i_0]);
            var_21 -= ((/* implicit */short) (+(((var_10) & (var_10)))));
        }
    }
    /* vectorizable */
    for (unsigned char i_5 = 2; i_5 < 19; i_5 += 1) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_5 + 1] [i_5] [i_5])))))));
        var_23 = ((/* implicit */signed char) max((var_23), (((signed char) ((((/* implicit */_Bool) arr_2 [i_5])) ? (var_4) : (-410289287))))));
        /* LoopSeq 1 */
        for (short i_6 = 3; i_6 < 20; i_6 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) ((_Bool) (unsigned char)202));
            arr_23 [i_5 + 1] [i_6] = ((((/* implicit */_Bool) arr_21 [i_5 + 2])) ? (arr_4 [i_5 + 1] [i_5 + 1] [i_6 - 2]) : (arr_4 [i_5 - 2] [i_5 - 2] [i_6 + 1]));
            var_25 *= ((/* implicit */signed char) ((unsigned int) var_8));
        }
    }
    for (short i_7 = 3; i_7 < 18; i_7 += 3) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned char) var_6);
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) var_2))) : (((int) arr_8 [i_7 - 1] [i_7 - 3] [i_7 - 1] [i_7 - 3]))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (~(581656632U))))));
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                    {
                        arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] &= ((/* implicit */int) ((unsigned int) var_4));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 4; i_12 < 16; i_12 += 4) 
                        {
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((unsigned long long int) var_3)))));
                            var_29 = ((/* implicit */long long int) ((unsigned int) var_9));
                        }
                        arr_42 [(unsigned short)13] [i_9] [i_9] [i_9] [13U] = ((/* implicit */short) ((unsigned long long int) var_0));
                    }
                    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */signed char) arr_8 [i_8] [i_8] [7] [i_8]);
                        arr_46 [i_8] = ((/* implicit */unsigned long long int) ((unsigned int) var_5));
                        arr_47 [i_8] [i_8] = ((/* implicit */unsigned long long int) var_2);
                        arr_48 [i_8] [i_9] [i_10] [i_13] = ((/* implicit */long long int) (!(arr_13 [i_8] [i_8] [i_10])));
                        arr_49 [i_13] = ((((/* implicit */long long int) ((int) 18446744073709551613ULL))) >= (arr_40 [i_8] [i_9] [i_10] [i_13] [i_13]));
                    }
                    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */_Bool) max((var_31), (((var_10) == (arr_17 [i_8] [i_8])))));
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (!(arr_22 [i_8] [6U] [i_8]))))));
                        var_33 = ((/* implicit */int) ((((((/* implicit */_Bool) 4095U)) || (((/* implicit */_Bool) 410289287)))) && (((/* implicit */_Bool) arr_35 [i_9] [i_14]))));
                        var_34 = var_3;
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 3) 
                        {
                            var_35 = ((/* implicit */signed char) max((var_35), (((signed char) arr_24 [i_16]))));
                            arr_57 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                            var_36 -= ((/* implicit */signed char) ((short) var_4));
                            var_37 = ((/* implicit */short) ((unsigned char) arr_35 [i_8] [i_10]));
                        }
                        var_38 *= ((/* implicit */unsigned long long int) ((unsigned int) arr_28 [1] [i_15]));
                        arr_58 [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) 18446744073709551614ULL);
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_62 [(short)15] [(short)15] [i_10] [i_17] [i_17] = ((/* implicit */long long int) -410289287);
                        arr_63 [i_17] [i_10] [i_9] [(_Bool)1] = ((/* implicit */signed char) (~(var_10)));
                    }
                }
            } 
        } 
    }
    var_39 = ((/* implicit */short) max((var_0), (max((4116U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 105553116266496ULL)) && (((/* implicit */_Bool) -655089462)))))))));
    var_40 = ((/* implicit */_Bool) min((max((((/* implicit */int) ((_Bool) var_0))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (var_4))))), (((/* implicit */int) var_5))));
    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((-1536226378), (((/* implicit */int) var_1))))) ^ (((var_10) * (((/* implicit */unsigned long long int) -1723800437))))))))))));
}
