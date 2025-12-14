/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63689
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
    var_12 = ((((/* implicit */unsigned long long int) 35184372088320LL)) + (6510253640903810378ULL));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) 35184372088320LL)) ? (arr_0 [i_0 + 2]) : (2854815529U)))), (max((((/* implicit */long long int) arr_0 [i_2])), (-7622137002707649203LL)))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))))), (max((((/* implicit */unsigned int) arr_1 [i_0 + 2] [i_1])), ((+(1327234255U)))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)7))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (long long int i_4 = 4; i_4 < 9; i_4 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (var_9)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_4] [i_3]))))) : (((((/* implicit */_Bool) (unsigned char)15)) ? (-35184372088306LL) : (((/* implicit */long long int) arr_10 [i_0 + 3] [i_3]))))))));
                    arr_14 [i_0] [i_3] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_13 [i_0] [i_4 + 1] [i_0]))))) : (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */int) var_11))))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(arr_10 [i_0] [i_0]))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)79)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)73)), ((unsigned short)7646)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1]))) : (1327234255U))) : (((/* implicit */unsigned int) (-(var_8))))));
                    arr_15 [i_4] [i_3] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((arr_7 [i_0] [i_3] [i_4]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_3])))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (9136112690000646026LL) : (5459716877835562883LL))))))));
                }
            } 
        } 
    }
    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) 
    {
        var_16 = ((int) max((-5459716877835562884LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */int) (unsigned short)9)))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5 + 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9))) : (arr_16 [i_5])))) ? ((+(arr_17 [i_5] [i_5]))) : (var_8))))))));
        arr_19 [i_5 + 1] |= 35184372088320LL;
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    {
                        arr_27 [i_5] [i_5 - 1] [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (arr_16 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (min((1065353216), (var_8))) : ((~(((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16)) + (arr_22 [i_5] [i_6])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5] [i_6])) ? (var_9) : (((/* implicit */int) (unsigned char)74))))) : (arr_24 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_8])))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_28 [i_8] [i_6] [i_5] = ((/* implicit */int) ((((-5459716877835562865LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))))) >= (((/* implicit */long long int) min(((-(var_2))), (((/* implicit */unsigned int) max((var_1), (((/* implicit */int) var_11))))))))));
                    }
                } 
            } 
        } 
    }
}
