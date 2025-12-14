/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62674
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_3)), (arr_0 [i_0])))) ? (((max((((/* implicit */unsigned long long int) arr_2 [i_0])), (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0]) != (((/* implicit */long long int) arr_2 [7ULL])))))))) : (((/* implicit */unsigned long long int) var_14))));
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)126))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) ((((max((82968953U), (((/* implicit */unsigned int) (_Bool)1)))) >> ((((+(arr_1 [i_1]))) - (15868143408037734786ULL))))) > (var_14)));
        var_22 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) arr_9 [i_2]))), (min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_2]))))), (arr_2 [i_2])))));
                var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132))) : (2047U)))) ? (var_7) : (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (var_8)))))));
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 3) 
            {
                {
                    var_26 = ((/* implicit */long long int) arr_20 [i_4] [i_6 - 2] [i_6]);
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((_Bool) arr_6 [i_5])) ? (((/* implicit */int) arr_0 [i_6 - 1])) : (((/* implicit */int) (unsigned char)132))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_5)))) ? (4294967295U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
                    arr_21 [i_6 - 2] [i_6] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_11 [i_6] [i_6]), (((/* implicit */unsigned char) arr_7 [i_4])))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)166))))) ? (((/* implicit */unsigned long long int) (-(var_9)))) : (var_7)))));
                }
            } 
        } 
    } 
}
