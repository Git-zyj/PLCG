/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71786
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
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) var_8)) : (3965119202U))), (min((((/* implicit */unsigned int) var_2)), (var_3))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 9223372036854775807LL)))))))) == (var_5))))));
        var_19 = ((/* implicit */int) 9223372036854775807LL);
        var_20 = ((/* implicit */short) ((unsigned char) min((max((((/* implicit */long long int) arr_3 [i_0] [i_0])), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (short)63)))));
        var_21 -= ((/* implicit */long long int) min((((((/* implicit */int) (short)69)) * (((/* implicit */int) ((_Bool) 1913300915U))))), (((int) 2334950599243583228LL))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) 2381666376U)) : (((((/* implicit */_Bool) 2334950599243583222LL)) ? (-9223372036854775793LL) : ((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_1] [i_1])))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) var_15)))))));
        arr_9 [(unsigned short)3] = ((/* implicit */short) min((((/* implicit */unsigned int) var_8)), (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [i_1])) >= (((/* implicit */int) arr_5 [11U] [i_1]))))), (((((/* implicit */_Bool) -9223372036854775803LL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        arr_18 [i_3] = ((/* implicit */short) 1791597584);
                        arr_19 [i_3] [(_Bool)1] [i_3] = ((/* implicit */unsigned int) 1243091509);
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_22 [i_3] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */_Bool) var_6);
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12727)) ? (arr_15 [i_2] [i_5]) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                            var_23 = ((/* implicit */unsigned short) arr_7 [i_2]);
                            arr_23 [i_1] [i_3] [i_3 - 1] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_5 [4] [i_2]))))) / (arr_15 [i_3] [i_3])));
                        }
                        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_3] [i_1])) >= (((/* implicit */int) arr_24 [7] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [2U] [i_3] [i_1]))));
                            var_25 -= (unsigned short)65526;
                        }
                        for (unsigned int i_7 = 2; i_7 < 11; i_7 += 3) 
                        {
                            arr_30 [i_1] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) 1791597565);
                            arr_31 [i_3] [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 9223372036854775793LL))) ? (((/* implicit */int) (short)-81)) : (((/* implicit */int) var_2))));
                            arr_32 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) 8128U);
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            arr_35 [i_1] [i_2] [11U] [i_4] [i_3] [i_8] = ((/* implicit */_Bool) (signed char)-8);
                            var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_1]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2])) + (var_8)))) : (((unsigned int) -1950815510))));
                            arr_36 [i_3] [i_2] [9] [i_4] [i_8] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [i_2] [i_3] [(unsigned short)5] [i_3] [7] [i_1]))) | ((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        }
                        var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1028710742)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3362))) : (2381666359U))) + (((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) >> (((arr_10 [i_1] [i_2]) + (4286212653528685155LL))))))));
                        /* LoopSeq 2 */
                        for (short i_9 = 2; i_9 < 9; i_9 += 1) 
                        {
                            arr_39 [i_1] [i_1] [i_1] [i_1] [i_3] = 2718892813063687343LL;
                            var_28 += ((/* implicit */signed char) (((~(1643294802U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)-12717))))));
                            arr_40 [i_3] [i_3] [i_2] [i_2] [(_Bool)1] = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_45 [(short)8] [i_4] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */short) arr_5 [i_4] [7]);
                            var_29 = (short)-76;
                            var_30 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_15)) ? (2381666349U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85)))));
                            arr_46 [i_1] [i_1] [i_2] [1] [i_4] [i_4] [i_3] = ((/* implicit */int) ((_Bool) ((arr_24 [i_1] [1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (-4969317292314373193LL) : (((/* implicit */long long int) var_16)))));
                        }
                    }
                } 
            } 
            arr_47 [i_1] [2LL] [i_2] &= ((/* implicit */short) arr_12 [i_1] [i_2]);
        }
        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            arr_50 [4U] &= ((((/* implicit */int) arr_42 [i_1] [i_1] [i_1] [i_11] [i_1] [8ULL] [i_11])) + (((/* implicit */int) (short)-16474)));
            var_31 = ((/* implicit */_Bool) ((unsigned int) (~(var_16))));
            arr_51 [i_1] [i_1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775805LL)) ? (min((var_12), (((/* implicit */unsigned int) (short)-12743)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)68)) < (((/* implicit */int) arr_5 [i_1] [i_1]))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_29 [i_1] [i_11] [i_11]) > (((/* implicit */long long int) ((/* implicit */int) var_14)))))) >> (((((((/* implicit */_Bool) (unsigned short)22757)) ? (((/* implicit */int) (short)16474)) : (var_8))) - (16457)))))) : (var_12)));
            var_32 = ((/* implicit */unsigned long long int) arr_14 [i_1] [i_11] [i_11] [i_11]);
        }
    }
    for (short i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        var_33 = ((/* implicit */_Bool) ((long long int) ((((((((/* implicit */_Bool) var_16)) ? (-9223372036854775807LL) : (((/* implicit */long long int) 3602597262U)))) + (9223372036854775807LL))) << (((((int) 2827143241U)) + (1467824099))))));
        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (short)67))));
        arr_55 [i_12] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 12782515640631052457ULL)) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_53 [i_12])))) : (-1))));
        arr_56 [(short)14] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (max((((/* implicit */unsigned long long int) arr_54 [(_Bool)1])), (5664228433078499157ULL))) : (12782515640631052449ULL))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1467824057U)) ? (9223372036854775807LL) : (-9223372036854775776LL)))) < (((unsigned long long int) var_6)))))));
    }
}
