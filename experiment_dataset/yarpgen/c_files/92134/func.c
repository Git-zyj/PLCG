/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92134
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
    var_16 = ((/* implicit */unsigned long long int) 298883808U);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (short)-2713))));
                                var_17 &= ((/* implicit */short) arr_3 [i_1] [i_2] [i_1]);
                                var_18 = ((/* implicit */unsigned char) min((max(((-(((/* implicit */int) var_8)))), (arr_1 [i_1]))), (((/* implicit */int) (short)-13201))));
                            }
                        } 
                    } 
                } 
                arr_14 [(signed char)19] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) 1139141449)), (7634024169060399015ULL))), (((/* implicit */unsigned long long int) var_12))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 4 */
    for (int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_15 [i_5])))), ((~(((/* implicit */int) (short)-11389)))))))));
        arr_17 [12ULL] = ((((((/* implicit */_Bool) -9223372036854775804LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8815133611340672866LL))) % (((/* implicit */long long int) ((/* implicit */int) var_2))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((var_8), (((/* implicit */short) ((-8070873142922389491LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48)))))))))));
    }
    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        var_22 ^= ((/* implicit */int) var_15);
        var_23 ^= ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) ((_Bool) 133678407))) : ((+(((/* implicit */int) (short)2037)))));
        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)-32522)))), (var_12)))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_6] [i_6] [i_6])), (((14001245390803776648ULL) + (arr_5 [i_6] [i_6] [i_6] [i_6]))))) : ((-(var_6)))));
        var_25 ^= ((/* implicit */signed char) arr_19 [i_6]);
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_22 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32767)) ? (1756215937U) : (((/* implicit */unsigned int) 1660052696))));
        var_26 = ((/* implicit */_Bool) -252090783681433852LL);
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) min((-641394707), (((/* implicit */int) (unsigned char)210)))))));
        /* LoopSeq 4 */
        for (signed char i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 14; i_9 += 3) 
            {
                for (long long int i_10 = 3; i_10 < 11; i_10 += 1) 
                {
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (~((~(410011539))))))));
                        arr_30 [i_7 - 1] [(short)2] [i_9 - 2] [i_10] [i_7] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_9)) ^ (((/* implicit */int) (short)18421))))))) || (((/* implicit */_Bool) var_9))));
                    }
                } 
            } 
            arr_31 [i_7] [i_7 - 1] [i_7 - 1] = ((/* implicit */short) (-(((/* implicit */int) (signed char)(-127 - 1)))));
        }
        for (signed char i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) arr_20 [i_7 - 1]);
            var_30 = ((/* implicit */unsigned char) 18446744073709551615ULL);
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_12 = 1; i_12 < 13; i_12 += 4) 
            {
                var_31 = (~(2334935420245934211LL));
                arr_37 [i_7] [i_7] [i_7] [(short)14] = (+((+(((/* implicit */int) arr_11 [2] [2] [i_7 - 1] [i_11] [i_7 - 1] [i_7 - 1] [(unsigned char)19])))));
                var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_7 - 1]))));
            }
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) min((0ULL), (((/* implicit */unsigned long long int) (signed char)-124)))))));
        }
        for (signed char i_13 = 0; i_13 < 15; i_13 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_1 [i_7])), (3815975763780308285ULL))), (((/* implicit */unsigned long long int) 6485377493948003714LL)))))));
            var_35 = ((/* implicit */_Bool) 7666927077410474348LL);
        }
        for (signed char i_14 = 0; i_14 < 15; i_14 += 1) /* same iter space */
        {
            var_36 *= -8169631708713086317LL;
            var_37 = ((/* implicit */unsigned long long int) arr_8 [11] [i_7] [i_14] [i_14] [i_7] [i_7]);
        }
    }
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_38 *= ((/* implicit */long long int) arr_3 [i_15] [i_15 - 1] [i_15]);
        var_39 = ((/* implicit */long long int) (signed char)-72);
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 15; i_16 += 1) 
        {
            for (unsigned char i_17 = 3; i_17 < 13; i_17 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_18 = 2; i_18 < 13; i_18 += 3) 
                    {
                        for (int i_19 = 4; i_19 < 13; i_19 += 3) 
                        {
                            {
                                arr_57 [i_18 - 1] [i_15] [i_15] [i_15] = 4569561325473724800LL;
                                arr_58 [i_15] [i_16] [i_16] [i_16] [i_15] [i_19] [(_Bool)1] = ((/* implicit */short) ((max((-242130519), (arr_56 [i_15] [i_15] [(unsigned char)4] [i_15] [i_15 - 1] [i_15] [i_15]))) >> ((((-(arr_27 [11U] [11U] [i_15 - 1] [11U] [i_15 - 1]))) - (1262618104)))));
                            }
                        } 
                    } 
                    arr_59 [i_15] [i_17] [i_17] = ((/* implicit */long long int) (unsigned char)0);
                    /* LoopNest 2 */
                    for (short i_20 = 1; i_20 < 14; i_20 += 4) 
                    {
                        for (short i_21 = 1; i_21 < 14; i_21 += 1) 
                        {
                            {
                                arr_64 [10] [10] [10] [i_20] [(unsigned char)14] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (12431021566391208355ULL)))) ? (((((/* implicit */_Bool) arr_29 [i_17 - 1] [i_17] [i_15] [i_20 + 1] [i_17])) ? ((-(4986131508161117344ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_21] [i_16] [i_15] [i_16] [i_15]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-50)) ? (3875043205U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)0))))))))));
                                var_40 = ((/* implicit */short) arr_36 [i_20 + 1]);
                                var_41 = ((/* implicit */unsigned long long int) min((var_41), (min((arr_20 [i_15]), (((/* implicit */unsigned long long int) (unsigned char)246))))));
                                var_42 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) arr_9 [i_20 - 1] [i_16] [i_21 - 1])), (min((1890068221706276108ULL), (17232902813789162273ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
