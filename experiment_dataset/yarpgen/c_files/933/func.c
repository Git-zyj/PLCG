/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/933
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_11)))) != (((((/* implicit */_Bool) (short)15231)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13367))) : (8926096948469620436LL)))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13353)) ? (var_5) : (((/* implicit */unsigned long long int) -8926096948469620436LL))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)21))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_4 [(short)3] [i_1] [9]))) ? (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */int) var_9))))) : (((arr_4 [i_0 + 1] [i_0 - 4] [i_0 - 1]) & (var_5)))));
                var_15 &= ((/* implicit */signed char) arr_5 [i_0 - 2] [i_1 + 1]);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((long long int) ((_Bool) var_2))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned short) var_0))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                arr_12 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_2] [i_3])) : (var_0)))))) ? (((((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [4ULL] [i_3]))) : (arr_9 [i_2] [i_2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)13352), ((short)-13352)))))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)13367)) | (((/* implicit */int) (signed char)-28))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [i_2] [i_2]))))) : (((((/* implicit */_Bool) ((short) var_8))) ? (((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) var_1)))))))))));
                /* LoopSeq 3 */
                for (short i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */signed char) var_0);
                                arr_23 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(_Bool)1] [6ULL] [i_2]))) : (((arr_1 [i_3] [i_6]) ? (var_11) : (((/* implicit */unsigned long long int) ((long long int) 1608882991)))))));
                            }
                        } 
                    } 
                    arr_24 [i_3] [i_4] |= ((/* implicit */signed char) arr_18 [i_2] [i_3] [(unsigned char)10] [i_3]);
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2] [(unsigned char)8])) ? (((((/* implicit */int) arr_20 [i_7] [i_7])) ^ (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_7 [9]))))))) : ((~(((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) var_8))))))));
                        arr_28 [i_2] [i_3] [i_4] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned int) var_9)), (arr_10 [i_2])));
                    }
                    arr_29 [i_2] [i_2] [9ULL] = ((/* implicit */signed char) ((((_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_11 [i_2] [i_3] [i_4]))))) : (((((/* implicit */_Bool) arr_5 [i_2] [21])) ? (((/* implicit */long long int) (+(arr_18 [(unsigned short)1] [i_3] [i_2] [i_2])))) : (((-3157622426463351225LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190)))))))));
                    var_20 = ((/* implicit */_Bool) var_9);
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) ((11271209385009295263ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13367)))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 4; i_9 < 9; i_9 += 2) 
                    {
                        var_22 = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_17 [i_2])) ? (arr_18 [i_9] [i_9] [i_9] [(signed char)3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (arr_15 [i_2] [i_2] [i_2] [i_9] [i_3] [i_9 + 1]));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (var_0)))) ? (((/* implicit */int) ((9298886310786198618ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15)))))) : (((/* implicit */int) var_9))));
                        arr_34 [i_9] [i_8] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (119361340952890168ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9 + 1] [i_9 - 3] [i_9] [i_9 + 3])))));
                    }
                    arr_35 [i_2] [i_3] [i_8] = ((/* implicit */_Bool) var_1);
                }
                for (short i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) var_8);
                    var_25 = ((/* implicit */unsigned short) var_7);
                }
                var_26 = ((/* implicit */int) (~(var_1)));
            }
        } 
    } 
}
