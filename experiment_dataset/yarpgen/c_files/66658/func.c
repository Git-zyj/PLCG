/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66658
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
    var_12 = ((/* implicit */unsigned char) ((-571504017) != (var_2)));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) ? (((int) (signed char)90)) : (((/* implicit */int) ((unsigned char) var_7)))))) ? (((var_3) ^ (min((0U), (((/* implicit */unsigned int) var_9)))))) : (((/* implicit */unsigned int) ((int) (unsigned char)228)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_14 = (((~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || ((_Bool)1)))))) > ((~(18))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_1] [i_1] = var_1;
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                var_15 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_2]);
                arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned char) (unsigned char)20));
            }
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                arr_12 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -696676696)) ? (((/* implicit */int) var_9)) : ((~(2024150006)))));
                arr_13 [i_1] [(unsigned char)8] = ((/* implicit */unsigned int) ((((var_2) + (2147483647))) << ((((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_3])))) - (10)))));
                var_16 = ((/* implicit */short) (unsigned char)194);
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)3)))))));
            }
            var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) 814757860)), (var_8)));
            var_19 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) ((unsigned short) var_7))))), (((((((/* implicit */int) arr_4 [(_Bool)1] [(unsigned short)10])) / (arr_3 [i_1] [i_0] [i_0]))) / (((/* implicit */int) min((arr_2 [i_1] [i_0] [i_0]), (((/* implicit */unsigned short) arr_11 [7ULL] [(signed char)1] [(signed char)4])))))))));
            var_20 = (~((+(((/* implicit */int) (unsigned char)63)))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4])) ? (arr_5 [i_0]) : (arr_5 [i_4])))), (min((var_6), (((/* implicit */unsigned int) arr_1 [(unsigned short)3]))))));
            arr_18 [i_4] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) var_0)), ((((!(((/* implicit */_Bool) (unsigned char)206)))) ? (((/* implicit */int) ((unsigned char) var_6))) : (min((arr_0 [i_0] [i_4]), (var_1)))))));
        }
    }
    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) -16);
        arr_21 [i_5] = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_20 [i_5])) ? (1902877022) : (var_10))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_19 [i_5])))) && (((/* implicit */_Bool) arr_20 [i_5]))))));
        var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (min((((((/* implicit */_Bool) var_4)) ? (arr_19 [(signed char)9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5]))))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), (arr_20 [i_5]))))))));
        var_23 = ((/* implicit */unsigned long long int) var_11);
        arr_22 [1] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(unsigned char)5])) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) arr_20 [i_5]))))))) ? (((arr_19 [i_5]) | (arr_19 [4ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))));
    }
    var_24 = var_5;
    /* LoopSeq 1 */
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */int) (unsigned char)28)) ^ (-1756214675)))));
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 4; i_7 < 22; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                for (int i_9 = 3; i_9 < 23; i_9 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_10 = 4; i_10 < 22; i_10 += 3) 
                        {
                            arr_36 [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_7 - 3] [i_8 - 1] [i_9 - 3] [i_10 - 2]))));
                            arr_37 [i_6] [i_6] [i_8] [i_10] [(unsigned short)9] = ((/* implicit */int) (!(((/* implicit */_Bool) 757650754U))));
                        }
                        arr_38 [i_6] [i_6] [i_7] [i_6] [i_8] [i_9] &= ((/* implicit */unsigned int) arr_33 [i_6] [i_9 - 1]);
                    }
                } 
            } 
        } 
        arr_39 [i_6] [i_6] = ((/* implicit */int) ((min((arr_33 [i_6] [(signed char)7]), (arr_33 [i_6] [i_6]))) < (((((/* implicit */_Bool) arr_33 [i_6] [i_6])) ? (arr_33 [i_6] [i_6]) : (arr_33 [i_6] [i_6])))));
    }
}
