/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55540
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
    var_10 = ((/* implicit */unsigned long long int) (~(-5617861620077492500LL)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_11 = var_3;
        var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (short i_2 = 4; i_2 < 21; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_5 [i_2 - 3] [i_2] [i_2 + 4])), (((((/* implicit */int) var_4)) % (((/* implicit */int) arr_9 [i_1]))))))));
                        var_14 = ((/* implicit */long long int) max((min((((/* implicit */signed char) var_5)), (arr_5 [i_2 + 1] [i_2 + 1] [17ULL]))), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) var_6))) == (arr_11 [i_2 + 3]))))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)229)))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_3])) : (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (_Bool)0)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_16 += ((/* implicit */_Bool) ((unsigned int) var_4));
                            var_17 *= ((/* implicit */unsigned int) var_0);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((long long int) arr_13 [i_3] [i_3]))) : (arr_11 [i_3])));
                        }
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (((((/* implicit */int) ((unsigned char) arr_14 [i_1] [i_1] [i_3] [i_4] [i_3]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                            var_20 = ((/* implicit */int) ((signed char) var_3));
                            var_21 -= ((/* implicit */long long int) var_8);
                        }
                        var_22 = ((/* implicit */int) arr_14 [i_4] [i_4] [i_3] [i_3] [i_3]);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) ((long long int) ((min((((/* implicit */long long int) var_1)), (var_0))) == (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
        var_24 |= ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((unsigned int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))), (((unsigned char) ((((/* implicit */unsigned long long int) 4094146968701521913LL)) != (1782372738463799680ULL))))));
        var_25 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_1)), (min((min((((/* implicit */unsigned long long int) var_6)), (arr_7 [i_1]))), (min((((/* implicit */unsigned long long int) var_6)), (arr_7 [i_1])))))));
        var_26 ^= ((/* implicit */short) ((((_Bool) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_1] [i_1] [(unsigned char)5] [i_1] [i_1])) > (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
    }
    for (unsigned short i_7 = 3; i_7 < 22; i_7 += 2) 
    {
        var_27 = ((/* implicit */short) arr_18 [(signed char)9] [i_7]);
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((((/* implicit */int) var_3)) - (var_6))), (((/* implicit */int) arr_20 [i_7]))))) % (((long long int) var_6))));
        var_29 = ((/* implicit */signed char) ((int) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_7] [i_7 - 2] [i_7])) >= (var_6)))) | (((/* implicit */int) var_5)))));
        /* LoopSeq 1 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            var_30 = ((/* implicit */long long int) min((((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_7] [i_7])), (((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) arr_3 [i_8 - 1] [13U])))) : (((((/* implicit */_Bool) arr_21 [i_7 - 3] [i_8])) ? (((/* implicit */int) arr_21 [i_7] [i_7])) : (((/* implicit */int) var_2))))))));
            var_31 = (-(((arr_3 [i_7 - 2] [i_7 - 2]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_8 - 1] [i_7 - 2])))));
        }
        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_8))))))))));
    }
}
