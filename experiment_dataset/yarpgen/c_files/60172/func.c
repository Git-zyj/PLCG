/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60172
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
    var_11 = ((/* implicit */unsigned long long int) ((var_0) - ((+((-(((/* implicit */int) var_10))))))));
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_7)))))));
    var_13 &= ((/* implicit */unsigned long long int) (+(((max((var_6), (2808753851U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (var_5)))))))));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (short)22313))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((2659969920U) >> (((6062362000644865878ULL) - (6062362000644865859ULL)))))))) < ((+(((((/* implicit */long long int) ((/* implicit */int) var_1))) | (9142543104727026588LL)))))));
                    var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) (short)-22326)) : (((/* implicit */int) arr_3 [i_1 - 1])))) <= ((-(((/* implicit */int) arr_7 [i_2] [i_1] [i_1 - 1] [i_1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */short) (~(arr_2 [i_4 - 1] [i_0])));
                            var_18 &= ((/* implicit */unsigned long long int) (short)-22336);
                            var_19 = ((/* implicit */unsigned short) ((max((6062362000644865878ULL), (arr_1 [i_4 - 1]))) % (min((((/* implicit */unsigned long long int) var_1)), (((arr_16 [i_6] [i_5] [7] [i_0] [i_6]) & (arr_1 [i_3])))))));
                            var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_12 [i_4] [i_3] [i_0] [i_0]))));
                        }
                        for (int i_7 = 3; i_7 < 6; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) (short)22325);
                            var_22 |= ((/* implicit */long long int) (((+(arr_16 [i_7] [i_7 - 1] [i_7 - 3] [i_7 - 3] [i_7 - 2]))) * ((+(arr_16 [i_7] [i_7 + 2] [i_7] [i_7] [i_7 - 2])))));
                        }
                        for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_23 &= ((/* implicit */unsigned long long int) arr_4 [i_5] [i_5] [i_4 + 1]);
                            var_24 = max((((/* implicit */unsigned long long int) (short)22313)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (823344168179282710ULL))));
                            var_25 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_24 [i_4] [i_3] [i_3] [i_5] [i_8] [i_4 - 1] [i_4])), ((-(12384382073064685738ULL)))))));
                        }
                        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) max(((+(var_2))), (((/* implicit */unsigned long long int) (short)22313))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (var_2))))))) ^ ((-(17623399905530268905ULL)))));
                            var_29 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_4 + 1] [i_0] [i_9 - 1])) << (((/* implicit */int) arr_5 [i_4 + 1] [i_0] [i_9 - 1]))))) ^ ((~(4165598330466048924ULL))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            var_30 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 823344168179282725ULL))));
                            var_31 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6062362000644865882ULL))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            var_32 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(arr_29 [i_0] [i_3] [(_Bool)1] [i_4] [i_4 - 1])))), (4839801567162253456ULL)));
                            var_33 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_33 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_11])) - (((/* implicit */int) var_7)))) - (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (2047)))))))));
                            var_34 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_25 [i_4 + 1] [i_0])))) >> (((/* implicit */int) (_Bool)0))));
                            var_35 = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_17 [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1])) : (((/* implicit */int) (short)-22326)))) < ((~(((/* implicit */int) (unsigned short)41732)))));
                        }
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */unsigned short) (((+(((((((/* implicit */int) (short)-22326)) + (2147483647))) << (((((/* implicit */int) (unsigned char)179)) - (179))))))) != ((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
        var_37 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -814278132)) ? (926104477U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22940)))))));
    }
}
