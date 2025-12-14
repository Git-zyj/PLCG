/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91448
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) 67108863U);
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_9)) + (arr_1 [i_0])));
        var_13 = ((/* implicit */int) var_4);
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) arr_0 [i_0 + 4]);
            arr_5 [i_0] = ((/* implicit */long long int) (short)-27591);
        }
        for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 4; i_3 < 14; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2])))))) ^ (((((8997762186150793140ULL) / (arr_0 [i_3]))) + (max((8997762186150793138ULL), (((/* implicit */unsigned long long int) (unsigned short)55315)))))))))));
                        arr_15 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [3] = ((/* implicit */unsigned int) var_10);
                        arr_16 [i_0 + 2] [(signed char)10] [(short)14] [i_4] |= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) ((_Bool) -730034656))) < (((/* implicit */int) ((67108887U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3])))))))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 7375285795193339497ULL)) ? (((/* implicit */int) ((short) arr_3 [(_Bool)1] [i_2]))) : (((((/* implicit */_Bool) 9448981887558758475ULL)) ? (arr_4 [1U] [i_2]) : (((/* implicit */int) var_0))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */int) ((arr_1 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40)))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    for (unsigned int i_7 = 2; i_7 < 13; i_7 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(arr_4 [i_2 - 1] [i_6]))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 - 1] [i_0 + 2])) || (((/* implicit */_Bool) arr_22 [i_0] [i_7 + 1] [i_2 - 1] [i_6] [i_7]))));
                        }
                    } 
                } 
                arr_24 [i_0] [i_2 + 1] [(_Bool)1] [(short)14] &= ((/* implicit */unsigned char) ((var_2) / (arr_19 [10LL] [10LL])));
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_27 [(_Bool)1] |= ((/* implicit */int) (~(((min((9448981887558758475ULL), (((/* implicit */unsigned long long int) var_6)))) >> (((/* implicit */int) (signed char)3))))));
                arr_28 [14U] [i_2] [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) ^ (((arr_7 [i_0 + 4] [i_0] [i_8 - 1]) << (((((/* implicit */int) (short)-6082)) + (6108)))))));
            }
            /* vectorizable */
            for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                arr_31 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_0])))) >> (((((((((/* implicit */int) arr_10 [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_11 [i_9] [i_0] [i_0] [(unsigned char)9])) + (12970))) - (2))))) - (2147461137)))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_0])))) >> (((((((((((/* implicit */int) arr_10 [i_0])) + (2147483647))) << (((((((((((/* implicit */int) arr_11 [i_9] [i_0] [i_0] [(unsigned char)9])) + (12970))) - (2))) + (8633))) - (10))))) - (2147461137))) + (632))))));
                arr_32 [i_0] = ((/* implicit */long long int) arr_19 [i_0] [i_0]);
            }
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_3)))))))));
            var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_0] [i_0 + 4] [10U] [i_2]) ? (((/* implicit */int) min((var_8), (arr_10 [2U])))) : (((((/* implicit */int) var_0)) + (((/* implicit */int) arr_12 [(short)0]))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_29 [i_0 - 1] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) 8997762186150793140ULL)) ? (((/* implicit */unsigned int) arr_19 [6ULL] [6ULL])) : (969921096U)))))) : (((arr_26 [2ULL]) & (((/* implicit */long long int) arr_4 [i_0 + 1] [i_2]))))));
        }
        for (short i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            arr_35 [i_0] [i_0] [i_0] = ((/* implicit */short) var_11);
            var_22 = ((/* implicit */int) max(((signed char)-5), ((signed char)40)));
            arr_36 [i_0] = ((/* implicit */int) ((((min((((/* implicit */long long int) var_11)), (arr_26 [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_19 [i_0] [i_10]) >= (((/* implicit */int) arr_14 [i_10] [i_0] [i_0] [i_0 + 2])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_10] [i_10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [(signed char)1] [i_10] [9ULL] [5]))))) : (min((min((((/* implicit */unsigned long long int) var_6)), (9448981887558758475ULL))), (((/* implicit */unsigned long long int) arr_23 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 2] [i_0 + 4]))))));
        }
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_23 [0ULL] [i_0] [(short)10] [(short)10] [i_0] [i_0 + 2]), (((/* implicit */short) var_11))))) ? (min((var_3), (((/* implicit */unsigned long long int) var_5)))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_1)), (2604443529115937293ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))))))));
    }
    var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned char) var_6))), (var_7)));
}
