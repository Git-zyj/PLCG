/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55111
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
    var_13 += ((/* implicit */_Bool) -5142484587618479281LL);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0 + 2] [i_1] [i_0 + 2] [i_2 - 1] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -5142484587618479284LL)) ? (var_9) : (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_7))))) ? (-5142484587618479281LL) : (max((((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))) : (-174370420020362489LL))), (((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)95))) : (-16LL))))));
                                arr_16 [i_4 - 3] [(unsigned short)0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)30954)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (short)-1))));
                            }
                        } 
                    } 
                    var_14 = max((max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30942)) || (((/* implicit */_Bool) 8011681741790512551LL))))), (1642772862))), (((/* implicit */int) (unsigned short)50482)));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (1642772849) : (var_5)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) ^ (var_1)))));
                        arr_19 [(_Bool)1] [i_1 - 2] [i_2 - 1] [(signed char)10] = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0 + 3] [i_1 - 1] [i_1 - 1] [i_2 - 1])) % (((/* implicit */int) var_6))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        arr_22 [i_0] = ((/* implicit */signed char) 8011681741790512551LL);
                        var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : ((~(var_9)))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_17 ^= ((/* implicit */unsigned short) (signed char)126);
                            arr_29 [i_0] [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_7] [i_2 + 1] = ((((/* implicit */_Bool) (signed char)-32)) ? (1854988020) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
                            var_18 += min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) (unsigned char)154)) : (-1642772849)))), (min((4824304044127440455LL), (((/* implicit */long long int) var_0)))));
                            var_19 -= ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) min((var_12), ((signed char)63)))) : (-1300823541));
                        }
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (unsigned char)251)))))));
                        arr_30 [2] [2] [2] [i_7] [2] = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                        var_21 = ((((min((((((/* implicit */_Bool) (short)-11962)) ? (16LL) : (((/* implicit */long long int) var_11)))), (((((/* implicit */_Bool) -1LL)) ? (-9223372036854775805LL) : (-759195968553596447LL))))) + (9223372036854775807LL))) >> (((((long long int) var_7)) - (1979544660LL))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_0] = 1642772848;
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((1799549146), (((/* implicit */int) var_6))))), (min((5142484587618479280LL), (((/* implicit */long long int) -1))))))) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-5192662671656023575LL) : (-7792002646666175955LL)))) && ((!(((/* implicit */_Bool) (unsigned short)63985)))))))));
                    }
                }
            } 
        } 
    } 
}
