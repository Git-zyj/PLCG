/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63721
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [2] = ((/* implicit */unsigned char) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned char)115))))))));
        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((arr_0 [i_0]) ? (((/* implicit */int) var_4)) : (var_6))))));
        var_11 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)3338))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */short) ((((/* implicit */int) (short)-3339)) - (((/* implicit */int) ((unsigned char) var_8)))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_6)) % (var_8)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) : (var_7)));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (((~(var_7))) | (((/* implicit */long long int) (~(((/* implicit */int) var_4))))))))));
        var_15 = ((/* implicit */short) ((unsigned long long int) 2648165357U));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) (unsigned short)55955)))), (((((/* implicit */_Bool) (short)-3367)) || (((/* implicit */_Bool) (unsigned char)224))))))), (var_0)));
        var_16 = ((unsigned int) max((arr_8 [i_3]), (arr_8 [i_3])));
        var_17 = ((/* implicit */unsigned int) min((var_17), ((~(2648165357U)))));
        arr_13 [4] = ((/* implicit */unsigned short) min((((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (var_0))))), ((-(((/* implicit */int) arr_0 [i_3]))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((signed char) var_2)))));
            var_19 = ((/* implicit */long long int) (+(min((arr_10 [(_Bool)1] [i_3]), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) (short)-3350))))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            for (int i_7 = 3; i_7 < 10; i_7 += 4) 
            {
                {
                    var_20 = max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_10 [(unsigned short)4] [i_6 - 1])), (var_0)))), ((~(6304199023894718489LL))));
                    arr_24 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 6304199023894718489LL)))))), (min((6304199023894718473LL), (((/* implicit */long long int) arr_5 [i_6 + 1]))))));
                    var_21 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) && (((((/* implicit */_Bool) (unsigned char)255)) || ((_Bool)1))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 3; i_8 < 9; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) max(((((+(var_7))) - (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)73), (((/* implicit */unsigned char) (_Bool)0)))))))), (((/* implicit */long long int) arr_28 [i_5] [i_6] [i_7] [i_8 + 3] [i_8] [i_9 - 1]))));
                            arr_31 [i_7] [i_7] [i_7] [i_7] [i_5] = ((/* implicit */int) max((((long long int) max((arr_30 [i_6]), (((/* implicit */int) var_4))))), (((var_7) / (((/* implicit */long long int) var_3))))));
                        }
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_0))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        for (long long int i_11 = 3; i_11 < 11; i_11 += 4) 
                        {
                            {
                                arr_38 [8ULL] [i_6] [i_7] [i_10] [i_7] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_7] [i_11] [i_11 + 1] [i_7])) + (((/* implicit */int) (unsigned short)25644))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_9)))) ? (max((var_7), (((/* implicit */long long int) 3757176001U)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 2648165343U))))))));
                                var_24 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (unsigned short)15)))));
                                arr_39 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) % (min((((/* implicit */long long int) ((unsigned char) var_3))), (max((((/* implicit */long long int) var_8)), (var_7)))))));
                                arr_40 [i_5] [i_7] [i_7] [i_10] [i_11] = ((/* implicit */unsigned int) (((-((~(((/* implicit */int) var_4)))))) + (((int) (short)10074))));
                                arr_41 [i_5] [i_6] [i_7] [i_10] [i_7] [(unsigned char)1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_7 + 1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_5] [i_6] [i_10] [i_11])) << (((((var_3) + (749436966))) - (14)))))) : (max((((/* implicit */long long int) var_4)), (2810597221862580312LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (_Bool)1))));
}
