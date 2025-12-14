/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81232
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
    var_12 += ((/* implicit */unsigned int) var_5);
    var_13 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)46)) ? (var_10) : (var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)91))))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_10)) ? (9223372036854775807LL) : (var_11)))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (var_7))))))) ? (((/* implicit */long long int) var_6)) : (var_11)));
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [i_0 - 2] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_1]))) : (arr_0 [i_1])))) ? (((arr_5 [i_0] [i_1] [i_2]) ? (var_2) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (var_10))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [9ULL])) ? (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_2 - 1])), (72057593501057024ULL)))));
                    arr_7 [i_0] [i_0] = ((/* implicit */int) var_3);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_17 *= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3581084876845761432LL)))), (((unsigned long long int) 7888166298773973577LL)))), (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1] [i_0])));
                                arr_13 [(_Bool)0] [i_1] [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4 + 1] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_0] [i_1] [i_3] [i_3]))) : (((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 + 1] [i_0] [i_1] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned short)16] [i_0] [(_Bool)1] [i_0] [i_0]))) : ((((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0] [i_1] [i_0] [i_4 + 2]) : (arr_2 [i_0]))) : (((arr_5 [i_0 - 3] [i_2] [i_2]) ? (arr_4 [i_3] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
