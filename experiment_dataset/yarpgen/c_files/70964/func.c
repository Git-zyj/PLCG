/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70964
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
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)9412))))) ? ((~(var_11))) : ((-(-8496486307700346161LL)))))) ? ((~(((((/* implicit */_Bool) (unsigned short)65524)) ? (var_7) : (var_7))))) : (min((((/* implicit */unsigned long long int) ((((-556790059) + (2147483647))) << (((((/* implicit */int) (signed char)84)) - (84)))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_17)) : (var_7))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) max((((((min((-556790072), (arr_1 [i_0]))) + (2147483647))) >> ((((-(((/* implicit */int) (unsigned short)30097)))) + (30124))))), (((arr_1 [i_0]) | ((~(-556790053)))))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        var_19 += (-(((/* implicit */int) ((4406264807362016681ULL) > (((/* implicit */unsigned long long int) (~(arr_1 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) 4368346542470718139ULL)) ? (137371844608ULL) : (arr_4 [i_1 - 1] [i_1]));
        var_21 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65525))))), (min((((/* implicit */unsigned long long int) var_2)), (arr_4 [i_1] [i_1])))))));
        arr_6 [i_1] = ((/* implicit */int) max((max((18446744073709551608ULL), (3311325145776581672ULL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) 2)) : (-6990498084253544628LL)))) ? (((((/* implicit */_Bool) (unsigned short)18601)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18596))))) : (arr_4 [i_1 - 1] [i_1])))));
    }
    /* vectorizable */
    for (signed char i_2 = 4; i_2 < 18; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_11 [i_2] [i_2] = arr_5 [i_3];
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_22 = ((/* implicit */long long int) ((signed char) (unsigned short)48537));
                arr_14 [i_2] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (arr_5 [i_2 - 3]) : (arr_5 [i_2 - 2])));
            }
            for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    arr_22 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((((/* implicit */_Bool) arr_15 [i_6])) ? (((/* implicit */int) arr_7 [i_5] [i_6])) : (((/* implicit */int) (unsigned short)33107)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46936))) < (17924916719213433465ULL))))));
                    arr_23 [i_2] = ((/* implicit */short) var_9);
                    var_23 = ((/* implicit */_Bool) var_11);
                }
                for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    arr_26 [i_2] [i_2] [2ULL] [i_2] [16] [i_2] = ((/* implicit */signed char) 9223372036854775804LL);
                    var_24 = (i_2 % 2 == zero) ? (((/* implicit */signed char) ((3446297159950976170ULL) >> (((arr_8 [i_2]) - (1590940959)))))) : (((/* implicit */signed char) ((3446297159950976170ULL) >> (((((arr_8 [i_2]) + (1590940959))) - (724965386))))));
                    var_25 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_2 - 3] [i_5] [i_5])))))));
                }
                var_26 = ((arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_2]) ? (arr_4 [i_2] [i_2 + 1]) : (((/* implicit */unsigned long long int) -8266114327539339064LL)));
                arr_27 [i_2] [i_2] [i_3] [i_5] = ((((/* implicit */_Bool) arr_15 [i_2])) ? (arr_1 [i_5]) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)48509)) : (1222994943))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                arr_30 [i_2] [i_3] [i_2] [i_8] = ((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL)));
                arr_31 [i_2] = ((/* implicit */long long int) 393818019);
            }
            arr_32 [i_2] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_3])) ? (arr_24 [i_2] [i_3] [i_2] [(unsigned short)16] [i_2]) : (((/* implicit */unsigned long long int) arr_1 [i_2]))))) ? (((unsigned long long int) (signed char)-79)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 17924916719213433476ULL)) || (((/* implicit */_Bool) arr_7 [i_3] [i_2 + 1]))))))));
        }
        arr_33 [i_2] [i_2] = ((/* implicit */unsigned short) arr_19 [i_2] [i_2]);
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)5965))));
                arr_40 [i_2] [i_9] [i_2] = ((((/* implicit */_Bool) arr_28 [i_10] [i_2] [(signed char)0] [i_2 - 4])) ? (521827354496118143ULL) : (var_6));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (var_16)))) ? ((-(arr_46 [i_12] [i_11] [i_10] [i_9] [i_2]))) : (((arr_0 [i_11]) << (((2453388766947062393LL) - (2453388766947062348LL)))))))));
                            arr_47 [(signed char)7] [i_2] [i_10] [i_11] [i_12] = ((/* implicit */signed char) (+(-1)));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18388))) : (arr_15 [i_2 - 3])));
                            arr_48 [i_2] [i_2] [i_2] [i_11] [i_2] = (-(arr_42 [i_2] [i_12] [i_2] [i_2 - 1] [i_2 + 1]));
                        }
                    } 
                } 
                arr_49 [i_2] [i_9] [i_9] = ((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_8 [i_2]) : (arr_8 [i_2]));
                arr_50 [i_2] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2] [i_10] [i_2])))) ? (((/* implicit */int) (unsigned short)51289)) : ((~(-1)))));
            }
            for (short i_13 = 0; i_13 < 19; i_13 += 2) 
            {
                var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)65))) < (((long long int) var_14))));
                arr_54 [i_2] [i_9] [i_2] [i_2] = ((/* implicit */short) ((-8578862340121890668LL) % (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-71)))))));
            }
            arr_55 [i_2] [i_2] = ((/* implicit */long long int) (signed char)74);
        }
    }
}
