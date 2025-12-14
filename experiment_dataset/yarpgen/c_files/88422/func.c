/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88422
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_15 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) (((+(((/* implicit */int) var_0)))) / (((((/* implicit */int) arr_2 [(signed char)2])) * (((/* implicit */int) arr_2 [i_0 - 1]))))))) / (arr_0 [i_0])));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((((/* implicit */_Bool) 4LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))) : (var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [3ULL])) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [2] [i_0])))) * (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) arr_1 [i_0] [i_0])))))) : (arr_0 [i_0]))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)108)) >> (((6069678838305466338ULL) - (6069678838305466326ULL)))))) % (5801637416749710464ULL)));
        var_18 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) / (arr_0 [i_1])));
        var_19 ^= ((/* implicit */signed char) arr_5 [i_1] [i_1]);
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) ^ (var_8))) < (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (_Bool)1)))))));
        var_22 ^= ((/* implicit */unsigned short) var_12);
        var_23 *= ((/* implicit */unsigned long long int) (-(arr_9 [i_2])));
        var_24 ^= (_Bool)1;
    }
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_4 [i_3] [i_3]) : (5LL))) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 - 2]))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                {
                    var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_5]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_3])) && (((/* implicit */_Bool) (unsigned char)243)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3]))) : (arr_15 [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-31)) > (((/* implicit */int) var_4)))))))))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (var_13)));
                    }
                    var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (short)-30249)) : (((/* implicit */int) (unsigned char)5))));
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_4 - 1] [3LL] [3LL])) ? (arr_0 [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)43)))))) ? (arr_21 [i_4] [i_4] [i_4 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))))))));
                }
            } 
        } 
    }
}
