/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6282
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))) : (arr_3 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))) : (arr_4 [(_Bool)1] [8U]))) : (arr_4 [i_1] [i_0])))) ? (((((arr_3 [i_0] [(unsigned short)4]) ^ (arr_2 [i_0]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(short)1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_1]))) : (arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [2ULL]))))), (((((/* implicit */long long int) arr_6 [(unsigned short)22] [i_1] [i_1])) - (arr_4 [i_0] [(_Bool)1]))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [17LL] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_2])) ? (((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_3] [i_1] [i_0]))))) ? (((arr_6 [7ULL] [i_1 - 3] [7ULL]) | (((/* implicit */int) arr_10 [i_1] [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))) : (((/* implicit */int) min(((signed char)-85), ((signed char)7))))));
                            var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_1])), (((unsigned long long int) arr_3 [8ULL] [i_2 - 3]))))) ? (((((unsigned long long int) arr_0 [i_1])) - (((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 - 1] [i_0])) - (arr_3 [(_Bool)0] [i_1]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) arr_6 [i_1] [i_2] [(short)12])))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0] [i_2] [i_2])))))))))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [10U])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-85)) < (((/* implicit */int) (unsigned char)135)))))) : (((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))) : (536870911U)))));
                var_13 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_7 [i_1 + 4] [i_0]))))))) * (arr_8 [i_0] [i_0] [i_1] [6ULL])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 2; i_4 < 20; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 20; i_6 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_14 [2LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6]))))) * (arr_15 [i_4 - 1])))) ? (((/* implicit */int) arr_7 [i_4] [i_4])) : ((+(((/* implicit */int) ((unsigned char) arr_17 [i_4])))))));
                    var_15 -= ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((int) arr_18 [i_4]))) | (min((arr_2 [i_4]), (arr_11 [i_4] [i_4] [i_4] [i_4]))))), (((/* implicit */unsigned long long int) ((((arr_8 [i_6] [i_5] [i_4] [i_4 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5]))))) ? (((/* implicit */int) ((arr_2 [i_6]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4 + 1] [i_5] [(short)19])))))) : (((/* implicit */int) ((_Bool) arr_18 [5]))))))));
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) var_9)))))) ^ ((-(((/* implicit */int) var_1)))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_9)) | (var_4)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_4)))))))))));
    var_18 = ((/* implicit */unsigned long long int) var_9);
}
