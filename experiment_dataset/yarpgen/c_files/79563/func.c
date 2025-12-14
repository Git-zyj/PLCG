/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79563
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
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_1 - 1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) max(((~(828811055663951363ULL))), (((/* implicit */unsigned long long int) ((unsigned short) var_9)))));
                            arr_8 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)96)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */int) var_16)))))))), (min((var_10), (((int) var_2))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_3))));
                            /* LoopSeq 3 */
                            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                            {
                                arr_15 [i_0] [i_1] [i_1] |= ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0] [i_4]) & (((/* implicit */unsigned int) var_12))))) | (((((/* implicit */_Bool) var_9)) ? (3315042790776881667ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))), (max((((/* implicit */unsigned long long int) var_8)), ((~(var_11)))))));
                                arr_16 [i_0 - 3] [i_5] [i_0 - 3] [i_5] [i_0 - 3] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [i_5] [i_5 - 1] [i_5] [i_0])) + (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_5] [i_4] [i_4] [i_5 - 2] [i_6])) : (var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4 - 1] [i_4 + 1])) ? (arr_10 [i_4 - 1] [i_4 - 2] [i_4 - 2]) : (arr_10 [i_4] [i_4 - 1] [i_4 + 1]))))));
                            }
                            /* vectorizable */
                            for (short i_7 = 0; i_7 < 19; i_7 += 4) 
                            {
                                var_20 += ((unsigned long long int) (unsigned char)54);
                                arr_19 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7] [i_7] [i_7]))) - (arr_13 [i_5] [i_1] [i_4 - 2] [i_1] [i_5])));
                            }
                            for (short i_8 = 1; i_8 < 15; i_8 += 3) 
                            {
                                var_21 = ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 3] [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1 + 4])) : (var_1)));
                                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -2))));
                                arr_22 [i_0] [i_1] [i_0] [i_4] [i_5] [i_8 + 1] = ((/* implicit */short) ((((max(((-2147483647 - 1)), (((/* implicit */int) var_4)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_4] [i_5]))))))) ? (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_9 [i_1 + 3] [i_4 + 1] [i_1 + 3]))))))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 2147483647)) ? (15131701282932669949ULL) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83)))))));
                            }
                            arr_23 [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))))), (((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) | (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                            var_23 += ((/* implicit */unsigned short) ((_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))), (((/* implicit */unsigned long long int) arr_20 [i_4] [i_4] [i_0 - 3] [i_0] [i_5 - 3] [i_4 + 1] [i_4])))));
                        }
                    } 
                } 
                arr_24 [i_1] [i_1] [i_1 + 3] = ((/* implicit */unsigned char) arr_2 [i_0] [i_1]);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_12))));
    var_25 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1540918156)), (var_0))))))), ((~(min((((/* implicit */unsigned int) var_6)), (var_14)))))));
    /* LoopSeq 2 */
    for (short i_9 = 3; i_9 < 13; i_9 += 1) /* same iter space */
    {
        var_26 = var_11;
        var_27 &= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_13), (((/* implicit */short) var_4)))))))) ? (((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_12 [i_9 - 3] [(unsigned short)16] [i_9] [i_9] [i_9] [i_9 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) (~(var_1)))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_9]))))))))));
    }
    /* vectorizable */
    for (short i_10 = 3; i_10 < 13; i_10 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (arr_4 [i_10 - 1] [i_10] [i_10 - 2])))) ? (((((/* implicit */int) var_7)) ^ (arr_4 [i_10] [i_10] [i_10 + 1]))) : (((/* implicit */int) arr_7 [i_10 + 2] [i_10 - 3] [i_10 + 1])))))));
        var_29 = ((/* implicit */int) (signed char)82);
        var_30 += ((/* implicit */short) (+(((/* implicit */int) var_16))));
    }
}
