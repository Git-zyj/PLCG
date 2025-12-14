/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8524
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
    var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (1) : (max((var_11), (((/* implicit */int) (short)0))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_3 [(signed char)10] [14] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_2 [5U] [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_18))))));
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)18))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-111)))))));
        arr_4 [i_0] = ((/* implicit */signed char) var_3);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) var_2);
        var_23 = var_4;
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_2 = 3; i_2 < 7; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 4; i_3 < 9; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    var_24 ^= ((/* implicit */unsigned char) ((arr_7 [i_1 - 1]) - (arr_7 [i_1 - 1])));
                    arr_17 [i_1] [i_3] [i_3] [i_4] &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_8 [i_1] [i_3])) ? (((/* implicit */int) (short)18)) : (((/* implicit */int) (unsigned short)38936))))));
                    arr_18 [i_1 - 1] [i_2] [6LL] [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (unsigned char)255)))) <= (((/* implicit */int) var_16))));
                    arr_19 [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967295U));
                }
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) var_4);
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (-993637695) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 26ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [(_Bool)1] [i_2 + 3]))) : (arr_10 [i_6] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)43))))))));
                    }
                    arr_25 [3ULL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_10))));
                }
                var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2 - 3] [i_2]))));
                arr_26 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_1] [i_1]));
            }
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1 - 1] [i_2 - 3] [i_2 - 2] [i_1] [i_2 - 2])))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_29 [i_1] [i_1] = ((/* implicit */long long int) ((signed char) var_6));
            var_29 = ((/* implicit */_Bool) var_7);
            /* LoopNest 3 */
            for (unsigned int i_8 = 3; i_8 < 8; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 3; i_9 < 8; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 2; i_10 < 8; i_10 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_30 [(unsigned short)6] [2LL] [3U] [2LL]), (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) : (arr_16 [i_10] [i_1] [i_1] [i_1]))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned char)189), (((/* implicit */unsigned char) (_Bool)0))))))))));
                            var_31 &= ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) var_18))))), (var_1)));
                            arr_37 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (max((((/* implicit */long long int) arr_32 [i_1] [i_9] [i_10 + 2] [i_10 - 1] [i_10] [i_10])), (max((((/* implicit */long long int) var_18)), (8155087903052424483LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            arr_41 [i_1] [i_1] = ((/* implicit */long long int) ((signed char) (((_Bool)1) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)41)))));
            arr_42 [i_1] [i_1] = ((/* implicit */_Bool) var_3);
            arr_43 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned int) var_10))))) ? (max((((/* implicit */long long int) var_8)), (arr_8 [i_1] [i_1]))) : (((/* implicit */long long int) max((arr_16 [4] [i_11] [i_1] [i_11]), (((/* implicit */unsigned int) (unsigned char)67)))))))) ? ((((((_Bool)1) && (((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) var_19)) ? (6829676068738928985ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)6), (var_2))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 409823033)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-30)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (0ULL)))));
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_32 [i_11] [i_11] [i_11] [(signed char)5] [(_Bool)1] [i_1 - 1])), (0LL))))));
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_36 [i_1] [i_1] [i_1] [(unsigned short)8] [(_Bool)1]))))))));
        }
    }
}
