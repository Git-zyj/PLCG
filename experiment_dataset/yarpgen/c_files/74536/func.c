/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74536
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */int) (unsigned char)169)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max(((signed char)-81), ((signed char)-90)))) : (((/* implicit */int) var_11))))));
                                var_19 += ((/* implicit */long long int) (~((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)64)))) << ((((~(((/* implicit */int) (_Bool)1)))) + (22)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((min((8128), (((/* implicit */int) arr_3 [i_0])))) - (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (arr_13 [(signed char)16] [i_1] [i_2] [(_Bool)1] [i_1] [20]) : (1023LL)))))));
                }
                /* LoopSeq 3 */
                for (signed char i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (((_Bool)1) ? ((-((~(var_14))))) : (min((-1023LL), (((/* implicit */long long int) ((((/* implicit */long long int) var_10)) == (arr_2 [(_Bool)1]))))))));
                                var_22 = ((/* implicit */_Bool) ((signed char) min((((/* implicit */long long int) var_12)), (-9223372036854775798LL))));
                                var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))) >= (-1016LL)))) : (((/* implicit */int) var_2))));
                                var_24 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)120))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) ((((((long long int) -4814724406764416805LL)) + ((((_Bool)1) ? (130048LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) == ((+(((((/* implicit */_Bool) (signed char)-64)) ? (216172782113783808LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139)))))))));
                    var_26 &= min(((((-(4294967295U))) - (4U))), (((/* implicit */unsigned int) min(((signed char)-89), ((signed char)15)))));
                }
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_0] [i_0] [4LL] [i_8]))))) || (((/* implicit */_Bool) ((arr_12 [i_0] [i_1] [i_0] [(signed char)21]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_0] [(short)17] [i_8] [i_8])))))));
                    arr_24 [(signed char)11] [i_1] [14ULL] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 2; i_10 < 21; i_10 += 2) 
                        {
                            {
                                arr_31 [13U] [i_9] [i_8] [i_0] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((unsigned char)138), (((/* implicit */unsigned char) arr_0 [i_10 - 2] [i_10 + 2])))))));
                                arr_32 [13LL] [i_9] [(_Bool)1] [(short)16] [7LL] [7LL] [12LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)192))))) ? ((((((~(((/* implicit */int) var_5)))) + (2147483647))) << (((((/* implicit */int) var_1)) - (93))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)37)))))));
                                var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_16))))) ? (((/* implicit */int) ((var_14) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) max(((unsigned char)27), (((/* implicit */unsigned char) (_Bool)1))))) >= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                    arr_33 [(_Bool)1] [(_Bool)1] [i_8] = -2694061621818375970LL;
                }
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    arr_36 [i_0] [(unsigned char)1] [(_Bool)1] = ((/* implicit */unsigned char) (signed char)66);
                    var_29 = max((((((/* implicit */long long int) ((((/* implicit */_Bool) -6262393395937267360LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)12))))) / (3739120854230368814LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)28)) ? (((unsigned int) -1013LL)) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((1531989240) - (1531989236))))))))));
                }
            }
        } 
    } 
    var_30 = ((unsigned char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (signed char)66)))))));
    var_31 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) ((unsigned char) var_2))) / ((-(var_10))))));
}
