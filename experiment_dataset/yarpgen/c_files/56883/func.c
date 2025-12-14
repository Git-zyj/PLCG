/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56883
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) (~(max((((5470924758718453604ULL) + (2631124781305728935ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
        var_18 += ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-99)), (13490752828084098103ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) * (((/* implicit */int) max(((signed char)98), ((signed char)-73))))))) : (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)122)), (var_9)))) + (min((8815386005014090308ULL), (((/* implicit */unsigned long long int) (signed char)-99)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))) > (var_10)));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (91762691U)));
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))))))));
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) 29477589U)), (var_2)))));
    }
    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)99)) ? (min((var_6), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 13; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_15 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-38)) == (((/* implicit */int) max((var_15), ((_Bool)1))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))) != (1642133736420470768ULL)))), ((signed char)43))))));
                    var_24 = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-100)), (158574476U)))), (max((((/* implicit */long long int) var_5)), (-5619766739389671261LL)))));
                    var_25 = ((/* implicit */signed char) min((var_25), ((signed char)73)));
                }
            } 
        } 
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1642133736420470768ULL)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) / (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (unsigned short)18373))))) : ((((+(var_9))) << (((/* implicit */int) ((((/* implicit */_Bool) (short)11213)) && (((/* implicit */_Bool) var_2)))))))));
    }
    var_26 = ((/* implicit */_Bool) (((+(max((((/* implicit */unsigned int) (_Bool)1)), (0U))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
    var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)-31)) | (((/* implicit */int) var_7)))), (((/* implicit */int) (short)22996))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ^ (max((var_2), (((/* implicit */unsigned long long int) var_13))))))));
}
