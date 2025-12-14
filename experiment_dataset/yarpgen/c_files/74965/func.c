/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74965
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
    var_14 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))));
        var_16 = ((/* implicit */long long int) (signed char)-42);
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) var_10)))))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_18 &= ((/* implicit */short) (-((~((~(((/* implicit */int) (unsigned short)18046))))))));
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(419980547033502842LL))), (((/* implicit */long long int) arr_0 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (1322767400U))) : (((/* implicit */unsigned int) -1))));
    }
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned char) max((((/* implicit */int) var_4)), (((((((/* implicit */int) arr_3 [i_2 - 1])) + (2147483647))) << (((((((/* implicit */int) (signed char)-38)) + (51))) - (13)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_3])) ? (((/* implicit */int) (short)24781)) : (((/* implicit */int) arr_0 [i_2 - 1] [i_2]))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 0ULL)) ? (14998921918229113632ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))))));
            arr_9 [i_2] [i_3] = arr_0 [i_2] [i_3];
        }
        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (arr_6 [i_2 - 1]) : (var_8)))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_4])) == (((((/* implicit */_Bool) arr_12 [i_2] [i_4])) ? (((/* implicit */int) (unsigned short)40229)) : (((/* implicit */int) (signed char)0))))))) : (((int) ((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [17] [22LL]))) : ((-9223372036854775807LL - 1LL)))))));
            var_23 += ((((((/* implicit */_Bool) min((arr_12 [i_2] [i_4]), (((/* implicit */unsigned char) arr_11 [i_2] [7LL]))))) ? (((((/* implicit */_Bool) 15455035045187664110ULL)) ? (-1525327035) : (((/* implicit */int) (signed char)-30)))) : (((/* implicit */int) ((arr_6 [i_4]) == (((/* implicit */int) arr_0 [i_2] [i_4]))))))) * (((((((/* implicit */int) arr_3 [i_2 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_2 - 1])) + (20382))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    {
                        arr_20 [i_6] = ((/* implicit */long long int) ((short) (!(((((/* implicit */_Bool) arr_1 [i_6])) || (((/* implicit */_Bool) var_3)))))));
                        var_24 -= ((((/* implicit */int) arr_11 [i_2 - 1] [i_4])) << ((((+(((-4625586355118157229LL) - (((/* implicit */long long int) ((/* implicit */int) var_1))))))) + (4625586355118157367LL))));
                    }
                } 
            } 
            arr_21 [i_4] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) arr_5 [i_4] [i_2 + 1]))), (((((/* implicit */_Bool) (unsigned short)62025)) ? (((/* implicit */int) (unsigned char)0)) : (-2096601648)))));
        }
        var_25 ^= ((/* implicit */unsigned long long int) min((6175617445588107578LL), (((/* implicit */long long int) -992113245))));
    }
    var_26 = ((/* implicit */unsigned short) max((var_26), ((unsigned short)65520)));
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_9)))) ? (max((((/* implicit */int) (_Bool)1)), (var_9))) : (min((((/* implicit */int) (short)512)), (((((/* implicit */_Bool) (unsigned short)448)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))))));
}
