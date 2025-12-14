/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78740
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((unsigned int) (((+(646728340082393133ULL))) ^ (min((var_0), (((/* implicit */unsigned long long int) (unsigned short)41971))))))))));
    var_16 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) (signed char)113)))) : (((/* implicit */int) var_11)))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min(((-(var_0))), (min((((/* implicit */unsigned long long int) (signed char)-113)), (var_0))))))));
    var_18 = ((/* implicit */int) (+(var_13)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_1 [(short)8] [(short)8])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)66)) | (((int) -2147483633))))) : (max((8540918069716602341ULL), (12012504392417086821ULL)))));
                var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 1528734025)) < (16479945327188440075ULL)))), ((~(max((((/* implicit */unsigned long long int) var_2)), (1399811321874481654ULL)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned long long int) arr_12 [(short)6] [(short)6] [i_2] [i_2] [i_3] [i_4]);
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned char)21)) >> (((((/* implicit */int) (signed char)62)) - (59))))))) ? ((((+(((/* implicit */int) (unsigned char)168)))) / (((/* implicit */int) min((arr_2 [i_0]), (var_6)))))) : (max((((/* implicit */int) arr_7 [i_4 - 1])), ((~(((/* implicit */int) arr_0 [i_0] [i_4]))))))));
                                var_22 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [(signed char)6])), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (arr_8 [i_0] [i_0] [i_0]))))) : (max((((/* implicit */unsigned long long int) (unsigned char)242)), (10721949674994524026ULL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
