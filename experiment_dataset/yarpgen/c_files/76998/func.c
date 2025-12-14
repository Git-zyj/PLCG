/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76998
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (short)-5003)) ? (97018093) : (((/* implicit */int) var_12))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_5)));
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */int) (short)5012)), (var_11))) : (((/* implicit */int) (short)-26530)))), ((~(min((((/* implicit */int) (short)-4998)), (753197143))))))))));
    var_18 -= ((((/* implicit */_Bool) (~((~(var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4));
    var_19 = ((/* implicit */short) ((int) var_3));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) (+(max((var_5), (((/* implicit */long long int) arr_3 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)5017))) < (arr_7 [9LL] [i_2 + 2] [9] [(signed char)11]))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 1] [i_3] [(_Bool)1])) ? (arr_7 [4ULL] [i_3 - 1] [i_3 - 2] [i_1]) : (arr_7 [i_4] [i_3 + 1] [5] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3023459210024442898LL)))) : (((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 1] [0ULL] [(_Bool)0])) ? (arr_7 [8] [i_3 - 2] [i_1] [12LL]) : (arr_7 [i_3] [i_3 - 1] [(short)6] [(_Bool)1])))));
                                arr_14 [(short)3] [2LL] [i_2] [0ULL] [i_2] [(_Bool)1] [6ULL] = ((/* implicit */signed char) var_11);
                                var_22 = ((/* implicit */short) (+(((((/* implicit */_Bool) 274877382656ULL)) ? (((/* implicit */int) (short)-4999)) : (-753197129)))));
                                var_23 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_1] [(_Bool)0] [i_3] [i_2 + 3] [(signed char)6])) ? (((/* implicit */int) arr_11 [i_0] [(_Bool)1] [i_2] [i_3 + 1] [i_2 + 2] [i_1])) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [1LL] [(short)11] [i_4])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_9 [i_4] [i_3 - 1] [i_2] [(unsigned char)5]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)4), (arr_11 [i_0] [5LL] [4] [i_2] [i_3] [(short)12]))))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [(unsigned char)6] [i_1] [4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-1956))))) : ((-(var_13)))))) ? (((((/* implicit */_Bool) ((long long int) (short)5008))) ? (((/* implicit */int) arr_12 [(_Bool)1] [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_0])))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
                arr_16 [i_0] [(signed char)11] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (arr_6 [i_1] [6LL] [i_0] [i_0]))), ((+(arr_10 [i_0] [i_0] [i_1] [i_1] [i_1])))));
            }
        } 
    } 
}
