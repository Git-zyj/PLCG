/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77919
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (signed char)-68)), (var_10))), (((/* implicit */long long int) ((unsigned short) var_0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)-24927)))))) && (((/* implicit */_Bool) (short)5215))))) : (((int) (!(((/* implicit */_Bool) var_4)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_16 ^= ((/* implicit */long long int) arr_9 [i_4] [i_2] [i_2] [i_3] [i_4 - 4] [i_1]);
                                var_17 = max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((unsigned long long int) 13287162248309536724ULL)) : (max((((/* implicit */unsigned long long int) (unsigned short)7121)), (var_0))))), (((/* implicit */unsigned long long int) ((long long int) 2147483647))));
                                arr_12 [i_1] [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned short) var_8);
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) arr_7 [i_3])) ? (var_2) : (9223372036854775807LL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_5] [i_1] [i_7] [i_1] [i_0] = ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_5])))) ? (min((min((var_4), (arr_5 [i_6] [i_7]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)255))))))) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_5] [i_1] [i_7])));
                                var_18 += ((/* implicit */_Bool) ((long long int) arr_2 [i_0]));
                                var_19 = arr_11 [i_0] [i_1] [i_5] [i_1] [i_7] [i_7];
                            }
                        } 
                    } 
                } 
                var_20 *= ((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_1] [i_0]);
                arr_21 [i_1] [i_0] = ((((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) (signed char)-40)) / (-1405922343)))))) ? (((int) var_10)) : (((/* implicit */int) arr_2 [i_0])));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((signed char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_1])) ? (var_10) : (arr_8 [i_0] [i_0] [i_1] [i_1])))) ? (max((-2001251826183739738LL), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((17107578607726753363ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_4 [i_0] [i_1] [i_1]))))))))));
            }
        } 
    } 
    var_22 -= ((/* implicit */signed char) var_8);
}
