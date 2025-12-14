/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66942
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_5)))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) arr_1 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65534)) << (((14470204279071607857ULL) - (14470204279071607846ULL)))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_7 [i_0] [i_3])) ? (arr_12 [i_0] [i_1]) : (arr_12 [i_0] [i_1]))))))));
                        var_16 = ((/* implicit */int) max((((((((/* implicit */_Bool) var_2)) && (arr_1 [i_0]))) ? (((/* implicit */unsigned int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))))) : (min((arr_7 [i_0] [i_0]), (((/* implicit */unsigned int) var_4)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (unsigned short)12362)))))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2595953222803962282LL)) ? (2595953222803962269LL) : (((/* implicit */long long int) 2113929216))))) && ((!(((/* implicit */_Bool) max((((/* implicit */int) var_11)), (var_6))))))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3])) ? (var_3) : (arr_7 [i_3] [i_1]))) : (((((/* implicit */_Bool) var_3)) ? (arr_12 [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0])))))))) ? (max((((/* implicit */unsigned long long int) min((arr_7 [(unsigned char)2] [i_3]), (arr_7 [i_1] [i_0])))), (((arr_11 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_13 [i_0] [i_1] [i_2] [i_3]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_10), (((/* implicit */int) arr_2 [i_1]))))), (((((/* implicit */long long int) 3799575142U)) / (-2595953222803962270LL))))))));
                    }
                    var_19 = (((+((-(((/* implicit */int) arr_5 [i_0])))))) / ((~(((/* implicit */int) arr_4 [i_2] [i_1] [i_0])))));
                    var_20 = arr_13 [i_0] [i_1] [i_2] [i_2];
                    arr_14 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(var_6)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_7))), (max((var_3), (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */int) var_5)))) != (var_10)))) : (var_6)));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (var_10)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (8234220889824592525LL) : (((/* implicit */long long int) 3799575142U))))))) ? (((/* implicit */unsigned int) max((var_10), (((/* implicit */int) var_13))))) : (var_7)));
}
