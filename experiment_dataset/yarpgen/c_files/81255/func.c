/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81255
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
    var_15 = ((/* implicit */unsigned long long int) min((max((max((-4751138016222723497LL), (-3026968665603866012LL))), (min((274877906943LL), (((/* implicit */long long int) (short)32767)))))), (((/* implicit */long long int) min((min((-937592185), (2013265920))), (((/* implicit */int) min(((short)32767), ((short)32767)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        var_16 -= -1;
        var_17 ^= ((/* implicit */long long int) 266306290);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_18 = ((/* implicit */int) (short)-32744);
            arr_5 [i_0 - 2] = ((/* implicit */_Bool) (unsigned char)160);
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (_Bool)0))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned long long int) 361558269U);
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)155)))), (min((var_7), (var_7)))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_2])), (1449837385)))), (min((((/* implicit */unsigned long long int) arr_0 [i_2])), (228486040279749720ULL)))))));
        var_21 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned char) arr_2 [i_2] [i_2]))))), (min((arr_3 [i_2]), (((/* implicit */unsigned long long int) (unsigned char)255)))))), (max((min((arr_1 [i_2]), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) arr_8 [i_2])))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (short)32750)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) max((arr_0 [i_3]), ((short)-9265))))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-1232392674)))), (min((var_2), (((/* implicit */unsigned long long int) 2374989946U)))))))))));
        arr_12 [i_3] [i_3] = ((/* implicit */int) min((min((((/* implicit */long long int) min((var_0), (((/* implicit */int) arr_7 [8LL] [8LL]))))), (min((((/* implicit */long long int) var_8)), ((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) max((((/* implicit */int) max(((short)32764), ((short)-32759)))), (-2080166737))))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                arr_18 [7ULL] [i_4] [i_3] = ((/* implicit */_Bool) (short)-32767);
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    arr_21 [i_3] [i_4] [i_5] = ((/* implicit */_Bool) (unsigned char)146);
                    arr_22 [i_3] [i_4] [i_5] [i_6] = (unsigned char)146;
                }
            }
            arr_23 [i_4] [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */short) min(((unsigned char)120), (((/* implicit */unsigned char) arr_7 [(unsigned char)0] [(unsigned char)0]))))), (min(((short)32743), ((short)(-32767 - 1))))))), (min((((/* implicit */long long int) (unsigned char)154)), (7393376221077678616LL)))));
            arr_24 [i_4] = max((max((((/* implicit */unsigned long long int) min((2305843009213693951LL), (((/* implicit */long long int) 432254651))))), (max((arr_3 [i_3]), (((/* implicit */unsigned long long int) 432254655)))))), (((/* implicit */unsigned long long int) max((min((var_11), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) min((arr_11 [i_4]), (var_8))))))));
        }
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) max((min((min((((/* implicit */unsigned long long int) 753726654)), (var_2))), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_4 [i_3])), (var_8)))))), (((/* implicit */unsigned long long int) max((min((arr_15 [i_3] [i_7] [i_8] [i_9]), (((/* implicit */unsigned int) (short)32761)))), (((/* implicit */unsigned int) max((arr_0 [i_3]), ((short)(-32767 - 1))))))))));
                        arr_36 [i_3] [2LL] [i_3] [i_8] [i_9] [2LL] = ((/* implicit */_Bool) min((((/* implicit */long long int) max((min((var_7), (747547967U))), (((/* implicit */unsigned int) max((((/* implicit */int) (short)-19567)), (var_5))))))), (max((((/* implicit */long long int) min(((short)32736), (arr_33 [i_3] [i_7] [i_8])))), (min((((/* implicit */long long int) var_6)), (8113031654467000165LL)))))));
                        arr_37 [i_3] [i_7] |= min((max((max((var_11), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)3)), (3392493600U)))))), (min((min((var_11), (((/* implicit */long long int) arr_29 [i_3] [i_7] [i_9])))), (((/* implicit */long long int) min((arr_13 [i_3] [i_9] [i_3]), (((/* implicit */int) arr_11 [i_8]))))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) max((var_9), (var_9)))), (max((var_2), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) min((min((3932160U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) min((var_0), (var_9)))))))));
}
