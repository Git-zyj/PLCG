/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97670
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((-4851571183790198694LL), (((/* implicit */long long int) (unsigned short)3316)))) | (((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned char)0)))))))) ? (((int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)0))))) : (((/* implicit */int) max(((signed char)-31), (var_8))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) (unsigned char)225))))), (min((5900269739663680231ULL), (((/* implicit */unsigned long long int) (unsigned short)37758))))))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0 + 1])), (((((/* implicit */_Bool) (unsigned char)63)) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(arr_2 [(signed char)5]))))))));
                var_12 ^= ((/* implicit */unsigned char) ((unsigned short) ((signed char) (signed char)90)));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (unsigned char)192)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max(((~(var_3))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)-1)) & (((/* implicit */int) arr_8 [i_2])))), ((+(((/* implicit */int) (short)(-32767 - 1))))))))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    var_16 |= ((/* implicit */short) (~(((/* implicit */int) max((arr_6 [i_2 + 1] [i_2 + 4]), (arr_6 [i_2 + 4] [i_2 - 1]))))));
                    arr_12 [i_2] [i_3] [i_4] [i_3] = ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)103))))) > (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))))))) ? (((/* implicit */int) arr_5 [i_2] [i_3])) : (((/* implicit */int) ((unsigned char) arr_11 [i_2] [i_2] [i_2 + 1]))));
                    var_17 = ((/* implicit */unsigned char) arr_5 [i_3] [i_4]);
                }
                arr_13 [i_2] [i_3] = ((/* implicit */short) (+(min((((((/* implicit */_Bool) arr_5 [i_3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))) : (var_7))), (((/* implicit */unsigned int) ((short) arr_8 [i_3])))))));
                var_18 += arr_8 [i_2 - 2];
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */long long int) var_7)) : (max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) (short)-26245)) ? (var_0) : (((/* implicit */long long int) 4064))))))));
}
