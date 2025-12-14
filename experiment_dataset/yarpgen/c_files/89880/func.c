/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89880
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
    var_19 = ((/* implicit */int) 35184372088831LL);
    var_20 = ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_21 = ((/* implicit */long long int) (signed char)31);
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((max((35184372088815LL), (35184372088831LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1LL)))))))), (var_4))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3137160688U))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53570)) && (((/* implicit */_Bool) (signed char)37))))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_23 = ((/* implicit */long long int) (unsigned char)0);
            /* LoopNest 2 */
            for (short i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (min((((/* implicit */unsigned char) var_16)), ((unsigned char)253)))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))));
                        arr_11 [i_3] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_4))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */short) min((((((/* implicit */_Bool) 4123852881557967766LL)) ? (8327623719757108812ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3733))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -919433791)), (3137160688U))))));
        }
    }
    for (short i_4 = 1; i_4 < 11; i_4 += 2) 
    {
        var_27 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) 1157806607U)) - (15404882970184033821ULL))), (max((((/* implicit */unsigned long long int) (unsigned short)7)), (4958865180993405569ULL)))));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (signed char)-1))));
        var_29 = ((/* implicit */short) (!((!((_Bool)0)))));
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((long long int) (short)-2849)))));
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (unsigned short)46427))));
                    var_32 -= (~(((long long int) (unsigned short)39101)));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_7 = 2; i_7 < 15; i_7 += 1) 
    {
        for (unsigned short i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            for (long long int i_9 = 2; i_9 < 12; i_9 += 1) 
            {
                {
                    var_33 = ((/* implicit */_Bool) (signed char)-31);
                    arr_28 [i_9] = (~(((((/* implicit */long long int) ((/* implicit */int) (signed char)-24))) % (var_8))));
                    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-94)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_11 = 1; i_11 < 12; i_11 += 3) 
                        {
                            var_35 = 2346573953U;
                            arr_33 [i_7] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (5309634793106999209LL)));
                            arr_34 [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)36)) + (((/* implicit */int) (short)7116)))) << (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -7243691046457148041LL)))))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)4)) ? (-5309634793106999210LL) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-114)))))));
                        }
                        var_37 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (signed char)0)), (0U)))));
                    }
                }
            } 
        } 
    } 
    var_38 = var_15;
}
