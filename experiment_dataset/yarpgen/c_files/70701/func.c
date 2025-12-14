/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70701
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) >> (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)51939)) : (((/* implicit */int) var_8)))) - (51925))))))));
        var_12 ^= ((/* implicit */short) ((min((((/* implicit */long long int) (+(((/* implicit */int) (short)32767))))), (arr_1 [i_0 + 2]))) + (arr_0 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_13 -= ((/* implicit */unsigned int) arr_3 [i_1]);
        arr_5 [i_1] = ((/* implicit */unsigned int) (+(max(((+(((/* implicit */int) var_8)))), ((-(((/* implicit */int) arr_3 [i_1]))))))));
        var_14 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5623)) ? (-1470028212712081719LL) : (3876347315072783348LL)))));
        var_15 = ((/* implicit */short) arr_3 [i_1]);
        /* LoopSeq 3 */
        for (int i_2 = 3; i_2 < 22; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                var_16 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_2))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_4))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) arr_3 [i_1])), ((short)32767)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1])))) : (arr_11 [i_1] [i_2] [i_5] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) % (((/* implicit */int) ((short) var_5))))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-828157077) - (((/* implicit */int) (short)-32746))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-32747)), ((unsigned short)18056)))) ? (((var_7) - (arr_13 [i_1] [i_2] [i_3] [i_4] [i_1]))) : ((-(var_7)))))) : ((-(((((/* implicit */_Bool) arr_8 [i_2])) ? (var_1) : (((/* implicit */long long int) arr_13 [i_1] [i_1] [i_3] [i_1] [i_5]))))))));
                            var_19 = ((/* implicit */unsigned short) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47479)))));
                            arr_15 [i_5] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_11 [i_1] [i_2] [i_4] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((((/* implicit */unsigned long long int) var_9)), (arr_11 [i_4] [i_2] [i_2] [i_2])))))) ? (max((var_3), (((/* implicit */unsigned long long int) arr_12 [i_2] [i_2 - 3] [i_2 - 3] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) var_9)))) == (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_5])) + (((/* implicit */int) var_10)))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) arr_6 [i_2]);
            }
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 841955303976585024LL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((arr_10 [i_2] [i_2] [i_2] [i_1]) ? (var_11) : (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1] [i_2] [i_1])))))), (((((/* implicit */_Bool) ((unsigned char) arr_8 [i_1]))) ? (((/* implicit */unsigned long long int) var_1)) : (max((((/* implicit */unsigned long long int) var_5)), (arr_8 [i_2]))))))))));
            arr_16 [i_1] = ((/* implicit */_Bool) arr_7 [i_1] [i_1]);
        }
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((((var_0) + (((/* implicit */long long int) arr_19 [20LL])))) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)13835))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_6] [i_6] [i_1] [i_1])) ? (((var_6) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)100)))) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_6] [i_6] [i_1]))));
            var_24 = ((/* implicit */unsigned long long int) ((arr_19 [i_6]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)2442)))));
            var_25 = ((/* implicit */long long int) ((arr_8 [i_1]) << (((((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_6]))))) ? (((((/* implicit */_Bool) var_11)) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_6] [i_1]))))) : (((((/* implicit */_Bool) arr_17 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_3))))) - (15893248540003372988ULL)))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            var_26 ^= ((/* implicit */unsigned short) arr_9 [i_7]);
            arr_25 [i_1] [i_7] = ((/* implicit */int) var_3);
            var_27 = arr_17 [i_7];
        }
    }
    for (unsigned char i_8 = 1; i_8 < 7; i_8 += 2) 
    {
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (min((arr_20 [i_8 + 4]), (arr_20 [i_8 + 1]))) : ((~(arr_20 [i_8 + 1])))));
        /* LoopNest 2 */
        for (unsigned int i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                {
                    var_29 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_19 [(unsigned short)22])) * (arr_11 [i_8] [i_9] [i_10] [i_10])))) ? (((var_3) + (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)37969)))))))));
                    var_30 -= ((/* implicit */unsigned int) (+(var_1)));
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) var_9))))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) > (((unsigned int) var_4)))))))))));
}
