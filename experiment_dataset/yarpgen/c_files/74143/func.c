/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74143
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
    var_12 = ((/* implicit */signed char) (~(var_11)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (signed char)127))))))))));
                    var_14 = ((/* implicit */long long int) min(((signed char)127), (((/* implicit */signed char) (_Bool)1))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        arr_10 [i_3] [i_3] = (-((~(-3924931960396669328LL))));
        var_15 = ((/* implicit */signed char) var_4);
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
        {
            var_16 = (~((+(arr_8 [i_4]))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) 1550325913))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (var_0)));
                        arr_19 [i_3] [i_4] [i_3] [2] = ((/* implicit */unsigned int) (unsigned char)0);
                    }
                } 
            } 
        }
        for (short i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                arr_25 [i_3] [i_8] [20LL] [i_3] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_6)) ? (var_8) : (arr_15 [i_3] [i_3]))));
                var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))) + (((((/* implicit */_Bool) max((var_8), (var_8)))) ? (max((((/* implicit */unsigned long long int) var_11)), (arr_12 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [6U] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (0U)))))));
            }
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58643))) : (max((var_2), (((/* implicit */unsigned int) var_9)))))))));
                arr_28 [i_3] [i_7] [11ULL] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_26 [i_3] [i_3] [i_3] [i_3])))))), (((unsigned long long int) var_4)));
                var_21 = ((/* implicit */unsigned char) ((unsigned short) arr_13 [i_3] [i_3] [i_3]));
                arr_29 [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_9])) ? (var_5) : (((/* implicit */long long int) var_11))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_22 = (((~(var_6))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)116))))));
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+((-(var_11))))))));
            }
            var_24 = ((((((unsigned long long int) 9223372036854775807LL)) ^ (((/* implicit */unsigned long long int) ((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) * (((/* implicit */unsigned long long int) var_3)));
        }
        arr_33 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (~(2032402073)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_15 [i_3] [i_3])) : (arr_24 [i_3] [12LL] [i_3] [i_3])))));
        var_25 = ((/* implicit */unsigned long long int) (-(var_6)));
    }
    for (short i_11 = 1; i_11 < 9; i_11 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) max((var_26), (var_0)));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (signed char)-74))))))) > (((((/* implicit */_Bool) max((var_0), (var_0)))) ? ((~(var_3))) : (((/* implicit */long long int) -2032402074)))))))));
                    var_28 = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */long long int) arr_2 [i_11 + 1] [i_11 + 2])), (var_5))));
                }
            } 
        } 
        arr_42 [i_11] = ((/* implicit */unsigned int) (~((-(arr_13 [i_11 - 1] [i_11 + 3] [i_11 + 2])))));
    }
}
