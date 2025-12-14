/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78801
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned short) (_Bool)1)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_0 [i_0 + 1])))) ? (((long long int) max((var_13), (((/* implicit */unsigned long long int) 18U))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0 + 2]))))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min(((-((-(262143))))), (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) > (8008548571035016963ULL)))))))))));
        var_18 = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))));
        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_5 [i_1] = (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [7] [i_1])) ? (((/* implicit */int) arr_3 [12LL] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1])))) < (((/* implicit */int) (!(((/* implicit */_Bool) 105468852944851149LL)))))))));
        var_20 = ((long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (-178782488)));
    }
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (unsigned int i_5 = 2; i_5 < 7; i_5 += 4) 
                {
                    {
                        var_21 &= ((/* implicit */int) min((((/* implicit */long long int) arr_12 [i_5 + 3] [i_3] [i_3] [i_5])), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2] [i_2]))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_9 [i_5] [i_3])))) : ((-9223372036854775807LL - 1LL))))));
                        arr_14 [i_2] [(unsigned char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)91)) || (((/* implicit */_Bool) var_5))))) * (((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_10 [0U]))))))))) : (((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */long long int) var_5)) : (((long long int) arr_4 [(signed char)15] [i_2]))))));
                        arr_15 [i_2] [i_3] [i_4] [4U] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_11 [i_5] [i_5 - 2] [i_2] [i_2]) < (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))));
                        arr_16 [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4]))) | (-105468852944851150LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) 3208314142U)) ? (105468852944851161LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned char)0] [i_3] [i_4]))))))) > (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_2] [i_5 + 2] [7U] [i_5])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_21 [i_2] [i_6] [i_7] [i_7] [i_7] [i_8])) ? (arr_11 [i_8] [(signed char)1] [i_6] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) > (((/* implicit */int) ((((/* implicit */int) arr_13 [i_2] [i_6] [i_7] [i_2])) != (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_2])) || (((/* implicit */_Bool) var_15))))))))));
                        arr_23 [i_2] [i_2] [i_7] [i_8] [(_Bool)1] [i_2] = ((/* implicit */short) (_Bool)1);
                        arr_24 [i_2] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_2]))));
                        arr_25 [i_7] [(_Bool)1] = ((/* implicit */long long int) ((_Bool) (-(1025234625U))));
                    }
                    arr_26 [(unsigned char)5] [i_7] [i_6] [1ULL] = ((/* implicit */unsigned long long int) ((_Bool) ((((var_9) < (((/* implicit */unsigned long long int) var_8)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_2] [i_2] [(_Bool)1] [i_7]))))) : ((+(var_15))))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) (signed char)16);
        arr_27 [i_2] = ((/* implicit */unsigned short) arr_6 [i_2]);
    }
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        var_24 = ((/* implicit */int) min(((((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9]))))), (-105468852944851150LL)));
        arr_31 [i_9] = ((unsigned int) 3221225472U);
    }
    var_25 = ((/* implicit */unsigned int) var_14);
}
