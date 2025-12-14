/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68209
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
    var_10 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
    var_11 = ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_1 + 2])) ? (((15255131881532489203ULL) << (((((/* implicit */int) (unsigned short)54755)) - (54696))))) : (arr_2 [i_1 + 2] [i_1] [i_1 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(unsigned short)13] [i_1] [i_2])) || ((!(((/* implicit */_Bool) (unsigned char)157)))))))) : (((((/* implicit */_Bool) 226614485U)) ? (-377454307968551707LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114)))))));
                    var_13 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) 5934063248335509919LL))), (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)65517)) : (((/* implicit */int) arr_3 [i_0])))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_14 *= min((arr_9 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0] [i_1]), (((/* implicit */unsigned int) (unsigned short)57380)));
                                arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32744)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21187))) : (1143934336U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12587022886009298518ULL)) ? (min((((((/* implicit */_Bool) 6403697006195291375LL)) ? (var_9) : (var_9))), (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */long long int) 2085406395)) : (1492373152309661436LL))))) : (((-1616457716031778712LL) - (((/* implicit */long long int) var_0))))));
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        arr_14 [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)47458)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (short)19585)))), (-558936697)))), (((((/* implicit */_Bool) (signed char)-12)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62055)))))));
        var_16 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -1140578535980977832LL)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) (signed char)-1))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_7] [i_6] [i_7])) << (((((/* implicit */int) arr_18 [i_7] [i_7] [i_7])) - (4277)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)185))))) : (((((/* implicit */_Bool) 1692188896)) ? (((/* implicit */long long int) arr_13 [i_6])) : (((((arr_15 [i_7] [i_7]) + (9223372036854775807LL))) << (((arr_13 [i_6]) - (240446801U)))))))));
                    var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 2573402297U)) ? (9285796313765782394ULL) : (((/* implicit */unsigned long long int) -8826854769258027978LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_7] [(unsigned char)0])) ? (((/* implicit */int) arr_18 [i_7] [i_6] [i_7])) : (((/* implicit */int) arr_18 [i_6] [i_6] [i_6]))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12004))) % (arr_15 [i_7] [i_7])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                for (long long int i_10 = 1; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_19 ^= ((/* implicit */short) (~(-1417676051)));
                        arr_28 [i_5] [i_5] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) (signed char)63)) : ((~(((/* implicit */int) arr_25 [i_5]))))));
                    }
                } 
            } 
        } 
    }
}
