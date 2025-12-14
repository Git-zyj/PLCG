/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93733
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) (~(min((((((/* implicit */_Bool) (short)1550)) ? (15891797536857698574ULL) : (((/* implicit */unsigned long long int) arr_6 [i_1] [9])))), (((/* implicit */unsigned long long int) 2060924451))))));
                    var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_4 [i_1] [i_1] [4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (3498279106127049910LL) : (7227501547022087097LL))), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)53)) >= (-1619531519))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)203)) > (942592064)))) : (((/* implicit */int) (unsigned short)65535)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (2147483647)))) ? ((-(10269157658767876479ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5 - 1] [i_3])))))) ? (min((((/* implicit */long long int) -2060924452)), (((((/* implicit */_Bool) (unsigned char)137)) ? (-585833503812354570LL) : (-585833503812354570LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(-7227501547022087097LL)))) ? (((((/* implicit */_Bool) -7227501547022087098LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23102))) : (var_13))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-28621)) | (((/* implicit */int) (signed char)127)))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [9])), (-8369257157425852893LL)))))))));
                                arr_18 [7ULL] [i_5 - 1] [i_5] [i_6] [i_3] [7ULL] [(signed char)4] = ((/* implicit */unsigned int) (short)23102);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
