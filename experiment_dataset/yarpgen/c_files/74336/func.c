/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74336
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((_Bool) max((var_0), (var_1))))) : (((/* implicit */int) var_8))));
    var_17 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) + (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2]))))), ((+(18064124121796388231ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(9100458527640942044LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (var_2)))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) max(((short)24576), (((/* implicit */short) (signed char)49))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)24576)))))))) ? (max((382619951913163385ULL), (((/* implicit */unsigned long long int) 5893073093892024274LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_14)), (var_11)));
            arr_10 [i_1] [i_2] [i_1] = (_Bool)1;
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            var_20 ^= ((/* implicit */unsigned int) ((unsigned char) var_3));
            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (var_6)));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_5 = 2; i_5 < 17; i_5 += 2) 
            {
                var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24577))) : (2381160950U))))));
                    arr_22 [i_1] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) var_15))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 3; i_7 < 19; i_7 += 2) 
                    {
                        arr_27 [i_5] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((int) ((short) arr_19 [i_7] [i_4] [i_7] [i_7])));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) arr_6 [i_7 - 1])) == ((~(((/* implicit */int) arr_12 [i_7 - 2] [i_1] [i_1])))))))));
                    }
                    arr_28 [i_4] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */signed char) ((unsigned char) var_5));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((_Bool) var_9)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (var_7))))));
                }
                var_27 *= ((/* implicit */unsigned long long int) ((short) (unsigned char)128));
                /* LoopSeq 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    arr_31 [i_4] [i_4] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (-(3724784566302513879LL)));
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((signed char) arr_30 [i_4 - 1] [i_4 - 1])))));
                    arr_32 [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_5] = ((/* implicit */_Bool) arr_9 [i_4] [i_4]);
                }
                for (short i_9 = 1; i_9 < 18; i_9 += 1) 
                {
                    var_29 ^= ((/* implicit */unsigned int) var_13);
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 4; i_10 < 20; i_10 += 1) 
                    {
                        arr_38 [i_4] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) : (382619951913163384ULL)));
                        arr_39 [i_1] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */_Bool) var_13);
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((unsigned short) var_8)))));
                        arr_40 [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_4] [i_4])) ? (arr_36 [i_5] [i_4] [i_5] [i_9] [i_4] [i_4]) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4]))) : (var_5))))));
                        arr_41 [i_1] [i_4] = ((/* implicit */short) ((unsigned char) arr_36 [i_4 - 1] [i_4 - 1] [i_4] [i_9] [i_9 + 2] [i_10 - 3]));
                    }
                    var_31 = ((/* implicit */unsigned int) ((long long int) var_9));
                    arr_42 [i_1] [i_1] [i_4] [i_1] = (~(3098933841U));
                }
            }
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                arr_46 [i_4] [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) arr_9 [i_1] [i_4])))))), (((signed char) -5893073093892024275LL))));
                var_32 = max(((unsigned char)198), (((/* implicit */unsigned char) (_Bool)1)));
                arr_47 [i_4] [i_4] [i_11] [i_4] = ((/* implicit */unsigned int) ((signed char) ((unsigned long long int) -4318254365629640386LL)));
                arr_48 [i_11] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) arr_34 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_1] [i_4]))))));
            }
            var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 6823118868476308661LL)), (0ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 867321939))))) : (((/* implicit */int) var_9)))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_52 [i_12] [i_12] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_1] [i_12] [i_1] [i_12] [i_1] [i_1] [i_12])) ? (((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) var_13))))), (max((var_5), (((/* implicit */unsigned int) arr_50 [i_12] [i_12]))))));
            arr_53 [i_12] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((((/* implicit */int) (short)-3431)) - (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) arr_19 [i_1] [i_12] [i_1] [i_1])) ? (arr_49 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned int) var_13))));
        }
        arr_54 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) 3945591084U))), (min((var_5), (((/* implicit */unsigned int) arr_43 [i_1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1]))));
        arr_55 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~((((_Bool)0) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1]))));
    }
    for (short i_13 = 0; i_13 < 11; i_13 += 1) 
    {
        var_35 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) var_9)), (arr_44 [i_13] [i_13] [i_13]))) == (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_44 [i_13] [i_13] [i_13])))));
        arr_58 [i_13] = ((/* implicit */long long int) (~(var_2)));
        arr_59 [i_13] = ((short) 2089447146);
        arr_60 [i_13] [i_13] = ((/* implicit */short) arr_19 [i_13] [(signed char)6] [i_13] [i_13]);
        arr_61 [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) (+(arr_37 [i_13] [i_13] [i_13]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)24588), (((/* implicit */short) (unsigned char)96)))))) : (((((/* implicit */_Bool) arr_56 [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_0)))));
    }
    for (short i_14 = 0; i_14 < 25; i_14 += 2) 
    {
        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_62 [i_14])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))) : ((+(((/* implicit */int) var_14))))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (var_7)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_14]))) : (var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (arr_62 [i_14])))) ? (((/* implicit */int) arr_63 [i_14])) : ((+(((/* implicit */int) arr_63 [i_14]))))))))))));
        var_37 = (+(((/* implicit */int) (unsigned char)1)));
    }
    var_38 = ((/* implicit */_Bool) ((short) var_6));
    var_39 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (~(var_5))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_7)) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) var_8)))))) : (max((((/* implicit */unsigned int) var_15)), (var_11))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2692265939U)) ? (((/* implicit */int) (short)-22915)) : (((/* implicit */int) (unsigned char)169))))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) var_15)))))));
}
