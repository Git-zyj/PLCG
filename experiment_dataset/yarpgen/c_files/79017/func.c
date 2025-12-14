/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79017
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 4; i_2 < 19; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-3))))) ? (((/* implicit */int) ((4509506847498420310ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) : (((((/* implicit */int) (signed char)29)) % (1634070169))));
                        arr_11 [i_2] [i_2] [i_2] [i_2] [(signed char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9ULL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((16174281166947276453ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))))))));
                        var_12 = (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((11513479921324378903ULL) - (11513479921324378878ULL)))))));
                        arr_12 [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [0LL] [i_1] [i_1 - 1] [i_1 - 1])) != (((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 3]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        arr_16 [i_1] [i_1 - 1] [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((var_5) - (((/* implicit */int) (unsigned short)17221)))) > (((/* implicit */int) (unsigned char)153))))), (((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (1475044450) : (((/* implicit */int) (short)-1)))) ^ ((-(((/* implicit */int) arr_4 [i_2] [i_2] [i_2 - 1] [i_2]))))))));
                        arr_17 [i_4] [i_4] [i_4] [i_4 + 1] = ((/* implicit */short) (_Bool)1);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_13 -= ((/* implicit */_Bool) (short)-27516);
                            var_14 ^= ((/* implicit */short) ((unsigned char) arr_18 [(signed char)3] [i_4]));
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12372404333539373784ULL)) && (((/* implicit */_Bool) (short)-3391)))))) / (18446744073709551612ULL))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_24 [i_4 + 1] [i_4 + 1] [i_4] [(unsigned char)4] [i_4 + 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_0] [5ULL])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_4] [i_4 + 1]))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (unsigned short)25642)))))))));
                            arr_25 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] = ((/* implicit */short) (-(16588356774276110168ULL)));
                        }
                        var_17 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (unsigned char)26))) / (((/* implicit */int) arr_22 [5] [i_1] [(unsigned short)19] [i_1 + 3]))));
                    }
                    var_18 = (-(((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (unsigned short)56086)) : (((((/* implicit */int) (signed char)99)) + (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_8 = 4; i_8 < 20; i_8 += 4) 
                    {
                        arr_30 [5LL] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5958190411904998146ULL)) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-6958), ((short)23021))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)24255))))), (min((4976854708742312212LL), (((/* implicit */long long int) arr_27 [i_8] [i_8] [18ULL]))))))));
                        arr_31 [10] [i_1] [i_1] [i_1 + 3] [i_1] [i_1] |= ((/* implicit */int) arr_9 [(unsigned char)14] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        arr_36 [i_0] [i_0] [(_Bool)1] [i_0] &= ((/* implicit */unsigned long long int) (signed char)37);
                        var_19 = (_Bool)1;
                    }
                    arr_37 [i_7] [i_7] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_23 [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_23 [i_1 + 1] [i_1 + 4])) : (((/* implicit */int) arr_23 [i_1 + 2] [i_1])))));
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 19; i_10 += 2) 
                    {
                        for (short i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((arr_28 [i_0]) == (((/* implicit */unsigned long long int) var_8))))))), (arr_38 [i_0] [i_0] [i_0] [i_0]))))));
                                arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (2161696313640579409LL)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 1; i_13 < 20; i_13 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_35 [i_0])))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1] [i_1])) || (var_1))))));
                        arr_51 [i_12] [i_12 - 2] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (signed char i_14 = 4; i_14 < 19; i_14 += 1) 
                    {
                        arr_54 [i_12] [i_12] [i_12 + 1] = ((/* implicit */_Bool) (~(var_9)));
                        arr_55 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [(signed char)13] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1]))));
                        var_22 += (-(((((/* implicit */int) (short)17838)) % (((/* implicit */int) (short)-15412)))));
                    }
                    arr_56 [i_12] = ((/* implicit */short) (signed char)-73);
                    var_23 = ((/* implicit */unsigned char) arr_42 [i_12] [i_12] [i_12 + 1]);
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-1))));
                }
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)106))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (short)-23643))))) && (((((/* implicit */int) (short)-2934)) != (((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)5))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])), ((unsigned short)44573)))))))));
                arr_57 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 805306368)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) ((-2776615077300559458LL) == (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_7)))) >= (var_8)));
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((var_8) - (((/* implicit */int) var_10)))) | (((/* implicit */int) max(((short)-29065), (((/* implicit */short) (unsigned char)151)))))))) && (var_1))))));
}
