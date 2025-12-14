/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83073
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (signed char)-45))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) max((((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-45)) < (((/* implicit */int) var_8)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (-1024738015))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 1171673377U)) || (var_18))))))) >= (1171673377U)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
    {
        arr_12 [0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10563))) < (3578681800179960611ULL)));
        arr_13 [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)25725))) ^ (262144U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32753))))))))));
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)56)))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) (+(-1311700052)));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 3; i_7 < 16; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (var_1)));
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (unsigned short)50717))));
                                var_26 = ((/* implicit */long long int) var_18);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_9 = 1; i_9 < 14; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_10))));
                    arr_33 [i_4] [i_9] [(_Bool)1] = ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (1127633247970772654ULL))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 1171673377U)) || (((/* implicit */_Bool) var_1))))));
    }
    var_29 = ((/* implicit */long long int) var_6);
    var_30 = (unsigned short)127;
}
