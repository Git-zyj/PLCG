/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6955
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((short) 0LL));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                            {
                                var_12 |= ((/* implicit */signed char) ((((/* implicit */int) max((arr_6 [i_2 + 2]), (((/* implicit */unsigned short) arr_5 [i_0 + 1] [i_1]))))) >> (((((arr_5 [i_0 + 1] [i_4]) ? (((/* implicit */int) arr_6 [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 + 2])))) - (2767)))));
                                var_13 = ((/* implicit */unsigned long long int) max(((-(max((((/* implicit */long long int) arr_0 [i_0] [i_0 + 1])), (arr_9 [i_0 + 1] [i_2 + 2] [i_2] [i_4]))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_0] [i_2])))))))));
                            }
                            arr_12 [i_1] [i_3] |= ((/* implicit */unsigned char) arr_9 [i_1] [i_1] [i_1] [2LL]);
                            /* LoopSeq 3 */
                            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [14U] |= (unsigned char)245;
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_10 [i_3])) | (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10)))) : ((((-(var_0))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)107))))))))))));
                            }
                            for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                            {
                                arr_19 [i_2] [i_2 - 1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(2305843009213693950ULL))), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-96))))) : (max((((((/* implicit */int) (short)32767)) * (((/* implicit */int) (unsigned char)11)))), ((-(((/* implicit */int) (unsigned char)12))))))));
                                var_15 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)10)) > (((/* implicit */int) var_3))));
                                arr_20 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_0 - 1])) : (((/* implicit */int) (signed char)-13)))), (max((min((((/* implicit */int) (signed char)(-127 - 1))), (arr_17 [i_3] [i_3] [i_3] [(signed char)0] [i_6] [i_0]))), (((/* implicit */int) ((unsigned short) arr_7 [i_1] [i_3] [i_1])))))));
                            }
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                            {
                                arr_23 [i_0] [i_2] [i_2] = (~(((/* implicit */int) var_6)));
                                arr_24 [i_0] [i_1] [i_2 - 1] [i_2] [6ULL] [i_7] = (-(arr_21 [i_7] [i_3] [i_2 + 2] [9] [i_0]));
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2])))));
                                var_17 = ((/* implicit */unsigned char) var_0);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((var_4) / (max((7341850124688911993ULL), (((/* implicit */unsigned long long int) (signed char)64)))))) > (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((var_3), (var_2)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            {
                arr_29 [i_8] [i_8] [i_9] |= (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)174)) | (((/* implicit */int) (signed char)-64))))) ? (max((16140901064495857666ULL), (((/* implicit */unsigned long long int) (signed char)96)))) : (((/* implicit */unsigned long long int) max((3339855231U), (0U)))))));
                var_19 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (min((((/* implicit */unsigned long long int) arr_27 [i_8] [i_8] [i_9])), (2305843009213693963ULL))))) * (((unsigned long long int) 268435455))));
                var_20 = ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) (signed char)-107))))))));
            }
        } 
    } 
}
