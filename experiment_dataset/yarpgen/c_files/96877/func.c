/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96877
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_1]))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 4294967280U);
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */short) var_1);
                            var_13 = ((/* implicit */unsigned long long int) ((min((((6U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) (!(var_7)))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))) > (((long long int) var_0))))))));
                            /* LoopSeq 3 */
                            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                            {
                                var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [i_3])) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [2] [i_1] [2])))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (arr_11 [i_0] [i_0] [i_1] [i_4])))));
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_0 [i_1] [i_4]))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_4])) & (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) var_10)), (var_4)))))))));
                                var_17 -= ((/* implicit */short) arr_17 [i_1] [i_3] [i_3] [i_4] [i_6] [i_4]);
                                var_18 = ((/* implicit */_Bool) arr_21 [i_1]);
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_19 = ((/* implicit */unsigned short) min(((~(max((arr_23 [i_0] [i_0] [i_3] [i_4] [i_0] [i_4] [i_1]), (((/* implicit */int) var_7)))))), (((/* implicit */int) var_9))));
                                arr_25 [i_0] [i_3] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_1] [i_4]))));
                            }
                        }
                    } 
                } 
                arr_26 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_10)) == (((var_5) >> (((4294967295U) - (4294967288U))))))))) | (((((/* implicit */_Bool) (short)32755)) ? (((var_10) ? (4294967280U) : (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
    {
        arr_30 [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max(((((_Bool)0) && (((/* implicit */_Bool) var_5)))), (((_Bool) var_7)))))) / (arr_17 [i_8] [(unsigned short)16] [i_8] [i_8] [i_8] [(unsigned char)8])));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) : ((+(arr_22 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            for (int i_10 = 1; i_10 < 14; i_10 += 2) 
            {
                for (unsigned int i_11 = 1; i_11 < 15; i_11 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((~(((unsigned long long int) arr_21 [(signed char)8])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (arr_14 [i_8] [i_8] [i_10] [i_8]))))))))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_5 [i_9] [i_10])))), ((((!(((/* implicit */_Bool) var_9)))) && ((((_Bool)1) && (((/* implicit */_Bool) arr_0 [i_8] [i_9])))))))))));
                    }
                } 
            } 
        } 
        var_23 += ((/* implicit */signed char) (unsigned char)212);
    }
    for (signed char i_12 = 0; i_12 < 17; i_12 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(((long long int) ((signed char) -1352376695))))))));
        var_25 = ((/* implicit */int) var_2);
        arr_41 [i_12] = ((/* implicit */unsigned long long int) ((var_8) & (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_12])))))));
        arr_42 [i_12] = ((/* implicit */unsigned short) arr_10 [0] [0]);
    }
    var_26 ^= ((/* implicit */long long int) ((min(((_Bool)1), (var_3))) ? ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (var_2)))))) : (((/* implicit */int) ((((((/* implicit */int) var_4)) - (((/* implicit */int) var_3)))) > (((/* implicit */int) (!(var_3)))))))));
}
