/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66299
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? ((+(max((((/* implicit */unsigned long long int) (short)10736)), (0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_10 [8U] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) && (((/* implicit */_Bool) max((((/* implicit */short) (!(var_17)))), (var_1)))))))));
                                var_20 = ((/* implicit */unsigned long long int) (((~((~(4294967295U))))) << (((((/* implicit */int) ((unsigned char) arr_11 [i_0]))) >> ((((~(arr_12 [i_0] [5LL] [i_1] [i_2] [i_3] [i_4]))) - (2925873502U)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) -1444943270);
                        var_22 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_3 [i_0] [i_5 + 1])) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) var_2)))) <= ((+(((/* implicit */int) var_2)))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1444943270))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            {
                var_24 = ((/* implicit */int) min(((-(arr_20 [i_6] [i_7] [i_7]))), (arr_20 [i_7] [i_6] [i_6])));
                var_25 -= ((/* implicit */signed char) (~(((((unsigned long long int) var_13)) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6] [i_7] [18U])))))));
                /* LoopNest 3 */
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (signed char i_9 = 4; i_9 < 20; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 2; i_10 < 20; i_10 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-1444943270)))) ? (((/* implicit */int) min(((unsigned char)96), ((unsigned char)159)))) : ((~(((/* implicit */int) arr_17 [i_6] [i_7]))))))) ^ (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) 1241685142U))))) ? (122341806U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_2)))))))));
                                var_27 = ((/* implicit */signed char) var_4);
                                var_28 -= ((/* implicit */_Bool) ((unsigned short) var_11));
                            }
                        } 
                    } 
                } 
                var_29 = (+(((((((/* implicit */unsigned long long int) 0LL)) % (5460636777265028301ULL))) / (min((var_14), (((/* implicit */unsigned long long int) var_7)))))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (-1063230970)))), (min((((/* implicit */unsigned long long int) var_13)), (var_5))))) <= (max((((/* implicit */unsigned long long int) -8809646598452511032LL)), (var_3))))))));
}
