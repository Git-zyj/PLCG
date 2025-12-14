/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69247
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
    var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_11) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) 776295478)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) -1685160112)))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((var_11), (var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    arr_9 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (min((var_7), (((/* implicit */long long int) arr_14 [5LL] [i_2] [i_2] [i_1] [9ULL]))))));
                                arr_17 [i_1] [i_3] [i_0] [i_1] = (+(((((((/* implicit */long long int) 48607101)) & (arr_1 [i_4]))) | (((/* implicit */long long int) var_3)))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_9)), (min((max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [(unsigned char)10] [i_1] [i_1] [i_1] [i_1])), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 135107988821114880LL)) ? (-1424803062) : (((/* implicit */int) var_5)))))))));
                    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_0))))) : ((+(((/* implicit */int) (_Bool)1))))));
                }
                var_16 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)21417)) < (48607101))), ((((+(var_7))) > (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_2)))))))));
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 11; i_5 += 2) 
                {
                    for (short i_6 = 4; i_6 < 10; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) var_5)), (arr_3 [(_Bool)1] [(_Bool)1]))))))));
                            var_18 -= ((/* implicit */long long int) arr_23 [(short)3] [i_1] [i_1 - 1] [i_1 - 1]);
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned char) var_6))))) < (((/* implicit */int) var_0)))))) | (((arr_1 [i_1 + 1]) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)124)) && (((/* implicit */_Bool) (unsigned short)0)))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        var_20 = ((/* implicit */_Bool) arr_26 [i_7] [i_7]);
        var_21 = (((-(arr_27 [i_7] [i_7]))) >= (((/* implicit */long long int) var_3)));
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                for (short i_10 = 1; i_10 < 16; i_10 += 1) 
                {
                    {
                        arr_35 [i_7] [i_7] [i_7] [i_10] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned char) arr_29 [i_7])))))) > (arr_26 [i_7] [i_8])));
                        var_22 = ((/* implicit */unsigned long long int) arr_34 [i_10] [i_7] [i_10] [i_10]);
                        arr_36 [i_10] = ((/* implicit */short) arr_26 [i_7] [(unsigned short)13]);
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (var_4))))));
}
