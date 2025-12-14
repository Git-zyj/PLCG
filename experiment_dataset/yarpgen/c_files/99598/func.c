/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99598
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
    var_10 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)252))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 &= ((/* implicit */signed char) var_6);
                var_12 = ((/* implicit */signed char) 746061357);
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) -746061362)) ? (((/* implicit */int) (unsigned short)0)) : (746061357))))));
                var_14 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((signed char) 60U))))) ? (var_8) : (((/* implicit */unsigned int) 1216383880))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            var_15 *= ((/* implicit */signed char) min(((+(arr_6 [i_3 + 1] [8U]))), (((/* implicit */unsigned long long int) ((short) -746061375)))));
            var_16 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) (short)-8192)))))));
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_4 [i_4] [i_4] [i_2])))))) ? ((-(((unsigned int) var_5)))) : (((((((/* implicit */unsigned int) 2147483647)) | (60U))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) / (1719770480U)))))));
            arr_13 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7LL)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (unsigned char)57))))) ? (((/* implicit */int) ((_Bool) (unsigned char)250))) : (((/* implicit */int) ((_Bool) var_3))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)3122))));
            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)45219))));
            arr_16 [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) var_5)))) != (((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-32747))))))));
            var_20 &= ((/* implicit */unsigned long long int) (-(7LL)));
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (signed char)99))));
            var_22 = ((/* implicit */unsigned long long int) var_3);
            var_23 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) var_7)))));
        }
    }
}
