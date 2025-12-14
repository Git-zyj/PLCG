/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94816
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
    var_10 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (max((((/* implicit */long long int) (_Bool)1)), (var_0))))) : (((/* implicit */long long int) max((-2147483622), (2147483647))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [(short)11] [(short)11]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    arr_8 [i_2] [8LL] [i_0] [9U] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)-123)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((30143625) < (((/* implicit */int) var_4)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [(signed char)3] [i_4] [(unsigned short)2] [i_4] = ((/* implicit */_Bool) (((_Bool)1) ? (-8923501836857522955LL) : (-8923501836857522953LL)));
                                var_12 = ((/* implicit */long long int) max((var_12), (-9028346122543717699LL)));
                                var_13 = ((/* implicit */long long int) ((-996918121) ^ (((/* implicit */int) (signed char)-119))));
                                var_14 = ((/* implicit */unsigned int) arr_4 [(unsigned char)0] [(unsigned short)3] [(_Bool)1] [11ULL]);
                            }
                        } 
                    } 
                    var_15 -= ((/* implicit */unsigned short) ((9028346122543717695LL) << (((/* implicit */int) (_Bool)0))));
                }
                for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_5] [(_Bool)1] [i_0])) && (((/* implicit */_Bool) 2147483647))))), ((signed char)118)))) ? (max((((/* implicit */long long int) arr_13 [i_0] [i_1] [(_Bool)1] [i_5] [(unsigned short)8])), (min((((/* implicit */long long int) -818175382)), (9028346122543717664LL))))) : (-6540031781363593485LL))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned long long int) (+(9028346122543717699LL)));
                                var_18 = ((/* implicit */short) (-(((int) arr_9 [i_6 + 2] [i_1 - 1] [i_0] [1LL] [3]))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [(_Bool)1] [i_1] [i_6 + 1] [(_Bool)1] [i_7]))))) ? (719687964310671637LL) : ((-(-7948082888453115298LL)))));
                                var_20 = ((/* implicit */int) max((max((9028346122543717661LL), (((/* implicit */long long int) (signed char)(-127 - 1))))), (((/* implicit */long long int) ((int) min((((/* implicit */long long int) (unsigned short)54393)), (-3267247315154350873LL)))))));
                                var_21 = ((/* implicit */long long int) (((~(min((-7948082888453115298LL), (((/* implicit */long long int) (unsigned char)76)))))) != (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_28 [6LL] [0ULL] [i_8] &= ((/* implicit */int) max((min((((/* implicit */long long int) 105579366)), (-9028346122543717686LL))), (((/* implicit */long long int) (signed char)127))));
                                arr_29 [i_0] [i_1] [i_9] [i_8] = max((((/* implicit */long long int) ((_Bool) (_Bool)1))), ((+(9028346122543717695LL))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)57)) << (((-1603083166482327681LL) + (1603083166482327701LL)))));
                }
                arr_30 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)511)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)123))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_12 = 3; i_12 < 16; i_12 += 1) 
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_12 - 3] [i_10] [i_12 - 3])) - (((/* implicit */int) arr_37 [i_12 - 1] [i_10] [i_12 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), ((unsigned short)59887))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_31 [i_10]))))) ? (((/* implicit */unsigned int) -467371877)) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_12] [i_10] [i_10] [i_10]))) - (arr_38 [i_11] [i_10] [i_10] [i_10])))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        arr_41 [i_10] [i_12] [i_10] = ((/* implicit */short) ((int) arr_36 [i_12 - 2] [i_12] [i_10] [i_12 - 3]));
                        var_24 = ((/* implicit */int) ((min((var_2), (((((/* implicit */_Bool) 8923501836857522955LL)) ? (2580967986U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_31 [i_10]), (arr_31 [i_10])))))));
                    }
                }
                var_25 = ((/* implicit */unsigned long long int) ((arr_37 [i_10] [i_10] [i_10]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [(_Bool)1] [6LL]))) : (9028346122543717695LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3693134395552851366LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)119))))) : (((((/* implicit */_Bool) arr_33 [i_10])) ? (9028346122543717699LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) arr_33 [i_10])) ? (((/* implicit */long long int) arr_33 [i_10])) : (-8923501836857522955LL)))));
            }
        } 
    } 
}
